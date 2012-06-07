/****************************************************************************
**
** This file is part of LAN Messenger.
** 
** Copyright (c) 2010 - 2012 Qualia Digital Solutions.
** 
** Contact:  qualiatech@gmail.com
** 
** LAN Messenger is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** LAN Messenger is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with LAN Messenger.  If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/


#include "messaging.h"


lmcMessaging::lmcMessaging(void)
{
	pNetwork = new lmcNetwork();

	connect(pNetwork, SIGNAL(broadcastReceived(DatagramHeader*, QString*)), 
		this, SLOT(receiveBroadcast(DatagramHeader*, QString*)));

	connect(pNetwork, SIGNAL(messageReceived(DatagramHeader*, QString*)), 
		this, SLOT(receiveMessage(DatagramHeader*, QString*)));

	connect(pNetwork, SIGNAL(webMessageReceived(QString*)),
		this, SLOT(receiveWebMessage(QString*)));

	connect(pNetwork, SIGNAL(newConnection(QString*, QString*)), 
		this, SLOT(newConnection(QString*, QString*)));

	connect(pNetwork, SIGNAL(connectionLost(QString*)),
		this, SLOT(connectionLost(QString*)));

	connect(pNetwork, SIGNAL(progressReceived(QString*, QString*)),
		this, SLOT(receiveProgress(QString*, QString*)));

    connect(pNetwork, SIGNAL(connectionStateChanged()),
            this, SLOT(network_connectionStateChanged()));

	userList.clear();
	groupList.clear();
	userGroupMap.clear();
	receivedList.clear();
	pendingList.clear();
	loopback = false;
}

lmcMessaging::~lmcMessaging(void)
{
}

void lmcMessaging::init(XmlMessage *pInitParams)
{
    lmctrace("Messaging initialized");

	pNetwork->init(pInitParams);

    QString logonName = getLogonName();
	QString szAddress = pNetwork->physicalAddress();
	QString userId = createUserId(&szAddress, &logonName);

	pNetwork->setLocalId(&userId);
	
	pSettings = new lmcSettings();
	QString userStatus = pSettings->value(IDS_STATUS, IDS_STATUS_VAL).toString();
    int sIndex = statusIndexFromCode(userStatus);
	//	if status not recognized, default to available
	if(sIndex < 0)
		userStatus = statusCode[0];
	QString userName = getUserName();

	int nAvatar = pSettings->value(IDS_AVATAR, IDS_AVATAR_VAL).toInt();
	QString userNote = pSettings->value(IDS_NOTE, IDS_NOTE_VAL).toString();
	localUser = new User(userId, IDA_VERSION, pNetwork->ipAddress, userName, userStatus, QString::null, nAvatar, userNote);

	loadGroups();

	nTimeout = pSettings->value(IDS_TIMEOUT, IDS_TIMEOUT_VAL).toInt() * 1000;
	nMaxRetry = pSettings->value(IDS_MAXRETRIES, IDS_MAXRETRIES_VAL).toInt();

	pTimer = new QTimer(this);
	connect(pTimer, SIGNAL(timeout()), this, SLOT(timer_timeout()));
	pTimer->start(1000);

	msgId = 1;
}

void lmcMessaging::start(void) {
    lmctrace("Messaging started");
	pNetwork->start();

	sendBroadcast(MT_Depart, NULL);
	sendBroadcast(MT_Announce, NULL);
}

void lmcMessaging::update(void) {
    lmctrace("Refreshing contacts list...");
	sendBroadcast(MT_Announce, NULL);

	for(int index = 0; index < userList.count(); index++)
		sendMessage(MT_Ping, &userList[index].id, NULL);
}

void lmcMessaging::stop(void) {
    sendBroadcast(MT_Depart, NULL);
	pNetwork->stop();

	pSettings->setValue(IDS_STATUS, localUser->status);
	pSettings->setValue(IDS_AVATAR, localUser->avatar);

	saveGroups();

    lmctrace("Messaging stopped");
}

bool lmcMessaging::isConnected(void) {
	return pNetwork->isConnected;
}

bool lmcMessaging::canReceive(void) {
	return pNetwork->canReceive;
}

void lmcMessaging::setLoopback(bool on) {
	loopback = on;
}

User* lmcMessaging::getUser(QString* id) {
	for(int index = 0; index < userList.count(); index++)
		if(userList[index].id.compare(*id) == 0)
			return &userList[index];

	return NULL;
}

void lmcMessaging::settingsChanged(void) {
	nTimeout = pSettings->value(IDS_TIMEOUT, IDS_TIMEOUT_VAL).toInt() * 1000;
	nMaxRetry = pSettings->value(IDS_MAXRETRIES, IDS_MAXRETRIES_VAL).toInt();
	pNetwork->settingsChanged();

	QString userName = getUserName();
	if(localUser->name.compare(userName) != 0) {
		localUser->name = userName;
		XmlMessage xmlMessage;
		xmlMessage.addData(XN_NAME, userName);
		sendMessage(MT_UserName, NULL, &xmlMessage);
	}
}

void lmcMessaging::updateGroup(GroupOp op, QVariant value1, QVariant value2) {
	switch(op) {
	case GO_New:
		groupList.append(Group(value1.toString(), value2.toString()));
		break;
	case GO_Rename:
		for(int index = 0; index < groupList.count(); index++) {
			if(groupList[index].id.compare(value1.toString()) == 0) {
				groupList[index].name = value2.toString();
				break;
			}
		}
		break;
	case GO_Move:
		for(int index = 0; index < groupList.count(); index++) {
			if(groupList[index].id.compare(value1.toString()) == 0) {
				groupList.move(index, value2.toInt());
				break;
			}
		}
		break;
	case GO_Delete:
		for(int index = 0; index < groupList.count(); index++) {
			if(groupList[index].id.compare(value1.toString()) == 0) {
				groupList.removeAt(index);
				break;
			}
		}
		break;
	default:
		break;
	}

	saveGroups();
}

void lmcMessaging::updateGroupMap(QString oldGroup, QString newGroup) {
	QMap<QString, QString>::const_iterator index = userGroupMap.constBegin();
	while (index != userGroupMap.constEnd()) {
		if(((QString)index.value()).compare(oldGroup) == 0)
			userGroupMap.insert(index.key(), newGroup);
		++index;
	}
}

//	save groups and group mapping
void lmcMessaging::saveGroups(void)
{
    QSettings groupSettings( groupFile(), QSettings::IniFormat );
	groupSettings.beginWriteArray(IDS_GROUPHDR);
	for(int index = 0; index < groupList.count(); index++) {
		groupSettings.setArrayIndex(index);
		groupSettings.setValue(IDS_GROUP, groupList[index].id);
		groupSettings.setValue(IDS_GROUPNAME, groupList[index].name);
	}
	groupSettings.endArray();

	groupSettings.beginWriteArray(IDS_GROUPMAPHDR);
	QMapIterator<QString, QString> i(userGroupMap);
	int count = 0;
	while(i.hasNext()) {
		groupSettings.setArrayIndex(count);
		i.next();
		groupSettings.setValue(IDS_USER, i.key());
		groupSettings.setValue(IDS_GROUP, i.value());
		count++;
	}
	groupSettings.endArray();

	groupSettings.sync();

	// make sure the correct version is set in the preferences file
	// so the group settings will not be wrongly migrated next time
	// application starts
	pSettings->setValue(IDS_VERSION, IDA_VERSION);
}

int lmcMessaging::userCount(void) {
	return userList.count();
}

QString lmcMessaging::groupFile(void)
{
    return QDir::toNativeSeparators(QDesktopServices::storageLocation( QDesktopServices::DataLocation) + "/"SL_GROUPFILE );
}

void lmcMessaging::network_connectionStateChanged(void) {
	if(isConnected())
		localUser->address = pNetwork->ipAddress;
	emit connectionStateChanged();
}

void lmcMessaging::timer_timeout(void) {
	//	check if any pending message has timed out
	checkPendingMsg();
}

QString lmcMessaging::createUserId(QString* lpszAddress, QString* lpszUserName) {
	QString userId = *lpszAddress;
	userId.append(lpszUserName);
	userId.remove(":");

	return userId;
}

QString lmcMessaging::getUserName(void) {
	QString userName = pSettings->value(IDS_USERNAME, IDS_USERNAME_VAL).toString();
	if(userName.isEmpty())
        userName = getLogonName();
	return userName;
}

void lmcMessaging::loadGroups(void)
{
	bool defaultFound = false;

    QSettings groupSettings( groupFile(), QSettings::IniFormat );
	int size = groupSettings.beginReadArray(IDS_GROUPHDR);
	for(int index = 0; index < size; index++) {
		groupSettings.setArrayIndex(index);
		QString groupId = groupSettings.value(IDS_GROUP).toString();
		QString group = groupSettings.value(IDS_GROUPNAME).toString();
		groupList.append(Group(groupId, group));
		// check if the default group is present in the group list
		if(groupId.compare(GRP_DEFAULT_ID) == 0)
			defaultFound = true;
	}
	groupSettings.endArray();

	if(groupList.count() == 0 || !defaultFound)
		groupList.append(Group(GRP_DEFAULT_ID, GRP_DEFAULT));

	size = groupSettings.beginReadArray(IDS_GROUPMAPHDR);
	for(int index = 0; index < size; index++)
	{
		groupSettings.setArrayIndex(index);
		QString user = groupSettings.value(IDS_USER).toString();
		QString group = groupSettings.value(IDS_GROUP).toString();
		userGroupMap.insert(user, group);
	}
	groupSettings.endArray();
}

void lmcMessaging::getUserInfo(XmlMessage* pMessage) {
	QString firstName = pSettings->value(IDS_USERFIRSTNAME, IDS_USERFIRSTNAME_VAL).toString();
	QString lastName = pSettings->value(IDS_USERLASTNAME, IDS_USERLASTNAME_VAL).toString();
	QString about = pSettings->value(IDS_USERABOUT, IDS_USERABOUT_VAL).toString();
	firstName = firstName.isEmpty() ? "N/A" : firstName;
	lastName = lastName.isEmpty() ? "N/A" : lastName;
	about = about.isEmpty() ? "N/A" : about;

	pMessage->addData(XN_USERID, localUser->id);
	pMessage->addData(XN_NAME, localUser->name);
	pMessage->addData(XN_ADDRESS, localUser->address);
	pMessage->addData(XN_VERSION, localUser->version);
	pMessage->addData(XN_STATUS, localUser->status);
	pMessage->addData(XN_NOTE, localUser->note);
    pMessage->addData(XN_LOGON, getLogonName());
    pMessage->addData(XN_HOST, getHostName());
    pMessage->addData(XN_OS, getOSName());
	pMessage->addData(XN_FIRSTNAME, firstName);
	pMessage->addData(XN_LASTNAME, lastName);
	pMessage->addData(XN_ABOUT, about);
}

bool lmcMessaging::addUser(QString szUserId, QString szVersion, QString szAddress, QString szName, QString szStatus,
						   QString szAvatar, QString szNote) {
	for(int index = 0; index < userList.count(); index++)
		if(userList[index].id.compare(szUserId) == 0)
			return false;

    lmctrace("Adding new user: " + szUserId + ", " + szVersion + ", " + szAddress);

	if(!userGroupMap.contains(szUserId) || !groupList.contains(Group(userGroupMap.value(szUserId))))
		userGroupMap.insert(szUserId, GRP_DEFAULT_ID);

	int nAvatar = szAvatar.isNull() ? -1 : szAvatar.toInt();

	userList.append(User(szUserId, szVersion, szAddress, szName, szStatus, userGroupMap[szUserId], nAvatar, szNote));
	if(!szStatus.isNull()) {
		XmlMessage xmlMessage;
		xmlMessage.addHeader(XN_FROM, szUserId);
		xmlMessage.addData(XN_STATUS, szStatus);
		//	send a status message to app layer, this is different from announce message
		emit messageReceived(MT_Status, &szUserId, &xmlMessage);
        int statusIndex = statusIndexFromCode(szStatus);
		if(statusType[statusIndex] == StatusTypeOffline) // offline status
			return false;	//	no need to send a new user message to app layer
	}

	emit messageReceived(MT_Announce, &szUserId, NULL);
	return true;
}

void lmcMessaging::updateUser(MessageType type, QString szUserId, QString szUserData) {
	User* pUser = getUser(&szUserId);
	if(!pUser)
		return;

	XmlMessage updateMsg;	
	switch(type) {
	case MT_Status:
		if(pUser->status.compare(szUserData) != 0) {
			QString oldStatus = pUser->status;
			pUser->status = szUserData;

            int statusIndex = statusIndexFromCode(oldStatus);
			if(statusType[statusIndex] == StatusTypeOffline) // old status is offline
				emit messageReceived(MT_Announce, &szUserId, NULL);
				
			updateMsg.addData(XN_STATUS, pUser->status);
			emit messageReceived(MT_Status, &szUserId, &updateMsg);

            statusIndex = statusIndexFromCode(pUser->status);
			if(statusType[statusIndex] == StatusTypeOffline) { // new status is offline
				// Send a dummy xml message. A non null xml message implies that the
				// user is only in offline status, and not actually offline.
				XmlMessage xmlMessage;
				emit messageReceived(MT_Depart, &szUserId, &xmlMessage);
			}
		}
		break;
	case MT_UserName:
		if(pUser->name.compare(szUserData) != 0) {
			pUser->name = szUserData;
			updateMsg.addData(XN_NAME, pUser->name);
			emit messageReceived(MT_UserName, &szUserId, &updateMsg);
		}
		break;
	case MT_Note:
		if(pUser->note.compare(szUserData) != 0) {
			pUser->note = szUserData;
			updateMsg.addData(XN_NOTE, pUser->note);
			emit messageReceived(MT_Note, &szUserId, &updateMsg);
		}
		break;
	case MT_Group:
		pUser->group = szUserData;
		userGroupMap.insert(pUser->id, pUser->group);
		saveGroups();
		break;
	default:
		break;
	}
}

void lmcMessaging::removeUser(QString szUserId) {
	for(int index = 0; index < userList.count(); index++)
		if(userList.value(index).id.compare(szUserId) == 0) {
			XmlMessage statusMsg;
			statusMsg.addData(XN_STATUS, statusCode[ST_COUNT - 1]);
			emit messageReceived(MT_Status, &szUserId, &statusMsg);
			emit messageReceived(MT_Depart, &szUserId, NULL);
			userList.removeAt(index);
			return;
		}
}

bool lmcMessaging::addReceivedMsg(qint64 msgId, QString userId) {
	ReceivedMsg received(msgId, userId);

	if(receivedList.contains(received))
		return false;

	receivedList.append(received);
	return true;
}

void lmcMessaging::addPendingMsg(qint64 msgId, MessageType type, QString* lpszUserId, XmlMessage* pMessage) {
	XmlMessage xmlMessage;
	if(pMessage)
		xmlMessage = pMessage->clone();
	pendingList.append(PendingMsg(msgId, true, QDateTime::currentDateTime(), type, *lpszUserId, xmlMessage, 0));
}

void lmcMessaging::removePendingMsg(qint64 msgId) {
	for(int index = 0; index < pendingList.count(); index++) {
		if(pendingList[index].msgId == msgId) {
			pendingList[index].active = false;
			pendingList.removeAt(index);
			return;
		}
	}
}

void lmcMessaging::removeAllPendingMsg(QString* lpszUserId) {
	for(int index = 0; index < pendingList.count(); index++) {
		if(pendingList[index].userId.compare(*lpszUserId) == 0) {
			pendingList.removeAt(index);
			index--;
		}
	}
}

void lmcMessaging::checkPendingMsg(void) {
	for(int index = 0; index < pendingList.count(); index++) {
		//	check if message has timed out
		if(pendingList[index].active && pendingList[index].timeStamp.msecsTo(QDateTime::currentDateTime()) > nTimeout) {
			if(pendingList[index].retry < nMaxRetry) {
				//	send the message once more
				pendingList[index].retry++;
				pendingList[index].timeStamp = QDateTime::currentDateTime();
				resendMessage(pendingList[index].type, pendingList[index].msgId, &pendingList[index].userId, &pendingList[index].xmlMessage);
			}
			else {
				XmlMessage statusMsg;
				//	max retries exceeded. mark message as failed.
				switch(pendingList[index].type) {
				case MT_Message:
					emit messageReceived(MT_Failed, &pendingList[index].userId, &pendingList[index].xmlMessage);
					break;
				case MT_Ping:
					statusMsg.addData(XN_STATUS, statusCode[ST_COUNT - 1]);
					emit messageReceived(MT_Status, &pendingList[index].userId, &statusMsg);
					emit messageReceived(MT_Depart, &pendingList[index].userId, NULL);
					removeUser(pendingList[index].userId);
					break;
                default:
                    break;
				}
				pendingList[index].active = false;
				pendingList.removeAt(index);
				index--;	//	since next item will have this index now
			}
		}
	}
}

void lmcMessaging::resendMessage(MessageType type, qint64 msgId, QString* lpszUserId, XmlMessage* pMessage) {
	if(lpszUserId && !getUser(lpszUserId))
		return;

	prepareMessage(type, msgId, true, lpszUserId, pMessage);
}


QString lmcMessaging::addHeader(MessageType type, qint64 id, QString* lpszLocalId, QString* lpszPeerId, XmlMessage* pMessage)
{
    if(!pMessage)
        pMessage = new XmlMessage();

    // remove time stamp from message
    pMessage->removeHeader(XN_TIME);

    pMessage->addHeader(XN_FROM, *lpszLocalId);
    if(lpszPeerId)
        pMessage->addHeader(XN_TO, *lpszPeerId);
    pMessage->addHeader(XN_MESSAGEID, QString::number(id));
    pMessage->addHeader(XN_TYPE, MessageTypeNames[type]);

    return pMessage->toString();
}

bool lmcMessaging::getHeader(QString* lpszMessage, MessageHeader** ppHeader, XmlMessage** ppMessage) {
    *ppMessage = new XmlMessage(*lpszMessage);
    if(!((*ppMessage)->isValid()))
        return false;

    // add time stamp to message
    (*ppMessage)->addHeader(XN_TIME, QString::number(QDateTime::currentDateTimeUtc().toMSecsSinceEpoch()));

    int type =  indexOf(MessageTypeNames, MT_Max, (*ppMessage)->header(XN_TYPE));
    if(type < 0)
        return false;

    *ppHeader = new MessageHeader(
                    (MessageType)type,
                    (*ppMessage)->header(XN_MESSAGEID).toLongLong(),
                    (*ppMessage)->header(XN_FROM));
    return true;
}


int  lmcMessaging::indexOf(const QString array[], int size, const QString& value)
{
    for(int index = 0; index < size; index++)
    {
        if(value == array[index])
            return index;
    }

    return (-1);
}

int lmcMessaging::statusIndexFromCode(QString status)
{
    for(int index = 0; index < ST_COUNT; index++)
        if(statusCode[index].compare(status) == 0)
            return index;
    return -1;
}

QString  lmcMessaging::formatSize(qint64 size)
{
    qint64 gb = 1073741824;
    qint64 mb = 1048576;
    qint64 kb = 1024;

    if(size > gb)
        return QString("%1 GB").arg((double)size / gb, 0, 'f', 2);
    else if(size > mb)
        return QString("%1 MB").arg((double)size / mb, 0, 'f', 2);
    else if(size > kb)
        return QString("%1 KB").arg((double)size / kb, 0, 'f', 2);
    else
        return QString("%1 bytes").arg(size);
}

QString  lmcMessaging::getUuid(void)
{
    QString Uuid = QUuid::createUuid().toString();
    Uuid = Uuid.remove("{").remove("}").remove("-");
    return Uuid;
}

QString  lmcMessaging::getLogonName(void)
{
#if defined Q_WS_WIN	//	if platform is Windows
    TCHAR szUserName[UNLEN + 1];
    DWORD nSize = sizeof(szUserName);
    GetUserName(szUserName, &nSize);
    return QString::fromStdWString(szUserName);
#else	// this code should work for MAC and Linux
    char* szUserName;
    szUserName = getenv("USER");
    if(szUserName)
        return QString::fromAscii(szUserName);
#endif

    return QString::null;
}

QString  lmcMessaging::getHostName(void)
{
    return QHostInfo::localHostName();
}

QString  lmcMessaging::getOSName(void)
{
    QString osName = "Unknown";

#if defined Q_WS_WIN
    switch(QSysInfo::WindowsVersion) {
    case QSysInfo::WV_NT:
        osName = "Windows NT";
        break;
    case QSysInfo::WV_2000:
        osName = "Windows 2000";
        break;
    case QSysInfo::WV_XP:
        osName = "Windows XP";
        break;
    case QSysInfo::WV_2003:
        osName = "Windows Server 2003";
        break;
    case QSysInfo::WV_VISTA:
        osName = "Windows Vista";
        break;
    case QSysInfo::WV_WINDOWS7:
        osName = "Windows 7";
        break;
    default:
        osName = "Windows";
        break;
    }
#elif defined Q_WS_MAC
    switch(QSysInfo::MacintoshVersion) {
    case QSysInfo::MV_CHEETAH:
        osName = "Mac OS X 10.0";
        break;
    case QSysInfo::MV_PUMA:
        osName = "Mac OS X 10.1";
        break;
    case QSysInfo::MV_JAGUAR:
        osName = "Mac OS X 10.2";
        break;
    case QSysInfo::MV_PANTHER:
        osName = "Mac OS X 10.3";
        break;
    case QSysInfo::MV_TIGER:
        osName = "Mac OS X 10.4";
        break;
    case QSysInfo::MV_LEOPARD:
        osName = "Mac OS X 10.5";
        break;
    case QSysInfo::MV_SNOWLEOPARD:
        osName = "Mac OS X 10.6";
        break;
    case QSysInfo::MV_LION:
        osName = "Mac OS X 10.7";
        break;
    default:
        osName = "Mac OS X";
        break;
    }
#elif defined Q_WS_X11
    osName = "Linux/X11";
#endif

    return osName;
}

QString  lmcMessaging::escapeDelimiter(QString *lpszData)
{
    return lpszData->replace(DELIMITER, DELIMITER_ESC, Qt::CaseSensitive);
}

QString  lmcMessaging::unescapeDelimiter(QString* lpszData)
{
    return lpszData->replace(DELIMITER_ESC, DELIMITER, Qt::CaseSensitive);
}

//	Returns:
//	<0 if version 1 is older
//	>0 if version 1 is newer
//	0 if both versions are same
int  lmcMessaging::compareVersions(const QString& version1, const QString& version2)
{
    QStringList v1 = version1.split(".", QString::SkipEmptyParts);
    QStringList v2 = version2.split(".", QString::SkipEmptyParts);

    //	Assuming that the version is in x.x.x format, we only need to iterate 3 times
    for(int index = 0; index < 3; index++) {
        int comp = v1[index].toInt() - v2[index].toInt();
        if(comp != 0)
            return comp;
    }

    return 0;
}

QString  lmcMessaging::boolToString(bool value)
{
    return value ? LMC_TRUE : LMC_FALSE;
}

bool  lmcMessaging::stringToBool(const QString& value)
{
    return value.compare(LMC_TRUE) == 0 ? true : false;
}

//	Function that copies content of source to destination
//	Destination file will be overwritten
//	Supports only small files
bool  lmcMessaging::copyFile(const QString& source, const QString& destination)
{
    QFile srcFile(source);
    if(!srcFile.open(QIODevice::ReadOnly))
        return false;

    QByteArray data = srcFile.readAll();
    srcFile.close();

    QFile destFile(destination);
    if(!destFile.open(QIODevice::WriteOnly))
        return false;

    destFile.write(data);
    destFile.close();

    return true;
}


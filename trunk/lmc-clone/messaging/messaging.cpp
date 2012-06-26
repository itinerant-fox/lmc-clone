/*
    lmc-clone
    http://code.google.com/p/lmc-clone

    lmc is a lan messenger, instant messaging client.
    http://lanmsngr.sourceforge.net/
    http://sourceforge.net/projects/lanmsngr/

    GNU LESSER GENERAL PUBLIC LICENSE
    Version 3, 29 June 2007
    Copyright (c) 2007 Free Software Foundation, Inc. <http://fsf.org/>
    Everyone is permitted to copy and distribute verbatim copies of this license document, but changing it is not allowed.
    This version of the GNU Lesser General Public License incorporates the terms and conditions of version 3 of the GNU General Public License, supplemented by the additional permissions listed below.
     0. Additional Definitions.
    As used herein, ¡°this License¡± refers to version 3 of the GNU Lesser General Public License, and the ¡°GNU GPL¡± refers to version 3 of the GNU General Public License.
    ¡°The Library¡± refers to a covered work governed by this License, other than an Application or a Combined Work as defined below.
    An ¡°Application¡± is any work that makes use of an interface provided by the Library, but which is not otherwise based on the Library. Defining a subclass of a class defined by the Library is deemed a mode of using an interface provided by the Library.
    A ¡°Combined Work¡± is a work produced by combining or linking an Application with the Library. The particular version of the Library with which the Combined Work was made is also called the ¡°Linked Version¡±.
    The ¡°Minimal Corresponding Source¡± for a Combined Work means the Corresponding Source for the Combined Work, excluding any source code for portions of the Combined Work that, considered in isolation, are based on the Application, and not on the Linked Version.
    The ¡°Corresponding Application Code¡± for a Combined Work means the object code and/or source code for the Application, including any data and utility programs needed for reproducing the Combined Work from the Application, but excluding the System Libraries of the Combined Work.
     1. Exception to Section 3 of the GNU GPL.
    You may convey a covered work under sections 3 and 4 of this License without being bound by section 3 of the GNU GPL.
     2. Conveying Modified Versions.
    If you modify a copy of the Library, and, in your modifications, a facility refers to a function or data to be supplied by an Application that uses the facility (other than as an argument passed when the facility is invoked), then you may convey a copy of the modified version:
    a) under this License, provided that you make a good faith effort to ensure that, in the event an Application does not supply the function or data, the facility still operates, and performs whatever part of its purpose remains meaningful, or
    b) under the GNU GPL, with none of the additional permissions of this License applicable to that copy.
     3. Object Code Incorporating Material from Library Header Files.
    The object code form of an Application may incorporate material from a header file that is part of the Library. You may convey such object code under terms of your choice, provided that, if the incorporated material is not limited to numerical parameters, data structure layouts and accessors, or small macros, inline functions and templates (ten or fewer lines in length), you do both of the following:
    a) Give prominent notice with each copy of the object code that the Library is used in it and that the Library and its use are covered by this License.
    b) Accompany the object code with a copy of the GNU GPL and this license document.
     4. Combined Works.
    You may convey a Combined Work under terms of your choice that, taken together, effectively do not restrict modification of the portions of the Library contained in the Combined Work and reverse engineering for debugging such modifications, if you also do each of the following:
    a) Give prominent notice with each copy of the Combined Work that the Library is used in it and that the Library and its use are covered by this License.
    b) Accompany the Combined Work with a copy of the GNU GPL and this license document.
    c) For a Combined Work that displays copyright notices during execution, include the copyright notice for the Library among these notices, as well as a reference directing the user to the copies of the GNU GPL and this license document.
    d) Do one of the following:
        0) Convey the Minimal Corresponding Source under the terms of this License, and the Corresponding Application Code in a form suitable for, and under terms that permit, the user to recombine or relink the Application with a modified version of the Linked Version to produce a modified Combined Work, in the manner specified by section 6 of the GNU GPL for conveying Corresponding Source.
        1) Use a suitable shared library mechanism for linking with the Library. A suitable mechanism is one that (a) uses at run time a copy of the Library already present on the user's computer system, and (b) will operate properly with a modified version of the Library that is interface-compatible with the Linked Version.
    e) Provide Installation Information, but only if you would otherwise be required to provide such information under section 6 of the GNU GPL, and only to the extent that such information is necessary to install and execute a modified version of the Combined Work produced by recombining or relinking the Application with a modified version of the Linked Version. (If you use option 4d0, the Installation Information must accompany the Minimal Corresponding Source and Corresponding Application Code. If you use option 4d1, you must provide the Installation Information in the manner specified by section 6 of the GNU GPL for conveying Corresponding Source.)
     5. Combined Libraries.
    You may place library facilities that are a work based on the Library side by side in a single library together with other library facilities that are not Applications and are not covered by this License, and convey such a combined library under terms of your choice, if you do both of the following:
    a) Accompany the combined library with a copy of the same work based on the Library, uncombined with any other library facilities, conveyed under the terms of this License.
    b) Give prominent notice with the combined library that part of it is a work based on the Library, and explaining where to find the accompanying uncombined form of the same work.
     6. Revised Versions of the GNU Lesser General Public License.
    The Free Software Foundation may publish revised and/or new versions of the GNU Lesser General Public License from time to time. Such new versions will be similar in spirit to the present version, but may differ in detail to address new problems or concerns.
    Each version is given a distinguishing version number. If the Library as you received it specifies that a certain numbered version of the GNU Lesser General Public License ¡°or any later version¡± applies to it, you have the option of following the terms and conditions either of that published version or of any later version published by the Free Software Foundation. If the Library as you received it does not specify a version number of the GNU Lesser General Public License, you may choose any version of the GNU Lesser General Public License ever published by the Free Software Foundation.
    If the Library as you received it specifies that a proxy can decide whether future versions of the GNU Lesser General Public License shall apply, that proxy's public statement of acceptance of any version is permanent authorization for you to choose that version for the Library.
*/

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

void lmcMessaging::start(void)
{
    lmctrace("Messaging started");

	pNetwork->start();

	sendBroadcast(MT_Depart, NULL);
	sendBroadcast(MT_Announce, NULL);
}

void lmcMessaging::update(void)
{
    lmctrace("Refreshing contacts list...");

	sendBroadcast(MT_Announce, NULL);

	for(int index = 0; index < userList.count(); index++)
    {
		sendMessage(MT_Ping, &userList[index].id, NULL);
    }
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

User* lmcMessaging::getUser(QString* id)
{
	for(int index = 0; index < userList.count(); index++)
    {
        if ( userList[index].id.compare(*id) == 0 )
			return &userList[index];
    }

	return NULL;
}

void lmcMessaging::settingsChanged(void)
{
	nTimeout = pSettings->value(IDS_TIMEOUT, IDS_TIMEOUT_VAL).toInt() * 1000;
	nMaxRetry = pSettings->value(IDS_MAXRETRIES, IDS_MAXRETRIES_VAL).toInt();
	pNetwork->settingsChanged();

	QString userName = getUserName();
    if ( localUser->name.compare(userName) != 0 )
    {
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

QString  lmcMessaging::escapeDelimiter( QString *lpszData )
{
    return lpszData->replace( "||", "\\|\\|", Qt::CaseSensitive );
}

QString  lmcMessaging::unescapeDelimiter( QString* lpszData )
{
    return lpszData->replace( "\\|\\|", "||", Qt::CaseSensitive );
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
    return value ? "true" : "false";
}

bool  lmcMessaging::stringToBool(const QString& value)
{
    return value.compare( "true" ) == 0 ? true : false;
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

//	A broadcast is to be sent
void lmcMessaging::sendBroadcast(MessageType type, XmlMessage* pMessage)
{
    prepareBroadcast(type, pMessage);
}

//	A message is to be sent
void lmcMessaging::sendMessage(MessageType type, QString* lpszUserId, XmlMessage* pMessage) {
    QString data = QString::null;
    XmlMessage message;

    switch(type) {
    case MT_Group:
        data = pMessage->data(XN_GROUP);
        updateUser(type, *lpszUserId, data);
        break;
    case MT_Status:
    case MT_UserName:
    case MT_Note:
    case MT_PublicMessage:
        for(int index = 0; index < userList.count(); index++)
            prepareMessage(type, msgId, false, &userList[index].id, pMessage);
        msgId++;
        break;
    case MT_GroupMessage:
        if(lpszUserId)
            prepareMessage(type, msgId, false, lpszUserId, pMessage);
        else {
            for(int index = 0; index < userList.count(); index++)
                prepareMessage(type, msgId, false, &userList[index].id, pMessage);
        }
        msgId++;
        break;
    case MT_Avatar:
        //	if user id is specified send to that user alone, else send to all
        if(lpszUserId) {
            if(pMessage->data(XN_FILEOP) == FileOpNames[FO_Request])
                pMessage->addData(XN_FILEID, getUuid() );
            prepareMessage(type, msgId, false, lpszUserId, pMessage);
        } else {
            for(int index = 0; index < userList.count(); index++) {
                message = pMessage->clone();
                message.addData( XN_FILEID, getUuid() );
                prepareMessage(type, msgId, false, &userList[index].id, &message);
            }
        }
        msgId++;
        break;
    case MT_Version:
        sendWebMessage(type, pMessage);
        break;
    default:
        prepareMessage(type, msgId, false, lpszUserId, pMessage);
        msgId++;
        break;
    }
}

void lmcMessaging::sendWebMessage(MessageType type, XmlMessage *pMessage)
{
    Q_UNUSED(pMessage);

    QString szUrl;

    lmctrace("Sending web message type " + QString::number(type));

    switch(type)
    {
    case MT_Version:
        // szUrl = QString(IDA_DOMAIN"/webservice.php?q=version&p="IDA_PLATFORM);
        szUrl = QString( "http://lanmsngr.sourceforge.net/webservice.php?q=version&p="IDA_PLATFORM );
        pNetwork->sendWebMessage(&szUrl, NULL);
        break;
    default:
        break;
    }
}

//	A broadcast has been received
void lmcMessaging::receiveBroadcast(DatagramHeader* pHeader, QString* lpszData)
{
    MessageHeader* pMsgHeader = NULL;
    XmlMessage* pMessage = NULL;
    if( ! getHeader(lpszData, &pMsgHeader, &pMessage) )
    {
        lmctrace("Warning: Broadcast header parse failed");
        return;
    }
    pMsgHeader->address = pHeader->address;
    processBroadcast(pMsgHeader, pMessage);
}

//	A message has been received
void lmcMessaging::receiveMessage(DatagramHeader* pHeader, QString* lpszData)
{
    MessageHeader* pMsgHeader = NULL;
    XmlMessage* pMessage = NULL;
    if ( ! getHeader(lpszData, &pMsgHeader, &pMessage) )
    {
        lmctrace("Warning: Message header parse failed");
        return;
    }
    pMsgHeader->address = pHeader->address;
    processMessage(pMsgHeader, pMessage);
}

//	A web message has been received
void lmcMessaging::receiveWebMessage(QString *lpszData)
{
    MessageHeader* pMsgHeader = NULL;
    XmlMessage* pMessage = NULL;
    if ( ! getHeader(lpszData, &pMsgHeader, &pMessage) )
    {
        lmctrace("Warning: Web message header parse failed");
        return;
    }

    processWebMessage(pMsgHeader, pMessage);
}

//	Handshake procedure has been completed
void lmcMessaging::newConnection(QString* lpszUserId, QString* lpszAddress) {
    lmctrace("Connection completed with user " + *lpszUserId + " at " + *lpszAddress);
    sendUserData(MT_UserData, QO_Get, lpszUserId, lpszAddress);
}

void lmcMessaging::connectionLost(QString* lpszUserId) {
    lmctrace("Connection to user " + *lpszUserId + " lost");
    removeUser(*lpszUserId);
}

void lmcMessaging::receiveProgress(QString* lpszUserId, QString* lpszData)
{
    XmlMessage xmlMessage(*lpszData);
    int fileMode = indexOf( FileModeNames, FM_Max, xmlMessage.data(XN_MODE) );
    int fileOp   = indexOf( FileOpNames, FO_Max, xmlMessage.data(XN_FILEOP) );
    int fileType = indexOf( FileTypeNames, FT_Max, xmlMessage.data(XN_FILETYPE) );
    QString fileId = xmlMessage.data(XN_FILEID);

    //	determine type of message to be sent to app layer based on file type
    MessageType type;
    switch(fileType)
    {
    case FT_Normal:
        type = MT_File;
        break;
    case FT_Avatar:
        type = MT_Avatar;
        break;
    default:
        type = MT_Blank;
        break;
    }

    XmlMessage reply;

    switch(fileOp) {
    case FO_Error:
        reply.addData(XN_MODE, FileModeNames[fileMode]);
        reply.addData(XN_FILETYPE, FileTypeNames[fileType]);
        reply.addData(XN_FILEOP, FileOpNames[FO_Abort]);
        reply.addData(XN_FILEID, fileId);
        sendMessage(type, lpszUserId, &reply);

        emit messageReceived(type, lpszUserId, &xmlMessage);
        break;
    case FO_Progress:
    case FO_Complete:
        emit messageReceived(type, lpszUserId, &xmlMessage);
        break;
    }
}

void lmcMessaging::sendUserData(MessageType type, QueryOp op, QString* lpszUserId, QString* lpszAddress) {
    lmctrace("Sending local user details to user " + *lpszUserId + " at " + *lpszAddress);
    XmlMessage xmlMessage;
    xmlMessage.addData(XN_USERID, localUser->id);
    xmlMessage.addData(XN_NAME, localUser->name);
    xmlMessage.addData(XN_ADDRESS, localUser->address);
    xmlMessage.addData(XN_VERSION, localUser->version);
    xmlMessage.addData(XN_STATUS, localUser->status);
    xmlMessage.addData(XN_NOTE, localUser->note);
    xmlMessage.addData(XN_QUERYOP, QueryOpNames[op]);
    QString szMessage = addHeader(type, msgId, &localUser->id, lpszUserId, &xmlMessage);
    pNetwork->sendMessage(lpszUserId, lpszAddress, &szMessage);
}

void lmcMessaging::prepareBroadcast(MessageType type, XmlMessage* pMessage) {
    lmctrace("Sending broadcast type " + QString::number(type));
    QString szMessage = addHeader(type, msgId, &localUser->id, NULL, pMessage);
    pNetwork->sendBroadcast(&szMessage);
    lmctrace("Broadcast sending done");
}

//	This method converts a Message from ui layer to a Datagram that can be passed to network layer
void lmcMessaging::prepareMessage(MessageType type, qint64 msgId, bool retry, QString* lpszUserId, XmlMessage* pMessage) {
    if(!isConnected()) {
        lmctrace("Warning: Not connected. Message not sent");
        return;
    }

    User* receiver = getUser(lpszUserId);

    switch(type) {
    case MT_Status:
        pMessage->addData(XN_STATUS, localUser->status);
        break;
    case MT_UserName:
        pMessage->addData(XN_NAME, localUser->name);
        break;
    case MT_Note:
        pMessage->addData(XN_NOTE, localUser->note);
        break;
    case MT_Ping:
        //	add message to pending list
        if(!retry)
            addPendingMsg(msgId, MT_Ping, lpszUserId, pMessage);
        break;
    case MT_Message:
        if(!receiver) {
            emit messageReceived(MT_Failed, lpszUserId, pMessage);
            break;
        }
        //	add message to pending list
        if(!retry)
            addPendingMsg(msgId, MT_Message, lpszUserId, pMessage);
        break;
    case MT_GroupMessage:
        break;
    case MT_PublicMessage:
        break;
    case MT_Broadcast:
        break;
    case MT_Acknowledge:
        break;
    case MT_Query:
        //	if its a 'get' query add message to pending list
        if(pMessage->data(XN_QUERYOP) == QueryOpNames[QO_Get] && !retry)
            addPendingMsg(msgId, MT_Query, lpszUserId, pMessage);
        else if(pMessage->data(XN_QUERYOP) == QueryOpNames[QO_Result])
            getUserInfo(pMessage);
        break;
    case MT_ChatState:
        break;
    case MT_File:
    case MT_Avatar:
        prepareFile(type, msgId, retry, lpszUserId, pMessage);
        break;
    default:
        break;
    }

    if(!receiver) {
        lmctrace("Warning: Recipient " + *lpszUserId + " not found. Message not sent");
        return;
    }

    lmctrace("Sending message type " + QString::number(type) + " to user " + receiver->id
        + " at " + receiver->address);
    QString szMessage = addHeader(type, msgId, &localUser->id, lpszUserId, pMessage);
    pNetwork->sendMessage(&receiver->id, &receiver->address, &szMessage);
    lmctrace("Message sending done");
}

void lmcMessaging::prepareFile(MessageType type, qint64 msgId, bool retry, QString* lpszUserId, XmlMessage* pMessage) {
    Q_UNUSED(type);
    Q_UNUSED(msgId);
    Q_UNUSED(retry);

    int fileOp   = indexOf( FileOpNames, FO_Max, pMessage->data(XN_FILEOP) );
    int fileMode = indexOf( FileModeNames, FM_Max, pMessage->data(XN_MODE) );

    User* user = getUser(lpszUserId);
    QString szMessage = pMessage->toString();

    lmctrace("Sending file message type " + QString::number(fileOp) + " to user " + *lpszUserId
        + ", Mode: " + QString::number(fileMode));

    switch(fileOp) {
    case FO_Request:
        pNetwork->initSendFile(&user->id, &user->address, &szMessage);
        break;
    case FO_Accept:
        pNetwork->initReceiveFile(&user->id, &user->address, &szMessage);
        break;
    case FO_Cancel:
        pNetwork->fileOperation((FileMode)fileMode, &user->id, &szMessage);
        break;
    }
}

//	This method converts a Datagram from network layer to a Message that can be passed to ui layer
void lmcMessaging::processBroadcast(MessageHeader* pHeader, XmlMessage* pMessage) {
    Q_UNUSED(pMessage);

    //	do not process broadcasts from local user unless loopback is specified in command line
    if(!loopback && pHeader->userId.compare(localUser->id) == 0)
        return;

    lmctrace("Processing broadcast type " + QString::number(pHeader->type) + " from user " +
        pHeader->userId);

    switch(pHeader->type) {
    case MT_Announce:
        if(!getUser(&pHeader->userId))
            pNetwork->addConnection(&pHeader->userId, &pHeader->address);
        break;
    case MT_Depart:
        removeUser(pHeader->userId);
        break;
    default:
        break;
    }

    lmctrace("Broadcast processing done");
}

void lmcMessaging::processMessage(MessageHeader* pHeader, XmlMessage* pMessage) {
    QString msgId;
    QString data = QString::null;
    XmlMessage reply;

    lmctrace("Processing message type " + QString::number(pHeader->type) + " from user " +
        pHeader->userId);

    switch(pHeader->type) {
    case MT_UserData:
        if(pMessage->data(XN_QUERYOP) == QueryOpNames[QO_Get])
            sendUserData(pHeader->type, QO_Result, &pHeader->userId, &pHeader->address);
        //	add the user only after sending back user data, this way both parties will have added each other
        addUser(pMessage->data(XN_USERID), pMessage->data(XN_VERSION), pMessage->data(XN_ADDRESS),
            pMessage->data(XN_NAME), pMessage->data(XN_STATUS), QString::null, pMessage->data(XN_NOTE));
        break;
    case MT_Broadcast:
        emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        break;
    case MT_Status:
        data = pMessage->data(XN_STATUS);
        updateUser(pHeader->type, pHeader->userId, data);
        break;
    case MT_UserName:
        data = pMessage->data(XN_NAME);
        updateUser(pHeader->type, pHeader->userId, data);
        break;
    case MT_Note:
        data = pMessage->data(XN_NOTE);
        updateUser(pHeader->type, pHeader->userId, data);
        break;
    case MT_Message:
        //	add message to received message list
        if(addReceivedMsg(pHeader->id, pHeader->userId)) {
            emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        }
        //	send an acknowledgement
        msgId = QString::number(pHeader->id);
        reply.addData(XN_MESSAGEID, msgId);
        sendMessage(MT_Acknowledge, &pHeader->userId, &reply);
        break;
    case MT_GroupMessage:
        emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        break;
    case MT_PublicMessage:
        emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        break;
    case MT_Ping:
        //	send an acknowledgement
        msgId = QString::number(pHeader->id);
        reply.addData(XN_MESSAGEID, msgId);
        sendMessage(MT_Acknowledge, &pHeader->userId, &reply);
        break;
    case MT_Query:
        //	send a reply cum acknowledgement if its a 'get' query
        if(pMessage->data(XN_QUERYOP) == QueryOpNames[QO_Get]) {
            msgId = QString::number(pHeader->id);
            reply.addData(XN_MESSAGEID, msgId);
            reply.addData(XN_QUERYOP, QueryOpNames[QO_Result]);
            sendMessage(pHeader->type, &pHeader->userId, &reply);
        } else if(pMessage->data(XN_QUERYOP) == QueryOpNames[QO_Result]) {
            msgId = pMessage->data(XN_MESSAGEID);
            removePendingMsg(msgId.toLongLong());
            emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        }
        break;
    case MT_ChatState:
        emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        break;
    case MT_Acknowledge:
        //	remove message from pending list
        msgId = pMessage->data(XN_MESSAGEID);
        removePendingMsg(msgId.toLongLong());
        break;
    case MT_File:
    case MT_Avatar:
        processFile(pHeader, pMessage);
        break;
    default:
        break;
    }

    lmctrace("Message processing done");
}

void lmcMessaging::processFile(MessageHeader* pHeader, XmlMessage* pMessage)
{
    int fileMode = indexOf( FileModeNames, FM_Max, pMessage->data(XN_MODE) );
    int fileOp   = indexOf( FileOpNames, FO_Max, pMessage->data(XN_FILEOP) );
    QString szMessage = pMessage->toString();

    lmctrace("Processing file message type " + QString::number(fileOp) + " from user " +
        pHeader->userId + ", Mode: " + QString::number(fileMode));

    switch(fileOp) {
    case FO_Request:
        emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        break;
    case FO_Accept:
        pNetwork->fileOperation(FM_Send, &pHeader->userId, &szMessage);
        emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        break;
    case FO_Cancel:
        if(fileMode == FM_Send) {
            pNetwork->fileOperation(FM_Receive, &pHeader->userId, &szMessage);
            emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        } else {
            pNetwork->fileOperation(FM_Send, &pHeader->userId, &szMessage);
            emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        }
        break;
    case FO_Abort:
        if(fileMode == FM_Send) {
            pNetwork->fileOperation(FM_Receive, &pHeader->userId, &szMessage);
            emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        } else {
            pNetwork->fileOperation(FM_Send, &pHeader->userId, &szMessage);
            emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        }
        break;
    case FO_Decline:
    case FO_Progress:
        emit messageReceived(pHeader->type, &pHeader->userId, pMessage);
        break;
    default:
        break;
    }
}

void lmcMessaging::processWebMessage(MessageHeader* pHeader, XmlMessage *pMessage)
{
    lmctrace("Processing web message type " + QString::number(pHeader->type));

    switch(pHeader->type) {
    case MT_Version:
        emit messageReceived(pHeader->type, NULL, pMessage);
        break;
    case MT_WebFailed:
        emit messageReceived(pHeader->type, NULL, pMessage);
        break;
    default:
        break;
    }
}


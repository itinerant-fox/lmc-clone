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


#ifndef MESSAGING_H
#define MESSAGING_H

#include <QtGlobal>
#include <QObject>
#include <QTimer>
#include <QtGlobal>
#include <QString>
#include <QStringList>
#include <QFile>
#include <QMap>
#include <QList>
#include <QUuid>
#include <QHostInfo>

#ifdef Q_WS_WIN
  #include <windows.h>
  #include <LMCons.h>
#else
  #include <stdlib.h>
#endif

#if defined Q_WS_WIN
#define IDA_PLATFORM	"Windows"
#elif defined Q_WS_MAC
#define IDA_PLATFORM	"Macintosh"
#elif defined Q_WS_X11
#define IDA_PLATFORM	"Linux"
#endif

#include "trace.h"
#include "settings.h"

#include "xmlmessage.h"
#include "User.h"
#include "Group.h"
#include "StatusType.h"
#include "QueryOp.h"
#include "GroupMsgOp.h"
#include "ReceivedMsg.h"
#include "MessagHeaderMember.h"
#include "MessageType.h"
#include "MessageHeader.h"
#include "PendingMsg.h"
#include "network.h"

class lmcMessaging : public QObject
{
	Q_OBJECT

public:
	lmcMessaging(void);
    ~lmcMessaging(void);

public:
	void init(XmlMessage* pInitParams);
	void start(void);
	void update(void);
	void stop(void);
	bool isConnected(void);
	bool canReceive(void);
	void setLoopback(bool on);
	User* getUser(QString* lpszUserId);
	void sendBroadcast(MessageType type, XmlMessage* pMessage);
	void sendMessage(MessageType type, QString* lpszUserId, XmlMessage* pMessage);
	void sendWebMessage(MessageType type, XmlMessage* pMessage);
	void settingsChanged(void);
	void updateGroup(GroupOp op, QVariant value1, QVariant value2);
	void updateGroupMap(QString oldGroup, QString newGroup);
	void saveGroups(void);
	int userCount(void);

	User* localUser;
	QList<User> userList;
	QList<Group> groupList;

signals:
	void messageReceived(MessageType type, QString* lpszUserId, XmlMessage* pMessage);
	void connectionStateChanged(void);

protected slots:
	void receiveBroadcast(DatagramHeader* pHeader, QString* lpszData);
	void receiveMessage(DatagramHeader* pHeader, QString* lpszData);
	void receiveWebMessage(QString* lpszData);
	void newConnection(QString* lpszUserId, QString* lpszAddress);
	void connectionLost(QString* lpszUserId);
	void receiveProgress(QString* lpszUserId, QString* lpszData);
	void network_connectionStateChanged(void);
	void timer_timeout(void);

protected:
    QString groupFile(void);
	QString createUserId(QString* lpszAddress, QString* lpszUserName);
	QString getUserName(void);
	void loadGroups(void);
	void getUserInfo(XmlMessage* pMessage);
	void sendUserData(MessageType type, QueryOp op, QString* lpszUserId, QString* lpszAddress);
	void prepareBroadcast(MessageType type, XmlMessage* pMessage);
	void prepareMessage(MessageType type, qint64 msgId, bool retry, QString* lpszUserId, XmlMessage* pMessage);
	void prepareFile(MessageType type, qint64 msgId, bool retry, QString* lpszUserId, XmlMessage* pMessage);
	void processBroadcast(MessageHeader* pHeader, XmlMessage* pMessage);
	void processMessage(MessageHeader* pHeader, XmlMessage* pMessage);
	void processFile(MessageHeader* pHeader, XmlMessage* pMessage);
	void processWebMessage(MessageHeader* pHeader, XmlMessage* pMessage);
	bool addUser(QString szUserId, QString szVersion, QString szAddress, QString szName, QString szStatus, QString szAvatar, QString szNote);
	void updateUser(MessageType type, QString szUserId, QString szUserData);
	void removeUser(QString szUserId);
	bool addReceivedMsg(qint64 msgId, QString userId);
	void addPendingMsg(qint64 msgId, MessageType type, QString* lpszUserId, XmlMessage* pMessage);
	void removePendingMsg(qint64);
	void removeAllPendingMsg(QString* lpszUserId);
	void checkPendingMsg(void);
	void resendMessage(MessageType type, qint64 msgId, QString* lpszUserId, XmlMessage* pMessage);

    QString addHeader( MessageType type, qint64 id, QString* lpszLocalId, QString* lpszPeerId, XmlMessage* pMessage);
    bool getHeader( QString* lpszMessage, MessageHeader** ppHeader, XmlMessage** ppMessage );

    int indexOf(const QString array[], int size, const QString& value);
    int statusIndexFromCode(QString status);
    QString formatSize(qint64 size);
    QString getUuid(void);
    QString getLogonName(void);
    QString getHostName(void);
    QString getOSName(void);
    QString escapeDelimiter(QString* lpszData);
    QString unescapeDelimiter(QString* lpszData);
    int compareVersions(const QString& version1, const QString& version2);
    QString boolToString(bool value);
    bool stringToBool(const QString& value);
    bool copyFile(const QString& source, const QString& destination);

	lmcNetwork*			pNetwork;
	lmcSettings*		pSettings;
	QTimer*				pTimer;
	qint64				msgId;
	QList<ReceivedMsg>	receivedList;
	QList<PendingMsg>	pendingList;
	int					nTimeout;
	int					nMaxRetry;
	bool				loopback;
	QMap<QString, QString> userGroupMap;

};

#endif // MESSAGING_H

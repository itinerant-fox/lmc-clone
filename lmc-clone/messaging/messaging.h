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
    As used herein, “this License” refers to version 3 of the GNU Lesser General Public License, and the “GNU GPL” refers to version 3 of the GNU General Public License.
    “The Library” refers to a covered work governed by this License, other than an Application or a Combined Work as defined below.
    An “Application” is any work that makes use of an interface provided by the Library, but which is not otherwise based on the Library. Defining a subclass of a class defined by the Library is deemed a mode of using an interface provided by the Library.
    A “Combined Work” is a work produced by combining or linking an Application with the Library. The particular version of the Library with which the Combined Work was made is also called the “Linked Version”.
    The “Minimal Corresponding Source” for a Combined Work means the Corresponding Source for the Combined Work, excluding any source code for portions of the Combined Work that, considered in isolation, are based on the Application, and not on the Linked Version.
    The “Corresponding Application Code” for a Combined Work means the object code and/or source code for the Application, including any data and utility programs needed for reproducing the Combined Work from the Application, but excluding the System Libraries of the Combined Work.
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
    Each version is given a distinguishing version number. If the Library as you received it specifies that a certain numbered version of the GNU Lesser General Public License “or any later version” applies to it, you have the option of following the terms and conditions either of that published version or of any later version published by the Free Software Foundation. If the Library as you received it does not specify a version number of the GNU Lesser General Public License, you may choose any version of the GNU Lesser General Public License ever published by the Free Software Foundation.
    If the Library as you received it specifies that a proxy can decide whether future versions of the GNU Lesser General Public License shall apply, that proxy's public statement of acceptance of any version is permanent authorization for you to choose that version for the Library.
*/

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

    void sendBroadcast(MessageType type, XmlMessage* pMessage);
    void sendMessage(MessageType type, QString* lpszUserId, XmlMessage* pMessage);
    void sendWebMessage(MessageType type, XmlMessage* pMessage);

    bool isConnected(void);
    bool canReceive(void);
    void setLoopback(bool on);
    void settingsChanged(void);

    User* getUser(QString* lpszUserId);
    int userCount(void);
    void updateGroup(GroupOp op, QVariant value1, QVariant value2);
    void updateGroupMap(QString oldGroup, QString newGroup);
    void saveGroups(void);

	User* localUser;
	QList<User> userList;
	QList<Group> groupList;

protected:

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

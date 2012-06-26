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

#include "tcpnetwork.h"

lmcTcpNetwork::lmcTcpNetwork(void)
{
	sendList.clear();
	receiveList.clear();
	messageMap.clear();
	locMsgStream = NULL;
	crypto = NULL;
	ipAddress = QHostAddress::Null;
	server = new QTcpServer(this);
	connect(server, SIGNAL(newConnection()), this, SLOT(server_newConnection()));
}

lmcTcpNetwork::~lmcTcpNetwork(void)
{
}


void lmcTcpNetwork::init(int nPort)
{
    pSettings = new lmcSettings();
	tcpPort = nPort > 0 ? nPort : pSettings->value(IDS_TCPPORT, IDS_TCPPORT_VAL).toInt();
}

void lmcTcpNetwork::start(void)
{
    lmctrace("Starting TCP server");
	isRunning = server->listen(QHostAddress::Any, tcpPort);
    lmctrace((isRunning ? "Success" : "Failed"));
}

void lmcTcpNetwork::stop(void) {
	server->close();
	// Close all open sockets
	if(locMsgStream)
		locMsgStream->stop();
	QMap<QString, MsgStream*>::const_iterator index = messageMap.constBegin();
	while(index != messageMap.constEnd()) {
		MsgStream* pMsgStream = index.value();
		if(pMsgStream)
			pMsgStream->stop();
		index++;
	}
	isRunning = false;
}

void lmcTcpNetwork::setLocalId(QString* lpszLocalId) {
	localId = *lpszLocalId;
}

void lmcTcpNetwork::setCrypto(lmcCrypto* pCrypto) {
	crypto = pCrypto;
}

void lmcTcpNetwork::addConnection(QString* lpszUserId, QString* lpszAddress) {
    lmctrace("Connecting to user " + *lpszUserId + " at " + *lpszAddress);

	MsgStream* msgStream = new MsgStream(localId, *lpszUserId, *lpszAddress, tcpPort);
	connect(msgStream, SIGNAL(connectionLost(QString*)), 
		this, SLOT(msgStream_connectionLost(QString*)));
	connect(msgStream, SIGNAL(messageReceived(QString*, QString*, QByteArray&)),
		this, SLOT(receiveMessage(QString*, QString*, QByteArray&)));
	
	//	if connecting to own machine, this stream will be stored in local message stream, else in list
	if(lpszUserId->compare(localId) == 0)
		locMsgStream = msgStream;
	else
		messageMap.insert(*lpszUserId, msgStream);
	msgStream->init();
}

void lmcTcpNetwork::sendMessage(QString* lpszReceiverId, QString* lpszData) {
	MsgStream* msgStream;

	if(lpszReceiverId->compare(localId) == 0)
		msgStream = locMsgStream;
	else
		msgStream = messageMap.value(*lpszReceiverId, NULL);

	if(msgStream) {
        lmctrace("Sending TCP data stream to user " + *lpszReceiverId);
		QByteArray clearData = lpszData->toUtf8();
		QByteArray cipherData = crypto->encrypt(lpszReceiverId, clearData);
		if(cipherData.isEmpty()) {
            lmctrace("Warning: Message could not be sent");
			return;
		}
		//	cipherData should now contain encrypted content
          addHeader(DT_Message, cipherData);
		msgStream->sendMessage(cipherData);
		return;
	}

    lmctrace("Warning: Socket not found. Message sending failed");
}

void lmcTcpNetwork::initSendFile(QString* lpszReceiverId, QString* lpszAddress, QString* lpszData)
{
	XmlMessage xmlMessage(*lpszData);
    int type = indexOf(FileTypeNames, FT_Max, xmlMessage.data(XN_FILETYPE));

	FileSender* sender = new FileSender(xmlMessage.data(XN_FILEID), *lpszReceiverId, xmlMessage.data(XN_FILEPATH), 
		xmlMessage.data(XN_FILENAME), xmlMessage.data(XN_FILESIZE).toLongLong(), *lpszAddress, tcpPort, (FileType)type);
	connect(sender, SIGNAL(progressUpdated(FileMode, FileOp, FileType, QString*, QString*, QString*)),
		this, SLOT(update(FileMode, FileOp, FileType, QString*, QString*, QString*)));
	sendList.prepend(sender);
}

void lmcTcpNetwork::initReceiveFile(QString* lpszSenderId, QString* lpszAddress, QString* lpszData)
{
	XmlMessage xmlMessage(*lpszData);
    int type =  indexOf(FileTypeNames, FT_Max, xmlMessage.data(XN_FILETYPE));

	FileReceiver* receiver = new FileReceiver(xmlMessage.data(XN_FILEID), *lpszSenderId, xmlMessage.data(XN_FILEPATH), 
		xmlMessage.data(XN_FILENAME), xmlMessage.data(XN_FILESIZE).toLongLong(), *lpszAddress, tcpPort, (FileType)type);
	connect(receiver, SIGNAL(progressUpdated(FileMode, FileOp, FileType, QString*, QString*, QString*)),
		this, SLOT(update(FileMode, FileOp, FileType, QString*, QString*, QString*)));
	receiveList.prepend(receiver);
}

void lmcTcpNetwork::fileOperation(FileMode mode, QString* lpszUserId, QString* lpszData)
{
    Q_UNUSED(lpszUserId);

	XmlMessage xmlMessage(*lpszData);

    int fileOp =  indexOf(FileOpNames, FO_Max, xmlMessage.data(XN_FILEOP));
	QString id = xmlMessage.data(XN_FILEID);

	if(mode == FM_Send) {
		FileSender* sender = getSender(id);
		if(!sender)
			return;

		switch(fileOp) {
		case FO_Cancel:
		case FO_Abort:	
			sender->stop();
			break;
		case FO_Accept:
			sender->init();
			break;
		}
	} else {
		FileReceiver* receiver = getReceiver(id);
		if(!receiver)
			return;

		switch(fileOp) {
		case FO_Cancel:
		case FO_Abort:	
			receiver->stop();
			break;
		}
	}
}

void lmcTcpNetwork::settingsChanged(void) {
}

void lmcTcpNetwork::setIPAddress(const QString& szAddress) {
	ipAddress = QHostAddress(szAddress);
}

void lmcTcpNetwork::server_newConnection(void) {
    lmctrace("New connection received");
	QTcpSocket* socket = server->nextPendingConnection();
	connect(socket, SIGNAL(readyRead()), this, SLOT(socket_readyRead()));
}

void lmcTcpNetwork::socket_readyRead(void) {
	QTcpSocket* socket = (QTcpSocket*)sender();
	disconnect(socket, SIGNAL(readyRead()), this, SLOT(socket_readyRead()));

	QByteArray buffer = socket->read(64);
	if(buffer.startsWith("MSG")) {
		//	read user id from socket and assign socket to correct message stream
		QString userId(buffer.mid(3)); // 3 is length of "MSG"
		addMsgSocket(&userId, socket);
	} else if(buffer.startsWith("FILE")) {
		//	read transfer id from socket and assign socket to correct file receiver
		QString id(buffer.mid(4)); // 4 is length of "FILE"
		addFileSocket(&id, socket);
	}
}

void lmcTcpNetwork::msgStream_connectionLost(QString* lpszUserId) {
	emit connectionLost(lpszUserId);
}

void lmcTcpNetwork::update(FileMode mode, FileOp op, FileType type, QString* lpszId, QString* lpszUserId, QString* lpszData) {
	XmlMessage xmlMessage;
	xmlMessage.addHeader(XN_FROM, *lpszUserId);
	xmlMessage.addHeader(XN_TO, localId);
	xmlMessage.addData(XN_MODE, FileModeNames[mode]);
	xmlMessage.addData(XN_FILETYPE, FileTypeNames[type]);
	xmlMessage.addData(XN_FILEOP, FileOpNames[op]);
	xmlMessage.addData(XN_FILEID, *lpszId);

	switch(op) {
	case FO_Complete:
	case FO_Error:
		xmlMessage.addData(XN_FILEPATH, *lpszData);
		break;
	case FO_Progress:
		xmlMessage.addData(XN_FILESIZE, *lpszData);
		break;
    default:
        break;
	}

	QString szMessage = xmlMessage.toString();
	emit progressReceived(lpszUserId, &szMessage);
}

void lmcTcpNetwork::receiveMessage( QString* lpszUserId,
                                    QString* lpszAddress,
                                    QByteArray& datagram )
{
	DatagramHeader* pHeader = NULL;
    if( !   getHeader(datagram, &pHeader) )
		return;
	
	pHeader->userId = *lpszUserId;
	pHeader->address = *lpszAddress;
    QByteArray cipherData =   getData( datagram );
    QByteArray clearData;
	QString szMessage;

    lmctrace( "TCP stream type " + QString::number(pHeader->type) + " received from user " + *lpszUserId + " at " + *lpszAddress );

    switch( pHeader->type )
    {

	case DT_PublicKey:
		//	send a session key back
		sendSessionKey(lpszUserId, cipherData);
		break;

	case DT_Handshake:
		// decrypt aes key and iv with private key
		crypto->retreiveAES(&pHeader->userId, cipherData);
		emit newConnection(&pHeader->userId, &pHeader->address);
		break;

	case DT_Message:
		// decrypt message with aes
        clearData = crypto->decrypt(&pHeader->userId, cipherData);
        if(clearData.isEmpty())
        {
            lmctrace("Warning: Message could not be retrieved");
			break;
		}
		szMessage = QString::fromUtf8(clearData.data(), clearData.length());
		emit messageReceived(pHeader, &szMessage);
		break;

    default:
        break;
	}
}

void lmcTcpNetwork::addFileSocket(QString* lpszId, QTcpSocket* pSocket) {
	FileReceiver* receiver = getReceiver(*lpszId);
	if(receiver)
		receiver->init(pSocket);
}

void lmcTcpNetwork::addMsgSocket(QString* lpszUserId, QTcpSocket* pSocket) {
    lmctrace("Accepted connection from user " + *lpszUserId);
	QString address = pSocket->peerAddress().toString();
	MsgStream* msgStream = new MsgStream(localId, *lpszUserId, address, tcpPort);
	connect(msgStream, SIGNAL(connectionLost(QString*)), 
		this, SLOT(msgStream_connectionLost(QString*)));
	connect(msgStream, SIGNAL(messageReceived(QString*, QString*, QByteArray&)),
		this, SLOT(receiveMessage(QString*, QString*, QByteArray&)));
	messageMap.insert(*lpszUserId, msgStream);
	msgStream->init(pSocket);

	sendPublicKey(lpszUserId);
}

//	Once a new incoming connection is established, the server sends a public key to client
void lmcTcpNetwork::sendPublicKey(QString* lpszUserId)
{
    lmctrace("Sending public key to user " + *lpszUserId);
	MsgStream* msgStream = messageMap.value(*lpszUserId);
    if(msgStream)
    {
        QByteArray publicKey = crypto->getPublicKey();
		QString sh = DatagramTypeNames[DT_PublicKey];
          addHeader(DT_PublicKey, publicKey);
		msgStream->sendMessage(publicKey);
	}
}

//	Once the public key from server is received, the client sends a session key which is
//	encrypted with the public key of the server
void lmcTcpNetwork::sendSessionKey(QString* lpszUserId, QByteArray& publicKey)
{
	MsgStream* msgStream;

	if(lpszUserId->compare(localId) == 0)
		msgStream = locMsgStream;
	else
		msgStream = messageMap.value(*lpszUserId);

	if(msgStream) {
        lmctrace("Sending session key to user " + *lpszUserId);
		QByteArray sessionKey = crypto->generateAES(lpszUserId, publicKey);
          addHeader(DT_Handshake, sessionKey);
		msgStream->sendMessage(sessionKey);
	}
}

FileSender* lmcTcpNetwork::getSender(QString id)
{
	for(int index = 0; index < sendList.count(); index++)
		if(sendList[index]->id.compare(id) == 0)
			return sendList[index];
	
	return NULL;
}

FileReceiver* lmcTcpNetwork::getReceiver(QString id)
{
	for(int index = 0; index < receiveList.count(); index++)
		if(receiveList[index]->id.compare(id) == 0)
			return receiveList[index];
	
	return NULL;
}


void  lmcTcpNetwork::addHeader(DatagramType type, QByteArray& baData)
{
    QByteArray datagramType = DatagramTypeNames[type].toLocal8Bit();

    baData.insert(0, datagramType);
}

bool  lmcTcpNetwork::getHeader(QByteArray& baDatagram, DatagramHeader** ppHeader)
{
    QString datagramType(baDatagram.mid(0, 6));	// first 6 bytes represent datagram type

    int type = indexOf(DatagramTypeNames, DT_Max, datagramType);

    if(type < 0)
        return false;

    *ppHeader = new DatagramHeader( (DatagramType)type, QString(), QString()) ;
    return true;
}

QByteArray  lmcTcpNetwork::getData( QByteArray& baDatagram )
{
    if ( baDatagram.length() > 6 )
        return baDatagram.mid(6);

    return QByteArray();
}

int  lmcTcpNetwork::indexOf(const QString array[], int size, const QString& value)
{
    for(int index = 0; index < size; index++)
    {
        if(value == array[index])
            return index;
    }

    return (-1);
}





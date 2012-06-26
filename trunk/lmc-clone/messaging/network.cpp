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


#include "network.h"

lmcNetwork::lmcNetwork(void)
{
	pUdpNetwork = new lmcUdpNetwork();
	pTcpNetwork = new lmcTcpNetwork();
	pWebNetwork = new lmcWebNetwork();

	connect(pUdpNetwork, SIGNAL(broadcastReceived(DatagramHeader*, QString*)), 
		this, SLOT(udp_receiveBroadcast(DatagramHeader*, QString*)));
	connect(pTcpNetwork, SIGNAL(newConnection(QString*, QString*)),
		this, SLOT(tcp_newConnection(QString*, QString*)));
	connect(pTcpNetwork, SIGNAL(connectionLost(QString*)),
		this, SLOT(tcp_connectionLost(QString*)));
	connect(pTcpNetwork, SIGNAL(messageReceived(DatagramHeader*, QString*)), 
		this, SLOT(tcp_receiveMessage(DatagramHeader*, QString*)));
	connect(pTcpNetwork, SIGNAL(progressReceived(QString*, QString*)),
		this, SLOT(tcp_receiveProgress(QString*, QString*)));
	connect(pWebNetwork, SIGNAL(messageReceived(QString*)),
		this, SLOT(web_receiveMessage(QString*)));
	pTimer = NULL;
	pCrypto = new lmcCrypto();
	ipAddress = QString::null;
	subnetMask = QString::null;
	networkInterface = QNetworkInterface();
	szInterfaceName = QString::null;
	isConnected = false;
	canReceive = false;
}

lmcNetwork::~lmcNetwork(void) {
}

void lmcNetwork::init(XmlMessage *pInitParams) {
    lmctrace("Network initialized");

	pSettings = new lmcSettings();
	isConnected = getIPAddress();

    lmctrace("IP address obtained: " + (ipAddress.isEmpty() ? "NULL" : ipAddress) +
					"\nSubnet mask obtained: " + (subnetMask.isEmpty() ? "NULL" : subnetMask) +
					"\nConnection status: " + (isConnected ? "OK" : "Fail"));

	int port = pInitParams->data(XN_PORT).toInt();
	pUdpNetwork->init(port);
	pTcpNetwork->init(port);
}

void lmcNetwork::start(void)
{
    lmctrace("Network started");

    QByteArray publicKey = pCrypto->generateRSA();
    Q_UNUSED( publicKey );

	pTimer = new QTimer(this);
    connect( pTimer, SIGNAL(timeout()), this, SLOT(timer_timeout()) );
    pTimer->start( 2000 );

	pUdpNetwork->setCrypto(pCrypto);
	pTcpNetwork->setCrypto(pCrypto);

    if ( isConnected )
    {
        pUdpNetwork->setMulticastInterface( networkInterface );
        pUdpNetwork->setIPAddress( ipAddress, subnetMask );
		pUdpNetwork->start();
        pTcpNetwork->setIPAddress( ipAddress );
        pTcpNetwork->start();
		canReceive = pUdpNetwork->canReceive;
	}
}

void lmcNetwork::stop(void) {
	pTimer->stop();

	pUdpNetwork->stop();
	pTcpNetwork->stop();

    lmctrace("Network stopped");
}

QString lmcNetwork::physicalAddress(void) {
	//	get the first active network interface
	QNetworkInterface networkInterface;

	if(getNetworkInterface(&networkInterface))
		return networkInterface.hardwareAddress();

	return QString::null;
}

void lmcNetwork::setLocalId(QString* lpszLocalId) {
	pUdpNetwork->setLocalId(lpszLocalId);
	pTcpNetwork->setLocalId(lpszLocalId);
}

void lmcNetwork::sendBroadcast(QString* lpszData) {
	pUdpNetwork->sendBroadcast(lpszData);
}

void lmcNetwork::addConnection(QString* lpszUserId, QString* lpszAddress) {
	pTcpNetwork->addConnection(lpszUserId, lpszAddress);
}

void lmcNetwork::sendMessage(QString* lpszReceiverId, QString* lpszAddress, QString* lpszData) {
    Q_UNUSED(lpszAddress);
	pTcpNetwork->sendMessage(lpszReceiverId, lpszData);
}

void lmcNetwork::initSendFile(QString* lpszReceiverId, QString* lpszAddress, QString* lpszData) {
	pTcpNetwork->initSendFile(lpszReceiverId, lpszAddress, lpszData);
}

void lmcNetwork::initReceiveFile(QString* lpszSenderId, QString* lpszAddress, QString* lpszData) {
	pTcpNetwork->initReceiveFile(lpszSenderId, lpszAddress, lpszData);
}

void lmcNetwork::fileOperation(FileMode mode, QString* lpszUserId, QString* lpszData) {
	pTcpNetwork->fileOperation(mode, lpszUserId, lpszData);
}

void lmcNetwork::sendWebMessage(QString *lpszUrl, QString *lpszData) {
	pWebNetwork->sendMessage(lpszUrl, lpszData);
}

void lmcNetwork::settingsChanged(void) {
	pUdpNetwork->settingsChanged();
	pTcpNetwork->settingsChanged();
}

void lmcNetwork::timer_timeout(void) {
	bool prev = isConnected;
	isConnected = getIPAddress();

	if(prev != isConnected) {
        lmctrace("IP address obtained: " + (ipAddress.isEmpty() ? "NULL" : ipAddress) +
			"\nSubnet mask obtained: " + (subnetMask.isEmpty() ? "NULL" : subnetMask) +
			"\nConnection status: " + (isConnected ? "OK" : "Fail"));

		if(isConnected) {
			pUdpNetwork->setMulticastInterface(networkInterface);
			pUdpNetwork->setIPAddress(ipAddress, subnetMask);
			pUdpNetwork->start();
			pTcpNetwork->setIPAddress(ipAddress);
			pTcpNetwork->start();
			canReceive = pUdpNetwork->canReceive;
		} else {
			pUdpNetwork->stop();
			pTcpNetwork->stop();
		}
		emit connectionStateChanged();
	}
}

void lmcNetwork::udp_receiveBroadcast(DatagramHeader* pHeader, QString* lpszData) {
	emit broadcastReceived(pHeader, lpszData);
}

void lmcNetwork::tcp_newConnection(QString* lpszUserId, QString* lpszAddress) {
	emit newConnection(lpszUserId, lpszAddress);
}

void lmcNetwork::tcp_connectionLost(QString* lpszUserId) {
	emit connectionLost(lpszUserId);
}

void lmcNetwork::tcp_receiveMessage(DatagramHeader* pHeader, QString* lpszData) {
	emit messageReceived(pHeader, lpszData);
}

void lmcNetwork::tcp_receiveProgress(QString* lpszUserId, QString* lpszData) {
	emit progressReceived(lpszUserId, lpszData);
}

void lmcNetwork::web_receiveMessage(QString *lpszData) {
	emit webMessageReceived(lpszData);
}

bool lmcNetwork::getIPAddress(void) {
	// If an interface is already being used, get it. Ignore all others
	if(networkInterface.isValid()) {
		QNetworkAddressEntry addressEntry;
		if(getIPAddress(&networkInterface, &addressEntry)) {
			ipAddress = addressEntry.ip().toString();
			subnetMask = addressEntry.netmask().toString();
			return true;
		}
		ipAddress = QString::null;
		subnetMask = QString::null;
		return false;
	}

	// Get the preferred interface name from settings if checking for the first time
	if(szInterfaceName.isNull())
		szInterfaceName = pSettings->value(IDS_CONNECTION, IDS_CONNECTION_VAL).toString();

	// Currently, hard coding usePreferred to False, since using preferred connection is not
	// working properly.
	//bool usePreferred = (szInterfaceName.compare(IDS_CONNECTION_VAL, Qt::CaseInsensitive) != 0);
	bool usePreferred = false;

    lmctrace("Checking for active network interface...");

	//	get a list of all network interfaces available in the system
	QList<QNetworkInterface> allInterfaces = QNetworkInterface::allInterfaces();

	//	return the preferred interface if it is active
	for(int index = 0; index < allInterfaces.count(); index++) {
		// Skip to the next interface if it is not the preferred one
		// Checked only if searching for the preferred adapter
		if(usePreferred && szInterfaceName.compare(allInterfaces[index].name()) != 0)
			continue;

		if(isInterfaceUp(&allInterfaces[index])) {
            lmctrace("Active network interface found: " + allInterfaces[index].humanReadableName());
			QNetworkAddressEntry addressEntry;
			if(getIPAddress(&allInterfaces[index], &addressEntry)) {
				ipAddress = addressEntry.ip().toString();
				subnetMask = addressEntry.netmask().toString();
				networkInterface = allInterfaces[index];
				szInterfaceName = allInterfaces[index].name();
				return true;
			}
		}
	}

    lmctrace("Warning: No active network interface found");
	ipAddress = QString::null;
	subnetMask = QString::null;
	return false;
}

bool lmcNetwork::getIPAddress(QNetworkInterface* pNetworkInterface, QNetworkAddressEntry *pAddressEntry) {
    //lmctrace("Querying IP address from network interface...");

	//	get a list of all associated ip addresses of the interface
	QList<QNetworkAddressEntry> addressEntries = pNetworkInterface->addressEntries();
	//	return the first address which is an ipv4 address
	for(int index = 0; index < addressEntries.count(); index++) {
		if(addressEntries[index].ip().protocol() == QAbstractSocket::IPv4Protocol) {
			*pAddressEntry = addressEntries[index];
            //lmctrace("IPv4 address found for network interface.");
			return true;
		}
	}
	// if ipv4 address is not present, check for ipv6 address
	for(int index = 0; index < addressEntries.count(); index++) {
		if(addressEntries[index].ip().protocol() == QAbstractSocket::IPv6Protocol) {
			*pAddressEntry = addressEntries[index];
            //lmctrace("IPv6 address found for network interface.");
			return true;
		}
	}

    //lmctrace("Warning: No IP address found for network interface.");
	return false;
}

bool lmcNetwork::getNetworkInterface(QNetworkInterface* pNetworkInterface) {
	// If an interface is already being used, get it. Ignore all others
	if(networkInterface.isValid()) {
		*pNetworkInterface = networkInterface;
		return isInterfaceUp(pNetworkInterface);
	}

	// Get the preferred interface name from settings if checking for the first time
	if(szInterfaceName.isNull())
		szInterfaceName = pSettings->value(IDS_CONNECTION, IDS_CONNECTION_VAL).toString();

	QString szPreferred = szInterfaceName;
	// Currently, hard coding usePreferred to False, since using preferred connection is not
	// working properly.
	//bool usePreferred = (szPreferred.compare(IDS_CONNECTION_VAL, Qt::CaseInsensitive) != 0);
	bool usePreferred = false;

	// Return true if preferred interface is available
	if(usePreferred && getNetworkInterface(pNetworkInterface, &szPreferred))
		return true;

	// Return true if a fallback interface is available
	if(!usePreferred && getNetworkInterface(pNetworkInterface, NULL))
		return true;

	return false;
}

bool lmcNetwork::getNetworkInterface(QNetworkInterface* pNetworkInterface, QString* lpszPreferred) {
    lmctrace("Checking for active network interface...");

	//	get a list of all network interfaces available in the system
	QList<QNetworkInterface> allInterfaces = QNetworkInterface::allInterfaces();

	//	return the preferred interface if it is active
	for(int index = 0; index < allInterfaces.count(); index++) {
		// Skip to the next interface if it is not the preferred one
		// Checked only if searching for the preferred adapter
		if(lpszPreferred && lpszPreferred->compare(allInterfaces[index].name()) != 0)
			continue;

		if(isInterfaceUp(&allInterfaces[index])) {
			*pNetworkInterface = allInterfaces[index];
            lmctrace("Active network interface found: " + pNetworkInterface->humanReadableName());
			return true;
		}
	}

    lmctrace("Warning: No active network interface found");
	return false;
}

bool lmcNetwork::isInterfaceUp(QNetworkInterface* pNetworkInterface) {
	if(pNetworkInterface->flags().testFlag(QNetworkInterface::IsUp)
		&& pNetworkInterface->flags().testFlag(QNetworkInterface::IsRunning)
		&& !pNetworkInterface->flags().testFlag(QNetworkInterface::IsLoopBack)) {
			return true;
	}

	return false;
}

bool lmcNetwork::getNetworkAddressEntry(QNetworkAddressEntry* pAddressEntry) {
	//	get the first active network interface
	QNetworkInterface networkInterface;

	if(getNetworkInterface(&networkInterface)) {
        //lmctrace("Querying IP address from network interface...");

		//	get a list of all associated ip addresses of the interface
		QList<QNetworkAddressEntry> addressEntries = networkInterface.addressEntries();
		//	return the first address which is an ipv4 address
		for(int index = 0; index < addressEntries.count(); index++) {
			if(addressEntries[index].ip().protocol() == QAbstractSocket::IPv4Protocol) {
				*pAddressEntry = addressEntries[index];
				this->networkInterface = networkInterface;
				this->szInterfaceName = networkInterface.name();
                //lmctrace("IPv4 address found for network interface.");
				return true;
			}
		}
		// if ipv4 address is not present, check for ipv6 address
		for(int index = 0; index < addressEntries.count(); index++) {
			if(addressEntries[index].ip().protocol() == QAbstractSocket::IPv6Protocol) {
				*pAddressEntry = addressEntries[index];
				this->networkInterface = networkInterface;
				this->szInterfaceName = networkInterface.name();
                //lmctrace("IPv6 address found for network interface.");
				return true;
			}
		}

        //lmctrace("Warning: No IP address found for network interface.");
	}

	return false;
}

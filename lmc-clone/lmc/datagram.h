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


#ifndef DATAGRAM_H
#define DATAGRAM_H

#include <cstddef>
#include <QtGlobal>
#include <QString>
#include <QStringList>
#include <QByteArray>
#include <QDataStream>

enum DatagramType {
    DT_None = 0,
    DT_Broadcast,
    DT_PublicKey,
    DT_Handshake,
    DT_Message,
    DT_Max
};

enum DatagramHeaderMember
{
	DH_AppId = 0,
	DH_Type,
	DH_UserId,
	DH_Max
};

struct DatagramHeader
{
    DatagramType type;
    QString userId;
    QString address;

    DatagramHeader(DatagramType dtType, QString szUserId, QString szAddress) {
        type = dtType;
        userId = szUserId;
        address = szAddress;
    }
};

const QString DatagramTypeNames[] = {
    "",
    "BRDCST",
    "PUBKEY",
    "HNDSHK",
    "MESSAG"
};

#include "Helper.h"

namespace Datagram
{
    void addHeader( DatagramType type, QByteArray& baData );
    bool getHeader( QByteArray& baDatagram, DatagramHeader** ppHeader );
    QByteArray getData( QByteArray& baDatagram );
};

#endif // DATAGRAM_H

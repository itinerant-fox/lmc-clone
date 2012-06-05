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


#ifndef SHARED_H
#define SHARED_H

#include <QString>
#include <QDateTime>
#include <QUuid>
#include <QHostInfo>

#include "definitions.h"

#ifdef QWIDGET_H
#include "uidefinitions.h"
#endif

#include "User.h"

#include "Group.h"


/****************************************************************************
**	Datagram type definitions
**	The enum and the string array should always be synced
****************************************************************************/

#include "datagram.h"



struct MessageHeader
{
	MessageType type;
	qint64 id;
	QString userId;
	QString address;

    MessageHeader(MessageType mtType, qint64 nId, QString szUserId)
    {
		type = mtType;
		id = nId;
		userId = szUserId;
	}
};

#include "Helper.h"

#endif // SHARED_H

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

#ifndef DEFINITIONS_H
#define DEFINITIONS_H

//	Information about the application
#define IDA_TITLE		"LAN Messenger"
#ifdef Q_WS_WIN
#define IDA_PRODUCT		"LAN Messenger"
#define IDA_COMPANY		"LAN Messenger"
#else
#define IDA_PRODUCT		"lmc"
#define IDA_COMPANY		"lmc"
#endif
#define IDA_VERSION		"2.0.0"
#define IDA_DESCRIPTION	"LAN Messenger is a free peer-to-peer messaging application for intra-network communication "\
						"and does not require a server.\n"\
						"LAN Messenger works on essentially every popular desktop platform."
#define IDA_COPYRIGHT	"Copyright (C) 2010-2012 Qualia Digital Solutions."
#define IDA_CONTACT		"qualiatech@gmail.com"
#define IDA_DOMAIN		"http://lanmsngr.sourceforge.net"

#if defined Q_WS_WIN
#define IDA_PLATFORM	"Windows"
#elif defined Q_WS_MAC
#define IDA_PLATFORM	"Macintosh"
#elif defined Q_WS_X11
#define IDA_PLATFORM	"Linux"
#endif

#define DELIMITER		"||"
#define DELIMITER_ESC	"\\|\\|"

#include "QueryOp.h"
#include "GroupMsgOp.h"
#include "TrayMessageType.h"
#include "StatusType.h"

//--------------------------------------------------------------------

#define GRP_DEFAULT		"General"
#define GRP_DEFAULT_ID	"1CD75C10048C4E65F6082539A32DC111"

#define GROUPMSGVERSION	"1.2.16"

#define AUTO_CONNECTION	"Auto"

#define LMC_TRUE	"true"
#define LMC_FALSE	"false"

#endif // DEFINITIONS_H

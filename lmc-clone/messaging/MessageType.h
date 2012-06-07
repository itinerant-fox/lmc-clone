#ifndef MESSAGETYPE_H
#define MESSAGETYPE_H

#include <QtGlobal>
#include <QObject>
#include <QString>

/****************************************************************************
**	Message type definitions
**	The enum and the string array should always be synced
****************************************************************************/
enum MessageType
{
    MT_Blank = 0,
    MT_Announce,
    MT_Depart,
    MT_UserData,
    MT_Broadcast,
    MT_Status,
    MT_Avatar,
    MT_UserName,
    MT_Ping,
    MT_Message,
    MT_GroupMessage,
    MT_PublicMessage,
    MT_File,
    MT_Acknowledge,
    MT_Failed,
    MT_Error,
    MT_OldVersion,
    MT_Query,
    MT_Info,
    MT_ChatState,
    MT_Note,
    //	These are used only for local communication between layers
    MT_Group,
    MT_Version,
    MT_WebFailed,
    MT_LocalFile,
    MT_LocalAvatar,
    MT_Refresh,
    MT_Join,
    MT_Leave,
    MT_Max
};

const QString MessageTypeNames[] =
{
    "",
    "announce",
    "depart",
    "userdata",
    "broadcast",
    "status",
    "avatar",
    "name",
    "ping",
    "message",
    "groupmessage",
    "publicmessage",
    "file",
    "acknowledge",
    "failed",
    "error",
    "oldversion",
    "query",
    "info",
    "chatstate",
    "note",
    //	These are used only for local communication between layers
    "group",
    "version",
    "webfailed",
    "localfile",
    "localavatar",
    "refresh",
    "join",
    "leave"
};

#endif // MESSAGETYPE_H

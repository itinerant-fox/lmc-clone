#ifndef GROUPMSGOP_H
#define GROUPMSGOP_H

#include <QtGlobal>
#include <QString>

//	Group Message operation definitions
//	The enum and the string array should always be synced

enum GroupMsgOp
{
    GMO_None = 0,
    GMO_Request,
    GMO_Join,
    GMO_Message,
    GMO_Leave,
    GMO_Max,
};

const QString GroupMsgOpNames[] =
{
    "",
    "request",
    "join",
    "message",
    "leave",
};

enum GroupOp
{
    GO_None = 0,
    GO_New,
    GO_Rename,
    GO_Move,
    GO_Delete,
    GO_Max,
};

#endif // GROUPMSGOP_H

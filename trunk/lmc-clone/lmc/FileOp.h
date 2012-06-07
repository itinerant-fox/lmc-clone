#ifndef FILEOP_H
#define FILEOP_H

#include <QtGlobal>
#include <QString>

// File operation definitions
// The enum and the string array should always be synced.

enum FileOp
{
    FO_Blank = 0,
    FO_Request,
    FO_Accept,
    FO_Decline,
    FO_Cancel,
    FO_Progress,
    FO_Error,
    FO_Abort,
    FO_Complete,
    FO_Max,
};

const QString FileOpNames[] =
{
    "",
    "request",
    "accept",
    "decline",
    "cancel",
    "progress",
    "error",
    "abort",
    "complete",
};


#endif // FILEOP_H

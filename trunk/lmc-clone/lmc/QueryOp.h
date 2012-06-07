#ifndef QUERYOP_H
#define QUERYOP_H

#include <QtGlobal>
#include <QString>

// Query operation definitions
// The enum and the string array should always be synced

enum QueryOp
{
    QO_None = 0,
    QO_Get,
    QO_Result,
    QO_Max,
};

const QString QueryOpNames[] =
{
    "",
    "get",
    "result",
};

#endif // QUERYOP_H

#ifndef STATUSTYPE_H
#define STATUSTYPE_H

#include <QtGlobal>
#include <QString>

//	User status definitions
enum StatusType
{
    StatusTypeOnline = 0,
    StatusTypeBusy,
    StatusTypeOffline,
    StatusTypeAway,
    StatusTypeMax,
};

#define ST_COUNT	6
const QString statusCode[] =
{
    "chat",
    "busy",
    "dnd",
    "brb",
    "away",
    "gone",
};

const int statusType[] =
{
    StatusTypeOnline,
    StatusTypeBusy,
    StatusTypeBusy,
    StatusTypeAway,
    StatusTypeAway,
    StatusTypeOffline,
};

#endif // STATUSTYPE_H

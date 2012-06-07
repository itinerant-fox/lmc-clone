#ifndef FILEMODE_H
#define FILEMODE_H

#include <QtGlobal>
#include <QString>

enum FileMode
{
    FM_Blank = 0,
    FM_Send,
    FM_Receive,
    FM_Max,
};

const QString FileModeNames[] =
{
    "",
    "send",
    "receive",
};


#endif // FILEMODE_H

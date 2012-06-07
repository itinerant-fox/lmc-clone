#ifndef FILETYPE_H
#define FILETYPE_H

#include <QtGlobal>
#include <QString>

enum FileType
{
    FT_None = 0,
    FT_Normal,
    FT_Avatar,
    FT_Max
};

const QString FileTypeNames[] =
{
    "",
    "normal",
    "avatar"
};

#endif // FILETYPE_H

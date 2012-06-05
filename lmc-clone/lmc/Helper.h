#ifndef HELPER_H
#define HELPER_H

#include <cstddef>

#include <QtGlobal>
#include <QString>
#include <QStringList>
#include <QFile>
#include <QUuid>
#include <QHostInfo>

#ifdef Q_WS_WIN
  #include <windows.h>
  #include <LMCons.h>
#else
  #include <stdlib.h>
#endif

#include "definitions.h"

namespace Helper
{
    int indexOf(const QString array[], int size, const QString& value);
    int statusIndexFromCode(QString status);
    QString formatSize(qint64 size);
    QString getUuid(void);
    QString getLogonName(void);
    QString getHostName(void);
    QString getOSName(void);
    QString escapeDelimiter(QString* lpszData);
    QString unescapeDelimiter(QString* lpszData);
    int compareVersions(const QString& version1, const QString& version2);
    QString boolToString(bool value);
    bool stringToBool(const QString& value);
    bool copyFile(const QString& source, const QString& destination);
};


#endif // HELPER_H

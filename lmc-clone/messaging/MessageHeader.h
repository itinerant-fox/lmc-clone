#ifndef MESSAGEHEADER_H
#define MESSAGEHEADER_H

#include <QtGlobal>
#include <QObject>
#include <QString>

#include "MessageType.h"

//	Datagram type definitions
//	The enum and the string array should always be synced
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

#endif // MESSAGEHEADER_H

#ifndef PENDINGMSG_H
#define PENDINGMSG_H

#include <QtGlobal>
#include <QString>
#include <QDateTime>
#include <QDate>
#include <QTime>

#include "xmlmessage.h"

#include "MessageType.h"

struct PendingMsg
{
    qint64 msgId;
    bool active;
    QDateTime timeStamp;
    MessageType type;
    QString userId;
    XmlMessage xmlMessage;
    int retry;

    PendingMsg(void) {}
    PendingMsg( qint64 nMsgId,
                bool bActive,
                QDateTime timeStamp,
                MessageType mtType,
                QString szUserId,
                XmlMessage xmlMessage,
                int nRetry)
    {
        this->msgId = nMsgId;
        this->active = bActive;
        this->timeStamp = timeStamp;
        this->type = mtType;
        this->userId = szUserId;
        this->xmlMessage = xmlMessage;
        this->retry = nRetry;
    }
};


#endif // PENDINGMSG_H

#ifndef RECEIVEDMSG_H
#define RECEIVEDMSG_H

#include <QtGlobal>
#include <QString>

struct ReceivedMsg
{

    qint64 msgId;
    QString userId;

    ReceivedMsg(void) {}

    ReceivedMsg(qint64 nMsgId, QString szUserId)
    {
        this->msgId = nMsgId;
        this->userId = szUserId;
    }

    bool operator == (const ReceivedMsg& v) const
    {
        return ((this->msgId == v.msgId) && (this->userId.compare(v.userId) == 0));
    }

};


#endif // RECEIVEDMSG_H

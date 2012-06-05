#ifndef USER_H
#define USER_H

#include <QtGlobal>
#include <QString>

struct User
{
    QString id;
    QString name;
    QString address;
    QString version;
    QString status;
    int avatar;
    QString group;
    QString note;

    User(void);

    User(QString szId,
         QString szVersion,
         QString szAddress,
         QString szName,
         QString szStatus,
         QString szGroup,
         int nAvatar,
         QString szNote);

};


#endif // USER_H

#ifndef GROUP_H
#define GROUP_H

#include <cstddef>

#include <QtGlobal>
#include <QString>

struct Group
{
    QString id;

    QString name;

    Group(void);

    Group(QString szId);

    Group(QString szId, QString szName);

    bool operator == (const Group& v) const;
};


#endif // GROUP_H

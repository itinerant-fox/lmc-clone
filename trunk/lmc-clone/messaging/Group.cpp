
#include "Group.h"

Group::Group(void)
{
}

Group::Group(QString szId)
{
    this->id = szId;
}

Group::Group(QString szId, QString szName)
{
    this->id = szId;
    this->name = szName;
}

bool Group::operator == (const Group& v) const
{
    return (this->id.compare(v.id) == 0);
}

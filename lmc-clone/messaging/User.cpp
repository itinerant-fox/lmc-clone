
#include "User.h"

User::User(void)
{
}

User::User(
    QString szId,
    QString szVersion,
    QString szAddress,
    QString szName,
    QString szStatus,
    QString szGroup,
    int nAvatar,
    QString szNote )
{
    this->id = szId;
    this->version = szVersion;
    this->address = szAddress;
    this->name = szName;
    this->status = szStatus;
    this->group = szGroup;
    this->avatar = nAvatar;
    this->note = szNote;
}


#ifndef TRAYMESSAGETYPE_H
#define TRAYMESSAGETYPE_H

//------------------------------------------------------------------------
// tray message

#include <QtGlobal>
#include <QString>

enum TrayMessageType
{
    TM_Connection,
    TM_Status,
    TM_Transfer,
    TM_Minimize,
    TM_Max
};

enum TrayMessageIcon
{
    TMI_Info,
    TMI_Warning,
    TMI_Error,
    TMI_Max
};


#endif // TRAYMESSAGETYPE_H

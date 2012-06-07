
#include "SettingsBase.h"

//----------------------------------------------------------------------------

lmcSettingsBase::lmcSettingsBase(void)
    : QSettings()
{
}

lmcSettingsBase::lmcSettingsBase( const QString& fileName, Format format )
    : QSettings( fileName, format )
{
}

lmcSettingsBase::lmcSettingsBase(
        Format format,
        Scope scope,
        const QString& organization,
        const QString& application
        )
    : QSettings( format, scope, organization, application )
{

}

lmcSettingsBase::~lmcSettingsBase(void)
{
}

void lmcSettingsBase::setValue(
        const QString& key,
        const QVariant& value,
        const QVariant& defaultValue )
{
    if ( value != defaultValue )
        QSettings::setValue( key, value );
    else
        remove( key );
}



#ifndef SETTINGSBASE_H
#define SETTINGSBASE_H

#include <QtGlobal>
#include <QObject>
#include <QString>
#include <QSettings>
#include <QApplication>
#include <QDir>
#include <QUuid>
#include <QDir>
#include <QDesktopServices>

/**
* @brief The lmcSettingsBase class
*/
class lmcSettingsBase : public QSettings
{

public:
    lmcSettingsBase(void);
    lmcSettingsBase( const QString& fileName, Format format );
    lmcSettingsBase( Format format,
                     Scope scope,
                     const QString& organization,
                     const QString& application );
    ~lmcSettingsBase(void);

public:
    using QSettings::setValue;
    void setValue(const QString& key, const QVariant& value, const QVariant& defaultValue);

};

#endif // SETTINGSBASE_H

#-----------------------------------------------------------------------------
#
# settings.pri
# 
#-----------------------------------------------------------------------------
#
# define IDA_COMPANY, IDA_PRODUCT, IDA_VERSION
#
# example>
#   DEFINES += IDA_COMPANY=\"\\\"LAN Messenger\\\"\"
#   DEFINES += IDA_PRODUCT=\"\\\"LAN Messenger\\\"\"
#   DEFINES += IDA_VERSION=\"\\\"2.0.0\\\"\"
#
#-----------------------------------------------------------------------------

INCLUDEPATH += \
    settings

HEADERS += \
    settings/settings.h \
    settings/SettingsBase.h

SOURCES += \
    settings/settings.cpp \
    settings/SettingsBase.cpp

#-----------------------------------------------------------------------------
#
# lmc-clone
#   http://code.google.com/p/lmc-clone
#
# lmc is a lan messenger, instant messaging client.
#  http://lanmsngr.sourceforge.net/
#  http://sourceforge.net/projects/lanmsngr/
#
#-----------------------------------------------------------------------------

TARGET = lmc-clone

TEMPLATE = app

QT += core gui network xml webkit

#-----------------------------------------------------------------------------
#  preprocessor of product name, detailed properties

DEFINES += IDA_TITLE=\"\\\"lmc-clone\\\"\"

win32 {
    DEFINES += IDA_COMPANY=\"\\\"lmc-clone\\\"\"
    DEFINES += IDA_PRODUCT=\"\\\"lmc-clone\\\"\"
}

unix {
    DEFINES += IDA_COMPANY=\"\\\"lmc-clone\\\"\"
    DEFINES += IDA_PRODUCT=\"\\\"lmc-clone\\\"\"
}

macx {
    DEFINES += IDA_COMPANY=\"\\\"lmc-clone\\\"\"
    DEFINES += IDA_PRODUCT=\"\\\"lmc-clone\\\"\"
}

DEFINES += IDA_DESCRIPTION=\"\\\"lmc-clone is is a lan messaging application. current project is derived from lmc project.\\\"\"
DEFINES += IDA_COPYRIGHT=\"\\\"GPL License, copyright: j2doll, Qualia Digital Solutions\\\"\"
DEFINES += IDA_CONTACT=\"\\\"j2doll@gmail.com\\\"\"
DEFINES += IDA_DOMAIN=\"\\\"http://code.project.com/p/lmc-clone\\\"\"

#-----------------------------------------------------------------------------
# version

VERSION = 2.0.0

DEFINES += IDA_VERSION=\"\\\"2.0.0\\\"\"

DEFINES += IDS_VERSION_VAL=\"\\\"1.2.10\\\"\"

DEFINES += GROUPMSGVERSION=\"\\\"1.2.16\\\"\"

#-----------------------------------------------------------------------------

### Qt version should be 4.8.2, or over.
### greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#-----------------------------------------------------------------------------
# debug / release mode

CONFIG(debug, debug|release) {
    ### DEBUG MODE CONFIG ###

    DESTDIR = ./debug
    MOC_DIR = ./debug/moc
    OBJECTS_DIR = ./debug/obj
    RCC_DIR = ./debug/rcc
    UI_DIR = ./debug/ui
    DEFINES += DEBUG _DEBUG

} else {
    ### RELEASE MODE CONFIG ###

    DESTDIR = ./release
    MOC_DIR = ./release/moc
    OBJECTS_DIR = ./release/obj
    RCC_DIR = ./release/rcc
    UI_DIR = ./release/ui
    DEFINES += NDEBUG _NDEBUG

}

#-----------------------------------------------------------------------------
#   OpenSSL (version 1.0.0e)
#       http://www.openssl.org
#       http://slproweb.com/products/Win32OpenSSL.html
#-----------------------------------------------------------------------------

win32:INCLUDEPATH += ./openssl/include
win32:DEPENDPATH  += ./openssl/include

# MinGW (MSYS)
win32:win32-g++: LIBS += -leay32
win32:win32-g++: LIBS += -L./openssl/lib/MinGW
win32:win32-g++: LIBS += -L../lmc-clone/openssl/lib/MinGW

# Visual C++ (2008,2010)
win32:win32-msvc2008: LIBS += -leay32
win32:win32-msvc2008: LIBS += -L./openssl/lib/VC

win32:win32-msvc2010: LIBS += -leay32
win32:win32-msvc2010: LIBS += -L./openssl/lib/VC

win32:LIBS += -liphlpapi

# TODO: check mac & linux

unix:!symbian: LIBS += -L./openssl/lib/ -lcrypto

#-----------------------------------------------------------------------------
# main source code 

DEFINES += GRP_DEFAULT=\"\\\"General\\\"\"
DEFINES += GRP_DEFAULT_ID=\"\\\"1CD75C10048C4E65F6082539A32DC111\\\"\"

include( lmc/resources/lang/translations.pri )

include( trace/trace.pri )
DEFINES += USE_LMC_TRACE

include( lmcapp/lmcapp.pri )

include( crypto/crypto.pri )

include( settings/settings.pri )

include( messaging/messaging.pri )

include( lmc/lmc.pri )

#-----------------------------------------------------------------------------








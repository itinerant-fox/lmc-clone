#
# lmcapp.pri
#

INCLUDEPATH += ./lmcapp

HEADERS += \
    ./lmcapp/qtsinglecoreapplication.h \
    ./lmcapp/qtsingleapplication.h \
    ./lmcapp/qtlockedfile.h \
    ./lmcapp/qtlocalpeer.h \
    ./lmcapp/application.h

SOURCES += \
    ./lmcapp/qtsinglecoreapplication.cpp \
    ./lmcapp/qtsingleapplication.cpp \
    ./lmcapp/qtlockedfile_win.cpp \
    ./lmcapp/qtlockedfile_unix.cpp \
    ./lmcapp/qtlockedfile.cpp \
    ./lmcapp/qtlocalpeer.cpp \
    ./lmcapp/application.cpp







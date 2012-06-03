#-----------------------------------------------------------------------------
#
# lmc.pri
#
#-----------------------------------------------------------------------------

#------------------------------------------------------------------------------
# TODO:
#  1. set resource files. (import files)
#------------------------------------------------------------------------------

# win32: RC_FILE = ./resources/lmcwin32.rc
# win32: OTHER_FILES += ./resources/lmcwin32.rc
# macx: ICON = lmc.icns

# note: check building
# $$TARGET

win32 {
    RC_FILE = ./lmc/resources/lmc.rc
    OTHER_FILES += ./lmc/resources/lmc.rc
    OTHER_FILES += ./build/buildwin32.bat

    # QMAKE_POST_BUILD = %QTDIR%\bin\rcc -binary ./lmc/resource.qrc -o ./release/lmc.rcc
    # $$DESTDIR/
    # system( "%QTDIR%\bin\rcc -binary ./lmc/resource.qrc -o ./release/lmc.rcc" )
    # system( ./build/build.cmd )
}

unix {
    OTHER_FILES += ./build/buildx11
}

macx {
    ICON = ./lmc/resource/lmc.icns
    OTHER_FILES += ./build/buildmacos
}

#------------------------------------------------------------------------------

RESOURCES += \
    lmc/resource.qrc

FORMS += \
    ./lmc/transferwindow.ui \
    ./lmc/settingsdialog.ui \
    ./lmc/mainwindow.ui \
    ./lmc/historywindow.ui \
    ./lmc/helpwindow.ui \
    ./lmc/chatwindow.ui \
    ./lmc/broadcastwindow.ui \
    ./lmc/aboutdialog.ui \
    ./lmc/updatewindow.ui \
    ./lmc/userinfowindow.ui \
    ./lmc/chatroomwindow.ui \
    ./lmc/userselectdialog.ui

#------------------------------------------------------------------------------

INCLUDEPATH += \
    ./lmc

HEADERS  += \
    ./lmc/usertreewidget.h \
    ./lmc/uidefinitions.h \
    ./lmc/udpnetwork.h \
    ./lmc/transferwindow.h \
    ./lmc/transferlistview.h \
    ./lmc/tcpnetwork.h \
    ./lmc/strings.h \
    ./lmc/soundplayer.h \
    ./lmc/shared.h \
    ./lmc/settingsdialog.h \
    ./lmc/settings.h \
    ./lmc/resource.h \
    ./lmc/network.h \
    ./lmc/netstreamer.h \
    ./lmc/messaging.h \
    ./lmc/message.h \
    ./lmc/mainwindow.h \
    ./lmc/lmc.h \
    ./lmc/imagepickeraction.h \
    ./lmc/imagepicker.h \
    ./lmc/historywindow.h \
    ./lmc/historytreewidget.h \
    ./lmc/helpwindow.h \
    ./lmc/filemodelview.h \
    ./lmc/chatwindow.h \
    ./lmc/chatdefinitions.h \
    ./lmc/broadcastwindow.h \
    ./lmc/history.h \
    ./lmc/stdlocation.h \
    ./lmc/definitions.h \
    ./lmc/datagram.h \
    ./lmc/crypto.h \
    ./lmc/aboutdialog.h \
    ./lmc/xmlmessage.h \
    ./lmc/chathelper.h \
    ./lmc/theme.h \
    ./lmc/messagelog.h \
    ./lmc/updatewindow.h \
    ./lmc/webnetwork.h \
    ./lmc/userinfowindow.h \
    ./lmc/chatroomwindow.h \
    ./lmc/userselectdialog.h \
    ./lmc/subcontrols.h \
    ./lmc/trace.h  

#------------------------------------------------------------------------------

SOURCES += \
    ./lmc/usertreewidget.cpp \
    ./lmc/udpnetwork.cpp \
    ./lmc/transferwindow.cpp \
    ./lmc/transferlistview.cpp \
    ./lmc/tcpnetwork.cpp \
    ./lmc/strings.cpp \
    ./lmc/soundplayer.cpp \
    ./lmc/shared.cpp \
    ./lmc/settingsdialog.cpp \
    ./lmc/settings.cpp \
    ./lmc/network.cpp \
    ./lmc/netstreamer.cpp \
    ./lmc/messagingproc.cpp \
    ./lmc/messaging.cpp \
    ./lmc/message.cpp \
    ./lmc/mainwindow.cpp \
    ./lmc/main.cpp \
    ./lmc/lmc.cpp \
    ./lmc/imagepickeraction.cpp \
    ./lmc/imagepicker.cpp \
    ./lmc/historywindow.cpp \
    ./lmc/history.cpp \
    ./lmc/helpwindow.cpp \
    ./lmc/filemodelview.cpp \
    ./lmc/datagram.cpp \
    ./lmc/crypto.cpp \
    ./lmc/chatwindow.cpp \
    ./lmc/broadcastwindow.cpp \
    ./lmc/aboutdialog.cpp \
    ./lmc/xmlmessage.cpp \
    ./lmc/chathelper.cpp \
    ./lmc/theme.cpp \
    ./lmc/messagelog.cpp \
    ./lmc/updatewindow.cpp \
    ./lmc/webnetwork.cpp \
    ./lmc/userinfowindow.cpp \
    ./lmc/chatroomwindow.cpp \
    ./lmc/userselectdialog.cpp \
    ./lmc/subcontrols.cpp \
    ./lmc/trace.cpp  

#------------------------------------------------------------------------------











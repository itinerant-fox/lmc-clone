#-----------------------------------------------------------------------------
#
# lmc.pri
#
#-----------------------------------------------------------------------------

# note: tray icon does not work...

win32 {
    RC_FILE = lmc/resources/lmc.rc
    OTHER_FILES += lmc/resources/lmc.rc
    OTHER_FILES += build/buildwin32.bat
}

# todo: fix it & build & test on platforms. (such as ubuntu/fedora...)
unix {
    OTHER_FILES += build/buildx11
}

# todo: fix it & build & test
macx {
    ICON = lmc/resource/lmc.icns
    OTHER_FILES += build/buildmacos
}

#------------------------------------------------------------------------------

RESOURCES += \
    lmc/resource.qrc

FORMS += \
    lmc/transferwindow.ui \
    lmc/settingsdialog.ui \
    lmc/mainwindow.ui \
    lmc/historywindow.ui \
    lmc/helpwindow.ui \
    lmc/chatwindow.ui \
    lmc/broadcastwindow.ui \
    lmc/aboutdialog.ui \
    lmc/updatewindow.ui \
    lmc/userinfowindow.ui \
    lmc/chatroomwindow.ui \
    lmc/userselectdialog.ui

#------------------------------------------------------------------------------

INCLUDEPATH += \
    lmc

HEADERS  += \
    lmc/usertreewidget.h \
    lmc/uidefinitions.h \
    lmc/transferwindow.h \
    lmc/transferlistview.h \
    lmc/strings.h \
    lmc/soundplayer.h \
    lmc/settingsdialog.h \
    lmc/resource.h \
    lmc/mainwindow.h \
    lmc/lmc.h \
    lmc/imagepickeraction.h \
    lmc/imagepicker.h \
    lmc/historywindow.h \
    lmc/historytreewidget.h \
    lmc/helpwindow.h \
    lmc/filemodelview.h \
    lmc/chatwindow.h \
    lmc/chatdefinitions.h \
    lmc/broadcastwindow.h \
    lmc/history.h \
    lmc/stdlocation.h \
    lmc/aboutdialog.h \
    lmc/chathelper.h \
    lmc/theme.h \
    lmc/messagelog.h \
    lmc/updatewindow.h \
    lmc/userinfowindow.h \
    lmc/chatroomwindow.h \
    lmc/userselectdialog.h \
    lmc/subcontrols.h \
    lmc/Helper.h \
    lmc/main.h \
    lmc/TrayMessageType.h

#------------------------------------------------------------------------------

SOURCES += \
    lmc/usertreewidget.cpp \
    lmc/transferwindow.cpp \
    lmc/transferlistview.cpp \
    lmc/strings.cpp \
    lmc/soundplayer.cpp \
    lmc/settingsdialog.cpp \
    lmc/netstreamer.cpp \
    lmc/mainwindow.cpp \
    lmc/main.cpp \
    lmc/lmc.cpp \
    lmc/imagepickeraction.cpp \
    lmc/imagepicker.cpp \
    lmc/historywindow.cpp \
    lmc/history.cpp \
    lmc/helpwindow.cpp \
    lmc/filemodelview.cpp \
    lmc/chatwindow.cpp \
    lmc/broadcastwindow.cpp \
    lmc/aboutdialog.cpp \
    lmc/chathelper.cpp \
    lmc/theme.cpp \
    lmc/messagelog.cpp \
    lmc/updatewindow.cpp \
    lmc/userinfowindow.cpp \
    lmc/chatroomwindow.cpp \
    lmc/userselectdialog.cpp \
    lmc/subcontrols.cpp \
    lmc/Helper.cpp


#------------------------------------------------------------------------------











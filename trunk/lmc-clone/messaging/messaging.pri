#-----------------------------------------------------------------------------
#
# messaging.pri
#
#-----------------------------------------------------------------------------

INCLUDEPATH += \
    messaging

HEADERS += \
    messaging/datagram.h \
    messaging/FileMode.h \
    messaging/FileOp.h \
    messaging/FileType.h \
    messaging/Group.h \
    messaging/GroupMsgOp.h \
    messaging/MessageHeader.h \
    messaging/MessageType.h \
    messaging/MessagHeaderMember.h \
    messaging/messaging.h \
    messaging/netstreamer.h \
    messaging/network.h \
    messaging/PendingMsg.h \
    messaging/QueryOp.h \
    messaging/ReceivedMsg.h \
    messaging/StatusType.h \
    messaging/tcpnetwork.h \
    messaging/udpnetwork.h \
    messaging/User.h \
    messaging/webnetwork.h

SOURCES += \
    messaging/messaging.cpp \
    messaging/messagingproc.cpp \
    messaging/network.cpp \
    messaging/tcpnetwork.cpp \
    messaging/udpnetwork.cpp \
    messaging/webnetwork.cpp \
    messaging/User.cpp \
    messaging/Group.cpp



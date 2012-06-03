/********************************************************************************
** Form generated from reading UI file 'chatroomwindow.ui'
**
** Created: Fri Jun 1 10:30:17 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATROOMWINDOW_H
#define UI_CHATROOMWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "usertreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ChatRoomWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *vSplitter;
    QSplitter *hSplitter;
    QWidget *layoutWidget_4;
    QVBoxLayout *vLayoutMsgLog;
    QWidget *wgtLog;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *logLayout;
    QLabel *lblInfo;
    QWidget *layoutWidget1_4;
    QVBoxLayout *vLayoutMsgBox;
    QLabel *lblDividerTop;
    QWidget *wgtToolBar;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *toolBarLayout;
    QLabel *lblDividerBottom;
    QTextEdit *txtMessage;
    QWidget *layoutWidget;
    QVBoxLayout *rightLayout;
    QWidget *wgtContactsBar;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *contactsBarLayout;
    lmcUserTreeWidget *tvUserList;

    void setupUi(QWidget *ChatRoomWindow)
    {
        if (ChatRoomWindow->objectName().isEmpty())
            ChatRoomWindow->setObjectName(QString::fromUtf8("ChatRoomWindow"));
        ChatRoomWindow->resize(587, 445);
        verticalLayout_2 = new QVBoxLayout(ChatRoomWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        vSplitter = new QSplitter(ChatRoomWindow);
        vSplitter->setObjectName(QString::fromUtf8("vSplitter"));
        vSplitter->setOrientation(Qt::Horizontal);
        vSplitter->setHandleWidth(7);
        vSplitter->setChildrenCollapsible(false);
        hSplitter = new QSplitter(vSplitter);
        hSplitter->setObjectName(QString::fromUtf8("hSplitter"));
        hSplitter->setOrientation(Qt::Vertical);
        hSplitter->setHandleWidth(7);
        hSplitter->setChildrenCollapsible(false);
        layoutWidget_4 = new QWidget(hSplitter);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        vLayoutMsgLog = new QVBoxLayout(layoutWidget_4);
        vLayoutMsgLog->setSpacing(0);
        vLayoutMsgLog->setObjectName(QString::fromUtf8("vLayoutMsgLog"));
        vLayoutMsgLog->setContentsMargins(0, 0, 0, 0);
        wgtLog = new QWidget(layoutWidget_4);
        wgtLog->setObjectName(QString::fromUtf8("wgtLog"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wgtLog->sizePolicy().hasHeightForWidth());
        wgtLog->setSizePolicy(sizePolicy);
        wgtLog->setMinimumSize(QSize(0, 54));
        horizontalLayout_4 = new QHBoxLayout(wgtLog);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        logLayout = new QVBoxLayout();
        logLayout->setSpacing(0);
        logLayout->setObjectName(QString::fromUtf8("logLayout"));

        horizontalLayout_4->addLayout(logLayout);


        vLayoutMsgLog->addWidget(wgtLog);

        lblInfo = new QLabel(layoutWidget_4);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setAutoFillBackground(true);
        lblInfo->setAlignment(Qt::AlignCenter);

        vLayoutMsgLog->addWidget(lblInfo);

        hSplitter->addWidget(layoutWidget_4);
        layoutWidget1_4 = new QWidget(hSplitter);
        layoutWidget1_4->setObjectName(QString::fromUtf8("layoutWidget1_4"));
        vLayoutMsgBox = new QVBoxLayout(layoutWidget1_4);
        vLayoutMsgBox->setSpacing(0);
        vLayoutMsgBox->setObjectName(QString::fromUtf8("vLayoutMsgBox"));
        vLayoutMsgBox->setContentsMargins(0, 0, 0, 0);
        lblDividerTop = new QLabel(layoutWidget1_4);
        lblDividerTop->setObjectName(QString::fromUtf8("lblDividerTop"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblDividerTop->sizePolicy().hasHeightForWidth());
        lblDividerTop->setSizePolicy(sizePolicy1);
        lblDividerTop->setMinimumSize(QSize(0, 1));
        lblDividerTop->setMaximumSize(QSize(16777215, 1));

        vLayoutMsgBox->addWidget(lblDividerTop);

        wgtToolBar = new QWidget(layoutWidget1_4);
        wgtToolBar->setObjectName(QString::fromUtf8("wgtToolBar"));
        wgtToolBar->setMinimumSize(QSize(0, 24));
        wgtToolBar->setMaximumSize(QSize(16777214, 24));
        verticalLayout_12 = new QVBoxLayout(wgtToolBar);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        toolBarLayout = new QHBoxLayout();
        toolBarLayout->setSpacing(0);
        toolBarLayout->setObjectName(QString::fromUtf8("toolBarLayout"));

        verticalLayout_12->addLayout(toolBarLayout);


        vLayoutMsgBox->addWidget(wgtToolBar);

        lblDividerBottom = new QLabel(layoutWidget1_4);
        lblDividerBottom->setObjectName(QString::fromUtf8("lblDividerBottom"));
        sizePolicy1.setHeightForWidth(lblDividerBottom->sizePolicy().hasHeightForWidth());
        lblDividerBottom->setSizePolicy(sizePolicy1);
        lblDividerBottom->setMinimumSize(QSize(0, 1));
        lblDividerBottom->setMaximumSize(QSize(16777215, 1));

        vLayoutMsgBox->addWidget(lblDividerBottom);

        txtMessage = new QTextEdit(layoutWidget1_4);
        txtMessage->setObjectName(QString::fromUtf8("txtMessage"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txtMessage->sizePolicy().hasHeightForWidth());
        txtMessage->setSizePolicy(sizePolicy2);
        txtMessage->setMinimumSize(QSize(0, 36));
        txtMessage->setFrameShape(QFrame::NoFrame);
        txtMessage->setTabChangesFocus(true);
        txtMessage->setAcceptRichText(false);

        vLayoutMsgBox->addWidget(txtMessage);

        hSplitter->addWidget(layoutWidget1_4);
        vSplitter->addWidget(hSplitter);
        layoutWidget = new QWidget(vSplitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        rightLayout = new QVBoxLayout(layoutWidget);
        rightLayout->setSpacing(0);
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        rightLayout->setContentsMargins(0, 0, 0, 0);
        wgtContactsBar = new QWidget(layoutWidget);
        wgtContactsBar->setObjectName(QString::fromUtf8("wgtContactsBar"));
        verticalLayout = new QVBoxLayout(wgtContactsBar);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        contactsBarLayout = new QHBoxLayout();
        contactsBarLayout->setObjectName(QString::fromUtf8("contactsBarLayout"));

        verticalLayout->addLayout(contactsBarLayout);


        rightLayout->addWidget(wgtContactsBar);

        tvUserList = new lmcUserTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Contacts"));
        tvUserList->setHeaderItem(__qtreewidgetitem);
        tvUserList->setObjectName(QString::fromUtf8("tvUserList"));
        tvUserList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tvUserList->setIndentation(0);
        tvUserList->setAnimated(true);
        tvUserList->setAllColumnsShowFocus(true);
        tvUserList->header()->setVisible(false);

        rightLayout->addWidget(tvUserList);

        vSplitter->addWidget(layoutWidget);

        verticalLayout_2->addWidget(vSplitter);


        retranslateUi(ChatRoomWindow);

        QMetaObject::connectSlotsByName(ChatRoomWindow);
    } // setupUi

    void retranslateUi(QWidget *ChatRoomWindow)
    {
        ChatRoomWindow->setWindowTitle(QApplication::translate("ChatRoomWindow", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChatRoomWindow: public Ui_ChatRoomWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOMWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created: Fri Jun 1 10:30:17 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

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

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *wgtLog;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *logLayout;
    QLabel *lblInfo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblDividerTop;
    QWidget *wgtToolBar;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *toolBarLayout;
    QLabel *lblDividerBottom;
    QTextEdit *txtMessage;

    void setupUi(QWidget *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QString::fromUtf8("ChatWindow"));
        ChatWindow->resize(325, 360);
        verticalLayout_4 = new QVBoxLayout(ChatWindow);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter = new QSplitter(ChatWindow);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(7);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wgtLog = new QWidget(layoutWidget);
        wgtLog->setObjectName(QString::fromUtf8("wgtLog"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wgtLog->sizePolicy().hasHeightForWidth());
        wgtLog->setSizePolicy(sizePolicy);
        wgtLog->setMinimumSize(QSize(0, 54));
        horizontalLayout = new QHBoxLayout(wgtLog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        logLayout = new QVBoxLayout();
        logLayout->setSpacing(0);
        logLayout->setObjectName(QString::fromUtf8("logLayout"));

        horizontalLayout->addLayout(logLayout);


        verticalLayout->addWidget(wgtLog);

        lblInfo = new QLabel(layoutWidget);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setAutoFillBackground(true);
        lblInfo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblInfo);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblDividerTop = new QLabel(layoutWidget1);
        lblDividerTop->setObjectName(QString::fromUtf8("lblDividerTop"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblDividerTop->sizePolicy().hasHeightForWidth());
        lblDividerTop->setSizePolicy(sizePolicy1);
        lblDividerTop->setMinimumSize(QSize(0, 1));
        lblDividerTop->setMaximumSize(QSize(16777215, 1));

        verticalLayout_3->addWidget(lblDividerTop);

        wgtToolBar = new QWidget(layoutWidget1);
        wgtToolBar->setObjectName(QString::fromUtf8("wgtToolBar"));
        wgtToolBar->setMinimumSize(QSize(0, 24));
        wgtToolBar->setMaximumSize(QSize(16777214, 24));
        verticalLayout_2 = new QVBoxLayout(wgtToolBar);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        toolBarLayout = new QHBoxLayout();
        toolBarLayout->setSpacing(0);
        toolBarLayout->setObjectName(QString::fromUtf8("toolBarLayout"));

        verticalLayout_2->addLayout(toolBarLayout);


        verticalLayout_3->addWidget(wgtToolBar);

        lblDividerBottom = new QLabel(layoutWidget1);
        lblDividerBottom->setObjectName(QString::fromUtf8("lblDividerBottom"));
        sizePolicy1.setHeightForWidth(lblDividerBottom->sizePolicy().hasHeightForWidth());
        lblDividerBottom->setSizePolicy(sizePolicy1);
        lblDividerBottom->setMinimumSize(QSize(0, 1));
        lblDividerBottom->setMaximumSize(QSize(16777215, 1));

        verticalLayout_3->addWidget(lblDividerBottom);

        txtMessage = new QTextEdit(layoutWidget1);
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

        verticalLayout_3->addWidget(txtMessage);

        splitter->addWidget(layoutWidget1);

        verticalLayout_4->addWidget(splitter);


        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QWidget *ChatWindow)
    {
        ChatWindow->setWindowTitle(QApplication::translate("ChatWindow", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H

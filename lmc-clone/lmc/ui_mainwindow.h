/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Jun 1 10:30:16 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "subcontrols.h"
#include "usertreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *statusLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *infoLayout;
    QHBoxLayout *horizontalLayout;
    lmcLabel *lblUserName;
    QSpacerItem *horizontalSpacer;
    QLabel *lblStatus;
    lmcLineEdit *txtNote;
    QSpacerItem *horizontalSpacer_5;
    lmcToolButton *btnAvatar;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblDividerTop;
    QWidget *wgtToolBar;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *toolBarLayout;
    lmcUserTreeWidget *tvUserList;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(265, 445);
        verticalLayout_2 = new QVBoxLayout(MainWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(MainWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setMaximumSize(QSize(16777215, 40));
        frame->setFrameShape(QFrame::NoFrame);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 2);
        horizontalSpacer_2 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        statusLayout = new QVBoxLayout();
        statusLayout->setSpacing(0);
        statusLayout->setObjectName(QString::fromUtf8("statusLayout"));
        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        statusLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(statusLayout);

        horizontalSpacer_3 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        infoLayout = new QVBoxLayout();
        infoLayout->setSpacing(0);
        infoLayout->setObjectName(QString::fromUtf8("infoLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblUserName = new lmcLabel(frame);
        lblUserName->setObjectName(QString::fromUtf8("lblUserName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblUserName->sizePolicy().hasHeightForWidth());
        lblUserName->setSizePolicy(sizePolicy);
        lblUserName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblUserName);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblStatus = new QLabel(frame);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblStatus->sizePolicy().hasHeightForWidth());
        lblStatus->setSizePolicy(sizePolicy1);
        lblStatus->setMinimumSize(QSize(0, 0));
        lblStatus->setMaximumSize(QSize(16777215, 16777215));
        lblStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblStatus);


        infoLayout->addLayout(horizontalLayout);

        txtNote = new lmcLineEdit(frame);
        txtNote->setObjectName(QString::fromUtf8("txtNote"));
        txtNote->setMaximumSize(QSize(16777215, 17));

        infoLayout->addWidget(txtNote);


        horizontalLayout_2->addLayout(infoLayout);

        horizontalSpacer_5 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btnAvatar = new lmcToolButton(frame);
        btnAvatar->setObjectName(QString::fromUtf8("btnAvatar"));
        btnAvatar->setIconSize(QSize(32, 32));
        btnAvatar->setPopupMode(QToolButton::InstantPopup);
        btnAvatar->setAutoRaise(true);

        horizontalLayout_2->addWidget(btnAvatar);

        horizontalSpacer_4 = new QSpacerItem(2, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(frame);

        lblDividerTop = new QLabel(MainWindow);
        lblDividerTop->setObjectName(QString::fromUtf8("lblDividerTop"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblDividerTop->sizePolicy().hasHeightForWidth());
        lblDividerTop->setSizePolicy(sizePolicy2);
        lblDividerTop->setMinimumSize(QSize(0, 2));
        lblDividerTop->setMaximumSize(QSize(16777215, 2));

        verticalLayout_2->addWidget(lblDividerTop);

        wgtToolBar = new QWidget(MainWindow);
        wgtToolBar->setObjectName(QString::fromUtf8("wgtToolBar"));
        sizePolicy1.setHeightForWidth(wgtToolBar->sizePolicy().hasHeightForWidth());
        wgtToolBar->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(wgtToolBar);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        toolBarLayout = new QHBoxLayout();
        toolBarLayout->setSpacing(0);
        toolBarLayout->setObjectName(QString::fromUtf8("toolBarLayout"));

        verticalLayout_4->addLayout(toolBarLayout);


        verticalLayout_2->addWidget(wgtToolBar);

        tvUserList = new lmcUserTreeWidget(MainWindow);
        tvUserList->setObjectName(QString::fromUtf8("tvUserList"));
        tvUserList->setFrameShape(QFrame::NoFrame);
        tvUserList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tvUserList->setDragEnabled(true);
        tvUserList->setDragDropMode(QAbstractItemView::InternalMove);
        tvUserList->setDefaultDropAction(Qt::MoveAction);
        tvUserList->setIndentation(0);
        tvUserList->setAnimated(true);
        tvUserList->setAllColumnsShowFocus(true);
        tvUserList->header()->setVisible(false);

        verticalLayout_2->addWidget(tvUserList);

        QWidget::setTabOrder(tvUserList, btnAvatar);
        QWidget::setTabOrder(btnAvatar, txtNote);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", 0, QApplication::UnicodeUTF8));
        lblUserName->setText(QApplication::translate("MainWindow", "Username", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));
        txtNote->setPlaceholderText(QApplication::translate("MainWindow", "Type a note", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAvatar->setToolTip(QApplication::translate("MainWindow", "Change avatar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = tvUserList->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Contacts", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

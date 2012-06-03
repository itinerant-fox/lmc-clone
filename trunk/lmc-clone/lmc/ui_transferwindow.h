/********************************************************************************
** Form generated from reading UI file 'transferwindow.ui'
**
** Created: Fri Jun 1 10:30:16 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERWINDOW_H
#define UI_TRANSFERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "transferlistview.h"

QT_BEGIN_NAMESPACE

class Ui_TransferWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *wgtToolBar;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *toolBarLayout;
    lmcTransferListView *lvTransferList;
    QFrame *bottomLine;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QWidget *TransferWindow)
    {
        if (TransferWindow->objectName().isEmpty())
            TransferWindow->setObjectName(QString::fromUtf8("TransferWindow"));
        TransferWindow->resize(464, 360);
        verticalLayout = new QVBoxLayout(TransferWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 3);
        wgtToolBar = new QWidget(TransferWindow);
        wgtToolBar->setObjectName(QString::fromUtf8("wgtToolBar"));
        wgtToolBar->setMinimumSize(QSize(0, 26));
        wgtToolBar->setMaximumSize(QSize(16777215, 26));
        verticalLayout_2 = new QVBoxLayout(wgtToolBar);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        toolBarLayout = new QHBoxLayout();
        toolBarLayout->setSpacing(0);
        toolBarLayout->setObjectName(QString::fromUtf8("toolBarLayout"));

        verticalLayout_2->addLayout(toolBarLayout);


        verticalLayout->addWidget(wgtToolBar);

        lvTransferList = new lmcTransferListView(TransferWindow);
        lvTransferList->setObjectName(QString::fromUtf8("lvTransferList"));
        lvTransferList->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(lvTransferList);

        bottomLine = new QFrame(TransferWindow);
        bottomLine->setObjectName(QString::fromUtf8("bottomLine"));
        bottomLine->setFrameShape(QFrame::HLine);
        bottomLine->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(bottomLine);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, -1, 3, -1);
        btnClear = new QPushButton(TransferWindow);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(TransferWindow);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lvTransferList, btnClear);
        QWidget::setTabOrder(btnClear, btnClose);

        retranslateUi(TransferWindow);
        QObject::connect(btnClose, SIGNAL(clicked()), TransferWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(TransferWindow);
    } // setupUi

    void retranslateUi(QWidget *TransferWindow)
    {
        TransferWindow->setWindowTitle(QApplication::translate("TransferWindow", "Form", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("TransferWindow", "Clear List", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("TransferWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TransferWindow: public Ui_TransferWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERWINDOW_H

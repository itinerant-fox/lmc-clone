/********************************************************************************
** Form generated from reading UI file 'userselectdialog.ui'
**
** Created: Fri Jun 1 10:30:17 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSELECTDIALOG_H
#define UI_USERSELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "usertreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_UserSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    lmcUserTreeWidget *tvUserList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *UserSelectDialog)
    {
        if (UserSelectDialog->objectName().isEmpty())
            UserSelectDialog->setObjectName(QString::fromUtf8("UserSelectDialog"));
        UserSelectDialog->setWindowModality(Qt::WindowModal);
        UserSelectDialog->resize(291, 386);
        verticalLayout = new QVBoxLayout(UserSelectDialog);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tvUserList = new lmcUserTreeWidget(UserSelectDialog);
        tvUserList->setObjectName(QString::fromUtf8("tvUserList"));
        tvUserList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tvUserList->setIndentation(0);
        tvUserList->header()->setVisible(false);

        verticalLayout->addWidget(tvUserList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(UserSelectDialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setDefault(true);

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(UserSelectDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UserSelectDialog);
        QObject::connect(btnOK, SIGNAL(clicked()), UserSelectDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), UserSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *UserSelectDialog)
    {
        UserSelectDialog->setWindowTitle(QApplication::translate("UserSelectDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tvUserList->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("UserSelectDialog", "Contacts", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("UserSelectDialog", "OK", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("UserSelectDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserSelectDialog: public Ui_UserSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSELECTDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'userinfowindow.ui'
**
** Created: Fri Jun 1 10:30:17 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOWINDOW_H
#define UI_USERINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfoWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblAvatar;
    QVBoxLayout *verticalLayout;
    QLabel *lblUserName;
    QLabel *lblStatus;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *tabPersonal;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblFirstNameDesc;
    QLineEdit *txtFirstName;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblLastNameDesc;
    QLineEdit *txtLastName;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblAbout;
    QPlainTextEdit *txtAbout;
    QWidget *tabSystem;
    QFormLayout *formLayout;
    QLabel *lblIPAddressDesc;
    QLabel *lblIPAddress;
    QLabel *lblLogonNameDesc;
    QLabel *lblLogonName;
    QLabel *lblComputerNameDesc;
    QLabel *lblComputerName;
    QLabel *lblOSNameDesc;
    QLabel *lblOSName;
    QLabel *lblVersionDesc;
    QLabel *lblVersion;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *UserInfoWindow)
    {
        if (UserInfoWindow->objectName().isEmpty())
            UserInfoWindow->setObjectName(QString::fromUtf8("UserInfoWindow"));
        UserInfoWindow->resize(329, 260);
        verticalLayout_2 = new QVBoxLayout(UserInfoWindow);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblAvatar = new QLabel(UserInfoWindow);
        lblAvatar->setObjectName(QString::fromUtf8("lblAvatar"));
        lblAvatar->setMinimumSize(QSize(48, 48));
        lblAvatar->setMaximumSize(QSize(48, 48));

        horizontalLayout_2->addWidget(lblAvatar);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblUserName = new QLabel(UserInfoWindow);
        lblUserName->setObjectName(QString::fromUtf8("lblUserName"));

        verticalLayout->addWidget(lblUserName);

        lblStatus = new QLabel(UserInfoWindow);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));

        verticalLayout->addWidget(lblStatus);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(UserInfoWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(311, 151));
        tabPersonal = new QWidget();
        tabPersonal->setObjectName(QString::fromUtf8("tabPersonal"));
        verticalLayout_6 = new QVBoxLayout(tabPersonal);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lblFirstNameDesc = new QLabel(tabPersonal);
        lblFirstNameDesc->setObjectName(QString::fromUtf8("lblFirstNameDesc"));

        verticalLayout_3->addWidget(lblFirstNameDesc);

        txtFirstName = new QLineEdit(tabPersonal);
        txtFirstName->setObjectName(QString::fromUtf8("txtFirstName"));
        txtFirstName->setReadOnly(true);

        verticalLayout_3->addWidget(txtFirstName);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lblLastNameDesc = new QLabel(tabPersonal);
        lblLastNameDesc->setObjectName(QString::fromUtf8("lblLastNameDesc"));

        verticalLayout_4->addWidget(lblLastNameDesc);

        txtLastName = new QLineEdit(tabPersonal);
        txtLastName->setObjectName(QString::fromUtf8("txtLastName"));
        txtLastName->setReadOnly(true);

        verticalLayout_4->addWidget(txtLastName);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lblAbout = new QLabel(tabPersonal);
        lblAbout->setObjectName(QString::fromUtf8("lblAbout"));

        verticalLayout_5->addWidget(lblAbout);

        txtAbout = new QPlainTextEdit(tabPersonal);
        txtAbout->setObjectName(QString::fromUtf8("txtAbout"));
        txtAbout->setMaximumSize(QSize(16777215, 41));
        txtAbout->setTabChangesFocus(true);
        txtAbout->setUndoRedoEnabled(false);
        txtAbout->setReadOnly(true);

        verticalLayout_5->addWidget(txtAbout);


        verticalLayout_6->addLayout(verticalLayout_5);

        tabWidget->addTab(tabPersonal, QString());
        tabSystem = new QWidget();
        tabSystem->setObjectName(QString::fromUtf8("tabSystem"));
        formLayout = new QFormLayout(tabSystem);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblIPAddressDesc = new QLabel(tabSystem);
        lblIPAddressDesc->setObjectName(QString::fromUtf8("lblIPAddressDesc"));
        lblIPAddressDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblIPAddressDesc);

        lblIPAddress = new QLabel(tabSystem);
        lblIPAddress->setObjectName(QString::fromUtf8("lblIPAddress"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblIPAddress);

        lblLogonNameDesc = new QLabel(tabSystem);
        lblLogonNameDesc->setObjectName(QString::fromUtf8("lblLogonNameDesc"));
        lblLogonNameDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblLogonNameDesc);

        lblLogonName = new QLabel(tabSystem);
        lblLogonName->setObjectName(QString::fromUtf8("lblLogonName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblLogonName);

        lblComputerNameDesc = new QLabel(tabSystem);
        lblComputerNameDesc->setObjectName(QString::fromUtf8("lblComputerNameDesc"));
        lblComputerNameDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblComputerNameDesc);

        lblComputerName = new QLabel(tabSystem);
        lblComputerName->setObjectName(QString::fromUtf8("lblComputerName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblComputerName);

        lblOSNameDesc = new QLabel(tabSystem);
        lblOSNameDesc->setObjectName(QString::fromUtf8("lblOSNameDesc"));
        lblOSNameDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, lblOSNameDesc);

        lblOSName = new QLabel(tabSystem);
        lblOSName->setObjectName(QString::fromUtf8("lblOSName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lblOSName);

        lblVersionDesc = new QLabel(tabSystem);
        lblVersionDesc->setObjectName(QString::fromUtf8("lblVersionDesc"));
        lblVersionDesc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, lblVersionDesc);

        lblVersion = new QLabel(tabSystem);
        lblVersion->setObjectName(QString::fromUtf8("lblVersion"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lblVersion);

        tabWidget->addTab(tabSystem, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(UserInfoWindow);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setDefault(true);

        horizontalLayout->addWidget(btnClose);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(tabWidget, txtFirstName);
        QWidget::setTabOrder(txtFirstName, txtLastName);
        QWidget::setTabOrder(txtLastName, txtAbout);
        QWidget::setTabOrder(txtAbout, btnClose);

        retranslateUi(UserInfoWindow);
        QObject::connect(btnClose, SIGNAL(clicked()), UserInfoWindow, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *UserInfoWindow)
    {
        UserInfoWindow->setWindowTitle(QApplication::translate("UserInfoWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        lblAvatar->setText(QApplication::translate("UserInfoWindow", "<Avatar>", 0, QApplication::UnicodeUTF8));
        lblUserName->setText(QApplication::translate("UserInfoWindow", "<User Name>", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QApplication::translate("UserInfoWindow", "<Status>", 0, QApplication::UnicodeUTF8));
        lblFirstNameDesc->setText(QApplication::translate("UserInfoWindow", "First Name:", 0, QApplication::UnicodeUTF8));
        txtFirstName->setText(QApplication::translate("UserInfoWindow", "N/A", 0, QApplication::UnicodeUTF8));
        lblLastNameDesc->setText(QApplication::translate("UserInfoWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        txtLastName->setText(QApplication::translate("UserInfoWindow", "N/A", 0, QApplication::UnicodeUTF8));
        lblAbout->setText(QApplication::translate("UserInfoWindow", "About:", 0, QApplication::UnicodeUTF8));
        txtAbout->setPlainText(QApplication::translate("UserInfoWindow", "N/A", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPersonal), QApplication::translate("UserInfoWindow", "Personal Information", 0, QApplication::UnicodeUTF8));
        lblIPAddressDesc->setText(QApplication::translate("UserInfoWindow", "IP Address:", 0, QApplication::UnicodeUTF8));
        lblIPAddress->setText(QApplication::translate("UserInfoWindow", "<IP Address>", 0, QApplication::UnicodeUTF8));
        lblLogonNameDesc->setText(QApplication::translate("UserInfoWindow", "Logon Name:", 0, QApplication::UnicodeUTF8));
        lblLogonName->setText(QApplication::translate("UserInfoWindow", "<Logon Name>", 0, QApplication::UnicodeUTF8));
        lblComputerNameDesc->setText(QApplication::translate("UserInfoWindow", "Computer Name:", 0, QApplication::UnicodeUTF8));
        lblComputerName->setText(QApplication::translate("UserInfoWindow", "<Computer Name>", 0, QApplication::UnicodeUTF8));
        lblOSNameDesc->setText(QApplication::translate("UserInfoWindow", "Operating System:", 0, QApplication::UnicodeUTF8));
        lblOSName->setText(QApplication::translate("UserInfoWindow", "<Operating System>", 0, QApplication::UnicodeUTF8));
        lblVersionDesc->setText(QApplication::translate("UserInfoWindow", "Messenger Version:", 0, QApplication::UnicodeUTF8));
        lblVersion->setText(QApplication::translate("UserInfoWindow", "<Messenger Version>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabSystem), QApplication::translate("UserInfoWindow", "System Information", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("UserInfoWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserInfoWindow: public Ui_UserInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOWINDOW_H

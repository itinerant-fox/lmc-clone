/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Fri Jun 1 10:30:17 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblLogoSmall;
    QLabel *lblTitle;
    QTabWidget *tabWidget;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *lblDescription;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabThanks;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *txtThanks;
    QWidget *tabLicense;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *txtLicense;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnClose;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::WindowModal);
        AboutDialog->resize(476, 334);
        verticalLayout_3 = new QVBoxLayout(AboutDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(24);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblLogoSmall = new QLabel(AboutDialog);
        lblLogoSmall->setObjectName(QString::fromUtf8("lblLogoSmall"));
        lblLogoSmall->setMinimumSize(QSize(48, 48));
        lblLogoSmall->setMaximumSize(QSize(48, 48));

        horizontalLayout_2->addWidget(lblLogoSmall);

        lblTitle = new QLabel(AboutDialog);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));

        horizontalLayout_2->addWidget(lblTitle);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        verticalLayout = new QVBoxLayout(tabAbout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblDescription = new QLabel(tabAbout);
        lblDescription->setObjectName(QString::fromUtf8("lblDescription"));
        lblDescription->setWordWrap(true);

        horizontalLayout->addWidget(lblDescription);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        tabWidget->addTab(tabAbout, QString());
        tabThanks = new QWidget();
        tabThanks->setObjectName(QString::fromUtf8("tabThanks"));
        horizontalLayout_3 = new QHBoxLayout(tabThanks);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        txtThanks = new QPlainTextEdit(tabThanks);
        txtThanks->setObjectName(QString::fromUtf8("txtThanks"));
        txtThanks->setTabChangesFocus(true);
        txtThanks->setUndoRedoEnabled(false);
        txtThanks->setReadOnly(true);

        horizontalLayout_3->addWidget(txtThanks);

        tabWidget->addTab(tabThanks, QString());
        tabLicense = new QWidget();
        tabLicense->setObjectName(QString::fromUtf8("tabLicense"));
        verticalLayout_2 = new QVBoxLayout(tabLicense);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        txtLicense = new QPlainTextEdit(tabLicense);
        txtLicense->setObjectName(QString::fromUtf8("txtLicense"));
        txtLicense->setMinimumSize(QSize(450, 0));
        txtLicense->setTabChangesFocus(true);
        txtLicense->setUndoRedoEnabled(false);
        txtLicense->setReadOnly(true);

        verticalLayout_2->addWidget(txtLicense);

        tabWidget->addTab(tabLicense, QString());

        verticalLayout_3->addWidget(tabWidget);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnClose = new QPushButton(AboutDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        hboxLayout->addWidget(btnClose);


        verticalLayout_3->addLayout(hboxLayout);


        retranslateUi(AboutDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lblLogoSmall->setText(QApplication::translate("AboutDialog", "<Logo>", 0, QApplication::UnicodeUTF8));
        lblTitle->setText(QApplication::translate("AboutDialog", "<Application Title>", 0, QApplication::UnicodeUTF8));
        lblDescription->setText(QApplication::translate("AboutDialog", "<Description>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("AboutDialog", "About", 0, QApplication::UnicodeUTF8));
        txtThanks->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabThanks), QApplication::translate("AboutDialog", "Thanks", 0, QApplication::UnicodeUTF8));
        txtLicense->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabLicense), QApplication::translate("AboutDialog", "License", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("AboutDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H

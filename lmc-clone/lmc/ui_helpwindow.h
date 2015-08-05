/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created: Fri Jun 1 10:30:16 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *txtHelp;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QWidget *HelpWindow)
    {
        if (HelpWindow->objectName().isEmpty())
            HelpWindow->setObjectName(QString::fromUtf8("HelpWindow"));
        HelpWindow->resize(464, 360);
        verticalLayout = new QVBoxLayout(HelpWindow);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        txtHelp = new QTextBrowser(HelpWindow);
        txtHelp->setObjectName(QString::fromUtf8("txtHelp"));
        txtHelp->setOpenExternalLinks(true);

        verticalLayout->addWidget(txtHelp);

        line = new QFrame(HelpWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(HelpWindow);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HelpWindow);
        QObject::connect(btnClose, SIGNAL(clicked()), HelpWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(HelpWindow);
    } // setupUi

    void retranslateUi(QWidget *HelpWindow)
    {
        HelpWindow->setWindowTitle(QApplication::translate("HelpWindow", "Form", 0));
        btnClose->setText(QApplication::translate("HelpWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpWindow: public Ui_HelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H

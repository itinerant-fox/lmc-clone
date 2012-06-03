/********************************************************************************
** Form generated from reading UI file 'updatewindow.ui'
**
** Created: Fri Jun 1 10:30:17 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEWINDOW_H
#define UI_UPDATEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblOutput;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;
    QPushButton *btnRecheck;

    void setupUi(QWidget *UpdateWindow)
    {
        if (UpdateWindow->objectName().isEmpty())
            UpdateWindow->setObjectName(QString::fromUtf8("UpdateWindow"));
        UpdateWindow->resize(368, 118);
        verticalLayout = new QVBoxLayout(UpdateWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblOutput = new QLabel(UpdateWindow);
        lblOutput->setObjectName(QString::fromUtf8("lblOutput"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblOutput->sizePolicy().hasHeightForWidth());
        lblOutput->setSizePolicy(sizePolicy);
        lblOutput->setMinimumSize(QSize(350, 60));
        lblOutput->setMargin(12);

        verticalLayout->addWidget(lblOutput);

        line = new QFrame(UpdateWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 3, 6, 6);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(UpdateWindow);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setDefault(true);

        horizontalLayout->addWidget(btnClose);

        btnRecheck = new QPushButton(UpdateWindow);
        btnRecheck->setObjectName(QString::fromUtf8("btnRecheck"));

        horizontalLayout->addWidget(btnRecheck);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdateWindow);
        QObject::connect(btnClose, SIGNAL(clicked()), UpdateWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(UpdateWindow);
    } // setupUi

    void retranslateUi(QWidget *UpdateWindow)
    {
        UpdateWindow->setWindowTitle(QApplication::translate("UpdateWindow", "Form", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("UpdateWindow", "Close", 0, QApplication::UnicodeUTF8));
        btnRecheck->setText(QApplication::translate("UpdateWindow", "Recheck Version", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UpdateWindow: public Ui_UpdateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEWINDOW_H

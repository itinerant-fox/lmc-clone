/********************************************************************************
** Form generated from reading UI file 'historywindow.ui'
**
** Created: Fri Jun 1 10:30:16 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYWINDOW_H
#define UI_HISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryWindow
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeWidget *tvMsgList;
    QFrame *fraMessageLog;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *logLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClearHistory;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QWidget *HistoryWindow)
    {
        if (HistoryWindow->objectName().isEmpty())
            HistoryWindow->setObjectName(QString::fromUtf8("HistoryWindow"));
        HistoryWindow->resize(627, 412);
        verticalLayout = new QVBoxLayout(HistoryWindow);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 3);
        splitter = new QSplitter(HistoryWindow);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(7);
        splitter->setChildrenCollapsible(false);
        tvMsgList = new QTreeWidget(splitter);
        tvMsgList->setObjectName(QString::fromUtf8("tvMsgList"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tvMsgList->sizePolicy().hasHeightForWidth());
        tvMsgList->setSizePolicy(sizePolicy1);
        tvMsgList->setAlternatingRowColors(true);
        tvMsgList->setIndentation(0);
        tvMsgList->setItemsExpandable(false);
        tvMsgList->setSortingEnabled(true);
        tvMsgList->setExpandsOnDoubleClick(false);
        tvMsgList->setColumnCount(2);
        splitter->addWidget(tvMsgList);
        fraMessageLog = new QFrame(splitter);
        fraMessageLog->setObjectName(QString::fromUtf8("fraMessageLog"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fraMessageLog->sizePolicy().hasHeightForWidth());
        fraMessageLog->setSizePolicy(sizePolicy2);
        fraMessageLog->setFrameShape(QFrame::StyledPanel);
        fraMessageLog->setFrameShadow(QFrame::Sunken);
        horizontalLayout_2 = new QHBoxLayout(fraMessageLog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        logLayout = new QVBoxLayout();
        logLayout->setSpacing(6);
        logLayout->setObjectName(QString::fromUtf8("logLayout"));

        horizontalLayout_2->addLayout(logLayout);

        splitter->addWidget(fraMessageLog);

        verticalLayout->addWidget(splitter);

        line = new QFrame(HistoryWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(16777215, 2));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, -1, 3, -1);
        btnClearHistory = new QPushButton(HistoryWindow);
        btnClearHistory->setObjectName(QString::fromUtf8("btnClearHistory"));

        horizontalLayout->addWidget(btnClearHistory);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(HistoryWindow);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(tvMsgList, btnClose);
        QWidget::setTabOrder(btnClose, btnClearHistory);

        retranslateUi(HistoryWindow);
        QObject::connect(btnClose, SIGNAL(clicked()), HistoryWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(HistoryWindow);
    } // setupUi

    void retranslateUi(QWidget *HistoryWindow)
    {
        HistoryWindow->setWindowTitle(QApplication::translate("HistoryWindow", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = tvMsgList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("HistoryWindow", "Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("HistoryWindow", "Name", 0, QApplication::UnicodeUTF8));
        btnClearHistory->setText(QApplication::translate("HistoryWindow", "Clear History", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("HistoryWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HistoryWindow: public Ui_HistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYWINDOW_H

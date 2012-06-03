/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created: Fri Jun 1 10:30:16 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *lvCategories;
    QStackedWidget *stackedWidget;
    QWidget *pageGeneral;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblGeneralPage;
    QGroupBox *grpSystem;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkAutoStart;
    QCheckBox *chkAutoShow;
    QGroupBox *grpSysTray;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkSysTray;
    QCheckBox *chkMinimizeTray;
    QCheckBox *chkSingleClickTray;
    QCheckBox *chkSysTrayMsg;
    QCheckBox *chkAllowSysTrayMin;
    QGroupBox *grpLanguage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblLanguageDesc;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *cboLanguage;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblUpdateLink;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *pageAccount;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblAccountPage;
    QGroupBox *grpPersonal;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblUserNameDesc;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *txtUserName;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblFirstNameDesc;
    QLineEdit *txtFirstName;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *lblLastNameDesc;
    QLineEdit *txtLastName;
    QVBoxLayout *verticalLayout_8;
    QLabel *lblAboutDesc;
    QPlainTextEdit *txtAbout;
    QGroupBox *grpContacts;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblRefreshTimeDesc;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spnRefreshTime;
    QLabel *lblSecondsDesc;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageMessages;
    QVBoxLayout *verticalLayout_14;
    QLabel *lblMessagesPage;
    QGroupBox *grpMsgWindow;
    QVBoxLayout *verticalLayout_12;
    QRadioButton *rdbMessageTop;
    QRadioButton *rdbMessageBottom;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer_30;
    QCheckBox *chkPublicMessagePop;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *chkEmoticon;
    QCheckBox *chkMessageTime;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *chkMessageDate;
    QCheckBox *chkAllowLinks;
    QHBoxLayout *horizontalLayout_28;
    QSpacerItem *horizontalSpacer_26;
    QCheckBox *chkPathToLink;
    QCheckBox *chkTrimMessage;
    QGroupBox *grpMsgFont;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnFont;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnColor;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lblFontSize;
    QSpacerItem *horizontalSpacer_8;
    QComboBox *cboFontSize;
    QSpacerItem *verticalSpacer_4;
    QWidget *pageHistory;
    QVBoxLayout *verticalLayout_18;
    QLabel *lblHistoryPage;
    QGroupBox *grpMsgHistory;
    QVBoxLayout *verticalLayout_15;
    QCheckBox *chkHistory;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btnClearHistory;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *grpHistoryFile;
    QVBoxLayout *verticalLayout_16;
    QRadioButton *rdbSysHistoryPath;
    QRadioButton *rdbCustomHistoryPath;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *txtHistoryPath;
    QPushButton *btnHistoryPath;
    QGroupBox *grpFileHistory;
    QVBoxLayout *verticalLayout_17;
    QCheckBox *chkFileHistory;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnClearFileHistory;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QWidget *pageAlerts;
    QVBoxLayout *verticalLayout_22;
    QLabel *lblAlertsPage;
    QGroupBox *grpAlerts;
    QVBoxLayout *verticalLayout_19;
    QCheckBox *chkAlert;
    QCheckBox *chkNoBusyAlert;
    QCheckBox *chkNoDNDAlert;
    QGroupBox *grpSounds;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *chkSound;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_20;
    QLabel *lblSoundEventsDesc;
    QListWidget *lvSounds;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *txtSoundFile;
    QPushButton *btnPlaySound;
    QPushButton *btnSoundPath;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *btnResetSounds;
    QCheckBox *chkNoBusySound;
    QCheckBox *chkNoDNDSound;
    QSpacerItem *verticalSpacer_6;
    QWidget *pageNetwork;
    QVBoxLayout *verticalLayout_25;
    QLabel *lblNetworkPage;
    QGroupBox *grpConnection;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lblTimeoutDesc;
    QSpacerItem *horizontalSpacer_15;
    QSpinBox *spnTimeout;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lblMaxRetriesDesc;
    QSpacerItem *horizontalSpacer_16;
    QSpinBox *spnMaxRetries;
    QGroupBox *grpBroadcast;
    QVBoxLayout *verticalLayout_36;
    QLabel *lblBroadcastListDesc;
    QHBoxLayout *horizontalLayout_31;
    QListWidget *lvBroadcasts;
    QVBoxLayout *verticalLayout_24;
    QLabel *lblBroadcastDesc;
    QLineEdit *txtBroadcast;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *btnAddBroadcast;
    QSpacerItem *horizontalSpacer_28;
    QHBoxLayout *horizontalLayout_30;
    QPushButton *btnDeleteBroadcast;
    QSpacerItem *horizontalSpacer_29;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lblMulticastDesc;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *txtMulticast;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lblUDPPortDesc;
    QSpacerItem *horizontalSpacer_18;
    QLineEdit *txtUDPPort;
    QHBoxLayout *horizontalLayout_20;
    QLabel *lblTCPPortDesc;
    QSpacerItem *horizontalSpacer_19;
    QLineEdit *txtTCPPort;
    QLabel *lblFinePrint;
    QSpacerItem *verticalSpacer_7;
    QWidget *pageFileTransfer;
    QVBoxLayout *verticalLayout_28;
    QLabel *lblFileTransferPage;
    QGroupBox *grpFileRequest;
    QVBoxLayout *verticalLayout_26;
    QCheckBox *chkAutoFile;
    QCheckBox *chkAutoShowFile;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_20;
    QRadioButton *rdbFileTop;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_21;
    QRadioButton *rdbFileBottom;
    QGroupBox *grpFileFolder;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_23;
    QLineEdit *txtFilePath;
    QPushButton *btnFilePath;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *btnViewFiles;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *verticalSpacer_8;
    QWidget *pageThemes;
    QVBoxLayout *verticalLayout_31;
    QLabel *lblThemePage;
    QGroupBox *grpChatTheme;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_25;
    QComboBox *cboTheme;
    QSpacerItem *horizontalSpacer_23;
    QFrame *fraMessageLog;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *logLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_35;
    QHBoxLayout *horizontalLayout_27;
    QLabel *lblUserListView;
    QSpacerItem *horizontalSpacer_27;
    QComboBox *cboUserListView;
    QCheckBox *chkUserListToolTip;
    QSpacerItem *verticalSpacer_9;
    QWidget *pageHotkeys;
    QVBoxLayout *verticalLayout_34;
    QLabel *lblHotkeysPage;
    QGroupBox *grpMsgHotkeys;
    QVBoxLayout *verticalLayout_33;
    QVBoxLayout *verticalLayout_32;
    QLabel *lblSendModDesc;
    QHBoxLayout *horizontalLayout_26;
    QSpacerItem *horizontalSpacer_24;
    QRadioButton *rdbEnter;
    QRadioButton *rdbCmdEnter;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *verticalSpacer_10;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QPushButton *btnReset;
    QSpacerItem *spacerItem;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->setWindowModality(Qt::WindowModal);
        SettingsDialog->resize(543, 485);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lvCategories = new QListWidget(SettingsDialog);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        new QListWidgetItem(lvCategories);
        lvCategories->setObjectName(QString::fromUtf8("lvCategories"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lvCategories->sizePolicy().hasHeightForWidth());
        lvCategories->setSizePolicy(sizePolicy);
        lvCategories->setMaximumSize(QSize(150, 16777215));
        lvCategories->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(lvCategories);

        stackedWidget = new QStackedWidget(SettingsDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Plain);
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QString::fromUtf8("pageGeneral"));
        verticalLayout_5 = new QVBoxLayout(pageGeneral);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lblGeneralPage = new QLabel(pageGeneral);
        lblGeneralPage->setObjectName(QString::fromUtf8("lblGeneralPage"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblGeneralPage->sizePolicy().hasHeightForWidth());
        lblGeneralPage->setSizePolicy(sizePolicy1);
        lblGeneralPage->setMinimumSize(QSize(0, 31));
        lblGeneralPage->setFrameShape(QFrame::StyledPanel);
        lblGeneralPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(lblGeneralPage);

        grpSystem = new QGroupBox(pageGeneral);
        grpSystem->setObjectName(QString::fromUtf8("grpSystem"));
        verticalLayout_2 = new QVBoxLayout(grpSystem);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chkAutoStart = new QCheckBox(grpSystem);
        chkAutoStart->setObjectName(QString::fromUtf8("chkAutoStart"));

        verticalLayout_2->addWidget(chkAutoStart);

        chkAutoShow = new QCheckBox(grpSystem);
        chkAutoShow->setObjectName(QString::fromUtf8("chkAutoShow"));

        verticalLayout_2->addWidget(chkAutoShow);


        verticalLayout_5->addWidget(grpSystem);

        grpSysTray = new QGroupBox(pageGeneral);
        grpSysTray->setObjectName(QString::fromUtf8("grpSysTray"));
        verticalLayout_3 = new QVBoxLayout(grpSysTray);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        chkSysTray = new QCheckBox(grpSysTray);
        chkSysTray->setObjectName(QString::fromUtf8("chkSysTray"));

        verticalLayout_3->addWidget(chkSysTray);

        chkMinimizeTray = new QCheckBox(grpSysTray);
        chkMinimizeTray->setObjectName(QString::fromUtf8("chkMinimizeTray"));

        verticalLayout_3->addWidget(chkMinimizeTray);

        chkSingleClickTray = new QCheckBox(grpSysTray);
        chkSingleClickTray->setObjectName(QString::fromUtf8("chkSingleClickTray"));

        verticalLayout_3->addWidget(chkSingleClickTray);

        chkSysTrayMsg = new QCheckBox(grpSysTray);
        chkSysTrayMsg->setObjectName(QString::fromUtf8("chkSysTrayMsg"));

        verticalLayout_3->addWidget(chkSysTrayMsg);

        chkAllowSysTrayMin = new QCheckBox(grpSysTray);
        chkAllowSysTrayMin->setObjectName(QString::fromUtf8("chkAllowSysTrayMin"));

        verticalLayout_3->addWidget(chkAllowSysTrayMin);


        verticalLayout_5->addWidget(grpSysTray);

        grpLanguage = new QGroupBox(pageGeneral);
        grpLanguage->setObjectName(QString::fromUtf8("grpLanguage"));
        verticalLayout_4 = new QVBoxLayout(grpLanguage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblLanguageDesc = new QLabel(grpLanguage);
        lblLanguageDesc->setObjectName(QString::fromUtf8("lblLanguageDesc"));

        horizontalLayout_2->addWidget(lblLanguageDesc);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        cboLanguage = new QComboBox(grpLanguage);
        cboLanguage->setObjectName(QString::fromUtf8("cboLanguage"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cboLanguage->sizePolicy().hasHeightForWidth());
        cboLanguage->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(cboLanguage);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblUpdateLink = new QLabel(grpLanguage);
        lblUpdateLink->setObjectName(QString::fromUtf8("lblUpdateLink"));
        lblUpdateLink->setFocusPolicy(Qt::StrongFocus);
        lblUpdateLink->setOpenExternalLinks(true);
        lblUpdateLink->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        horizontalLayout_3->addWidget(lblUpdateLink);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(grpLanguage);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stackedWidget->addWidget(pageGeneral);
        pageAccount = new QWidget();
        pageAccount->setObjectName(QString::fromUtf8("pageAccount"));
        verticalLayout_11 = new QVBoxLayout(pageAccount);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        lblAccountPage = new QLabel(pageAccount);
        lblAccountPage->setObjectName(QString::fromUtf8("lblAccountPage"));
        sizePolicy1.setHeightForWidth(lblAccountPage->sizePolicy().hasHeightForWidth());
        lblAccountPage->setSizePolicy(sizePolicy1);
        lblAccountPage->setMinimumSize(QSize(0, 31));
        lblAccountPage->setFrameShape(QFrame::StyledPanel);
        lblAccountPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(lblAccountPage);

        grpPersonal = new QGroupBox(pageAccount);
        grpPersonal->setObjectName(QString::fromUtf8("grpPersonal"));
        verticalLayout_9 = new QVBoxLayout(grpPersonal);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lblUserNameDesc = new QLabel(grpPersonal);
        lblUserNameDesc->setObjectName(QString::fromUtf8("lblUserNameDesc"));

        horizontalLayout_4->addWidget(lblUserNameDesc);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        txtUserName = new QLineEdit(grpPersonal);
        txtUserName->setObjectName(QString::fromUtf8("txtUserName"));

        horizontalLayout_4->addWidget(txtUserName);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lblFirstNameDesc = new QLabel(grpPersonal);
        lblFirstNameDesc->setObjectName(QString::fromUtf8("lblFirstNameDesc"));

        verticalLayout_6->addWidget(lblFirstNameDesc);

        txtFirstName = new QLineEdit(grpPersonal);
        txtFirstName->setObjectName(QString::fromUtf8("txtFirstName"));

        verticalLayout_6->addWidget(txtFirstName);


        horizontalLayout_5->addLayout(verticalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        lblLastNameDesc = new QLabel(grpPersonal);
        lblLastNameDesc->setObjectName(QString::fromUtf8("lblLastNameDesc"));

        verticalLayout_7->addWidget(lblLastNameDesc);

        txtLastName = new QLineEdit(grpPersonal);
        txtLastName->setObjectName(QString::fromUtf8("txtLastName"));

        verticalLayout_7->addWidget(txtLastName);


        horizontalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        lblAboutDesc = new QLabel(grpPersonal);
        lblAboutDesc->setObjectName(QString::fromUtf8("lblAboutDesc"));

        verticalLayout_8->addWidget(lblAboutDesc);

        txtAbout = new QPlainTextEdit(grpPersonal);
        txtAbout->setObjectName(QString::fromUtf8("txtAbout"));
        sizePolicy2.setHeightForWidth(txtAbout->sizePolicy().hasHeightForWidth());
        txtAbout->setSizePolicy(sizePolicy2);
        txtAbout->setMaximumSize(QSize(16777215, 41));

        verticalLayout_8->addWidget(txtAbout);


        verticalLayout_9->addLayout(verticalLayout_8);


        verticalLayout_11->addWidget(grpPersonal);

        grpContacts = new QGroupBox(pageAccount);
        grpContacts->setObjectName(QString::fromUtf8("grpContacts"));
        verticalLayout_10 = new QVBoxLayout(grpContacts);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lblRefreshTimeDesc = new QLabel(grpContacts);
        lblRefreshTimeDesc->setObjectName(QString::fromUtf8("lblRefreshTimeDesc"));

        horizontalLayout_6->addWidget(lblRefreshTimeDesc);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        spnRefreshTime = new QSpinBox(grpContacts);
        spnRefreshTime->setObjectName(QString::fromUtf8("spnRefreshTime"));
        spnRefreshTime->setMinimum(1);
        spnRefreshTime->setMaximum(600);

        horizontalLayout_6->addWidget(spnRefreshTime);

        lblSecondsDesc = new QLabel(grpContacts);
        lblSecondsDesc->setObjectName(QString::fromUtf8("lblSecondsDesc"));

        horizontalLayout_6->addWidget(lblSecondsDesc);


        verticalLayout_10->addLayout(horizontalLayout_6);


        verticalLayout_11->addWidget(grpContacts);

        verticalSpacer_2 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_2);

        stackedWidget->addWidget(pageAccount);
        pageMessages = new QWidget();
        pageMessages->setObjectName(QString::fromUtf8("pageMessages"));
        verticalLayout_14 = new QVBoxLayout(pageMessages);
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        lblMessagesPage = new QLabel(pageMessages);
        lblMessagesPage->setObjectName(QString::fromUtf8("lblMessagesPage"));
        sizePolicy1.setHeightForWidth(lblMessagesPage->sizePolicy().hasHeightForWidth());
        lblMessagesPage->setSizePolicy(sizePolicy1);
        lblMessagesPage->setMinimumSize(QSize(0, 31));
        lblMessagesPage->setFrameShape(QFrame::StyledPanel);
        lblMessagesPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_14->addWidget(lblMessagesPage);

        grpMsgWindow = new QGroupBox(pageMessages);
        grpMsgWindow->setObjectName(QString::fromUtf8("grpMsgWindow"));
        verticalLayout_12 = new QVBoxLayout(grpMsgWindow);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        rdbMessageTop = new QRadioButton(grpMsgWindow);
        rdbMessageTop->setObjectName(QString::fromUtf8("rdbMessageTop"));

        verticalLayout_12->addWidget(rdbMessageTop);

        rdbMessageBottom = new QRadioButton(grpMsgWindow);
        rdbMessageBottom->setObjectName(QString::fromUtf8("rdbMessageBottom"));

        verticalLayout_12->addWidget(rdbMessageBottom);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalSpacer_30 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_30);

        chkPublicMessagePop = new QCheckBox(grpMsgWindow);
        chkPublicMessagePop->setObjectName(QString::fromUtf8("chkPublicMessagePop"));

        horizontalLayout_32->addWidget(chkPublicMessagePop);


        verticalLayout_12->addLayout(horizontalLayout_32);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_3);

        chkEmoticon = new QCheckBox(grpMsgWindow);
        chkEmoticon->setObjectName(QString::fromUtf8("chkEmoticon"));

        verticalLayout_12->addWidget(chkEmoticon);

        chkMessageTime = new QCheckBox(grpMsgWindow);
        chkMessageTime->setObjectName(QString::fromUtf8("chkMessageTime"));

        verticalLayout_12->addWidget(chkMessageTime);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        chkMessageDate = new QCheckBox(grpMsgWindow);
        chkMessageDate->setObjectName(QString::fromUtf8("chkMessageDate"));

        horizontalLayout_7->addWidget(chkMessageDate);


        verticalLayout_12->addLayout(horizontalLayout_7);

        chkAllowLinks = new QCheckBox(grpMsgWindow);
        chkAllowLinks->setObjectName(QString::fromUtf8("chkAllowLinks"));

        verticalLayout_12->addWidget(chkAllowLinks);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalSpacer_26 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_26);

        chkPathToLink = new QCheckBox(grpMsgWindow);
        chkPathToLink->setObjectName(QString::fromUtf8("chkPathToLink"));

        horizontalLayout_28->addWidget(chkPathToLink);


        verticalLayout_12->addLayout(horizontalLayout_28);

        chkTrimMessage = new QCheckBox(grpMsgWindow);
        chkTrimMessage->setObjectName(QString::fromUtf8("chkTrimMessage"));

        verticalLayout_12->addWidget(chkTrimMessage);


        verticalLayout_14->addWidget(grpMsgWindow);

        grpMsgFont = new QGroupBox(pageMessages);
        grpMsgFont->setObjectName(QString::fromUtf8("grpMsgFont"));
        verticalLayout_13 = new QVBoxLayout(grpMsgFont);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        btnFont = new QPushButton(grpMsgFont);
        btnFont->setObjectName(QString::fromUtf8("btnFont"));

        horizontalLayout_8->addWidget(btnFont);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_13->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        btnColor = new QPushButton(grpMsgFont);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));

        horizontalLayout_9->addWidget(btnColor);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);


        verticalLayout_13->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lblFontSize = new QLabel(grpMsgFont);
        lblFontSize->setObjectName(QString::fromUtf8("lblFontSize"));

        horizontalLayout_10->addWidget(lblFontSize);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        cboFontSize = new QComboBox(grpMsgFont);
        cboFontSize->setObjectName(QString::fromUtf8("cboFontSize"));
        sizePolicy2.setHeightForWidth(cboFontSize->sizePolicy().hasHeightForWidth());
        cboFontSize->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(cboFontSize);


        verticalLayout_13->addLayout(horizontalLayout_10);


        verticalLayout_14->addWidget(grpMsgFont);

        verticalSpacer_4 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_4);

        stackedWidget->addWidget(pageMessages);
        pageHistory = new QWidget();
        pageHistory->setObjectName(QString::fromUtf8("pageHistory"));
        verticalLayout_18 = new QVBoxLayout(pageHistory);
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        lblHistoryPage = new QLabel(pageHistory);
        lblHistoryPage->setObjectName(QString::fromUtf8("lblHistoryPage"));
        sizePolicy1.setHeightForWidth(lblHistoryPage->sizePolicy().hasHeightForWidth());
        lblHistoryPage->setSizePolicy(sizePolicy1);
        lblHistoryPage->setMinimumSize(QSize(0, 31));
        lblHistoryPage->setFrameShape(QFrame::StyledPanel);
        lblHistoryPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_18->addWidget(lblHistoryPage);

        grpMsgHistory = new QGroupBox(pageHistory);
        grpMsgHistory->setObjectName(QString::fromUtf8("grpMsgHistory"));
        verticalLayout_15 = new QVBoxLayout(grpMsgHistory);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        chkHistory = new QCheckBox(grpMsgHistory);
        chkHistory->setObjectName(QString::fromUtf8("chkHistory"));

        verticalLayout_15->addWidget(chkHistory);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        btnClearHistory = new QPushButton(grpMsgHistory);
        btnClearHistory->setObjectName(QString::fromUtf8("btnClearHistory"));

        horizontalLayout_11->addWidget(btnClearHistory);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_15->addLayout(horizontalLayout_11);


        verticalLayout_18->addWidget(grpMsgHistory);

        grpHistoryFile = new QGroupBox(pageHistory);
        grpHistoryFile->setObjectName(QString::fromUtf8("grpHistoryFile"));
        verticalLayout_16 = new QVBoxLayout(grpHistoryFile);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        rdbSysHistoryPath = new QRadioButton(grpHistoryFile);
        rdbSysHistoryPath->setObjectName(QString::fromUtf8("rdbSysHistoryPath"));

        verticalLayout_16->addWidget(rdbSysHistoryPath);

        rdbCustomHistoryPath = new QRadioButton(grpHistoryFile);
        rdbCustomHistoryPath->setObjectName(QString::fromUtf8("rdbCustomHistoryPath"));

        verticalLayout_16->addWidget(rdbCustomHistoryPath);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        txtHistoryPath = new QLineEdit(grpHistoryFile);
        txtHistoryPath->setObjectName(QString::fromUtf8("txtHistoryPath"));
        txtHistoryPath->setReadOnly(true);

        horizontalLayout_12->addWidget(txtHistoryPath);

        btnHistoryPath = new QPushButton(grpHistoryFile);
        btnHistoryPath->setObjectName(QString::fromUtf8("btnHistoryPath"));
        btnHistoryPath->setMaximumSize(QSize(31, 16777215));

        horizontalLayout_12->addWidget(btnHistoryPath);


        verticalLayout_16->addLayout(horizontalLayout_12);


        verticalLayout_18->addWidget(grpHistoryFile);

        grpFileHistory = new QGroupBox(pageHistory);
        grpFileHistory->setObjectName(QString::fromUtf8("grpFileHistory"));
        verticalLayout_17 = new QVBoxLayout(grpFileHistory);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        chkFileHistory = new QCheckBox(grpFileHistory);
        chkFileHistory->setObjectName(QString::fromUtf8("chkFileHistory"));

        verticalLayout_17->addWidget(chkFileHistory);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        btnClearFileHistory = new QPushButton(grpFileHistory);
        btnClearFileHistory->setObjectName(QString::fromUtf8("btnClearFileHistory"));

        horizontalLayout_13->addWidget(btnClearFileHistory);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);


        verticalLayout_17->addLayout(horizontalLayout_13);


        verticalLayout_18->addWidget(grpFileHistory);

        verticalSpacer_5 = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_5);

        stackedWidget->addWidget(pageHistory);
        pageAlerts = new QWidget();
        pageAlerts->setObjectName(QString::fromUtf8("pageAlerts"));
        verticalLayout_22 = new QVBoxLayout(pageAlerts);
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        lblAlertsPage = new QLabel(pageAlerts);
        lblAlertsPage->setObjectName(QString::fromUtf8("lblAlertsPage"));
        sizePolicy1.setHeightForWidth(lblAlertsPage->sizePolicy().hasHeightForWidth());
        lblAlertsPage->setSizePolicy(sizePolicy1);
        lblAlertsPage->setMinimumSize(QSize(0, 31));
        lblAlertsPage->setFrameShape(QFrame::StyledPanel);
        lblAlertsPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_22->addWidget(lblAlertsPage);

        grpAlerts = new QGroupBox(pageAlerts);
        grpAlerts->setObjectName(QString::fromUtf8("grpAlerts"));
        verticalLayout_19 = new QVBoxLayout(grpAlerts);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        chkAlert = new QCheckBox(grpAlerts);
        chkAlert->setObjectName(QString::fromUtf8("chkAlert"));

        verticalLayout_19->addWidget(chkAlert);

        chkNoBusyAlert = new QCheckBox(grpAlerts);
        chkNoBusyAlert->setObjectName(QString::fromUtf8("chkNoBusyAlert"));

        verticalLayout_19->addWidget(chkNoBusyAlert);

        chkNoDNDAlert = new QCheckBox(grpAlerts);
        chkNoDNDAlert->setObjectName(QString::fromUtf8("chkNoDNDAlert"));

        verticalLayout_19->addWidget(chkNoDNDAlert);


        verticalLayout_22->addWidget(grpAlerts);

        grpSounds = new QGroupBox(pageAlerts);
        grpSounds->setObjectName(QString::fromUtf8("grpSounds"));
        verticalLayout_21 = new QVBoxLayout(grpSounds);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        chkSound = new QCheckBox(grpSounds);
        chkSound->setObjectName(QString::fromUtf8("chkSound"));

        verticalLayout_21->addWidget(chkSound);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_14 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        lblSoundEventsDesc = new QLabel(grpSounds);
        lblSoundEventsDesc->setObjectName(QString::fromUtf8("lblSoundEventsDesc"));

        verticalLayout_20->addWidget(lblSoundEventsDesc);

        lvSounds = new QListWidget(grpSounds);
        lvSounds->setObjectName(QString::fromUtf8("lvSounds"));
        sizePolicy2.setHeightForWidth(lvSounds->sizePolicy().hasHeightForWidth());
        lvSounds->setSizePolicy(sizePolicy2);
        lvSounds->setMaximumSize(QSize(16777215, 81));

        verticalLayout_20->addWidget(lvSounds);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        txtSoundFile = new QLineEdit(grpSounds);
        txtSoundFile->setObjectName(QString::fromUtf8("txtSoundFile"));
        txtSoundFile->setReadOnly(true);

        horizontalLayout_14->addWidget(txtSoundFile);

        btnPlaySound = new QPushButton(grpSounds);
        btnPlaySound->setObjectName(QString::fromUtf8("btnPlaySound"));
        btnPlaySound->setEnabled(false);

        horizontalLayout_14->addWidget(btnPlaySound);

        btnSoundPath = new QPushButton(grpSounds);
        btnSoundPath->setObjectName(QString::fromUtf8("btnSoundPath"));
        btnSoundPath->setEnabled(false);
        btnSoundPath->setMaximumSize(QSize(31, 16777215));

        horizontalLayout_14->addWidget(btnSoundPath);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_31);

        btnResetSounds = new QPushButton(grpSounds);
        btnResetSounds->setObjectName(QString::fromUtf8("btnResetSounds"));

        horizontalLayout_14->addWidget(btnResetSounds);


        verticalLayout_20->addLayout(horizontalLayout_14);


        horizontalLayout_15->addLayout(verticalLayout_20);


        verticalLayout_21->addLayout(horizontalLayout_15);

        chkNoBusySound = new QCheckBox(grpSounds);
        chkNoBusySound->setObjectName(QString::fromUtf8("chkNoBusySound"));

        verticalLayout_21->addWidget(chkNoBusySound);

        chkNoDNDSound = new QCheckBox(grpSounds);
        chkNoDNDSound->setObjectName(QString::fromUtf8("chkNoDNDSound"));

        verticalLayout_21->addWidget(chkNoDNDSound);


        verticalLayout_22->addWidget(grpSounds);

        verticalSpacer_6 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_6);

        stackedWidget->addWidget(pageAlerts);
        pageNetwork = new QWidget();
        pageNetwork->setObjectName(QString::fromUtf8("pageNetwork"));
        verticalLayout_25 = new QVBoxLayout(pageNetwork);
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        lblNetworkPage = new QLabel(pageNetwork);
        lblNetworkPage->setObjectName(QString::fromUtf8("lblNetworkPage"));
        sizePolicy1.setHeightForWidth(lblNetworkPage->sizePolicy().hasHeightForWidth());
        lblNetworkPage->setSizePolicy(sizePolicy1);
        lblNetworkPage->setMinimumSize(QSize(0, 31));
        lblNetworkPage->setFrameShape(QFrame::StyledPanel);
        lblNetworkPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_25->addWidget(lblNetworkPage);

        grpConnection = new QGroupBox(pageNetwork);
        grpConnection->setObjectName(QString::fromUtf8("grpConnection"));
        verticalLayout_23 = new QVBoxLayout(grpConnection);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        lblTimeoutDesc = new QLabel(grpConnection);
        lblTimeoutDesc->setObjectName(QString::fromUtf8("lblTimeoutDesc"));

        horizontalLayout_16->addWidget(lblTimeoutDesc);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        spnTimeout = new QSpinBox(grpConnection);
        spnTimeout->setObjectName(QString::fromUtf8("spnTimeout"));
        spnTimeout->setMinimum(5);
        spnTimeout->setMaximum(60);

        horizontalLayout_16->addWidget(spnTimeout);


        verticalLayout_23->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        lblMaxRetriesDesc = new QLabel(grpConnection);
        lblMaxRetriesDesc->setObjectName(QString::fromUtf8("lblMaxRetriesDesc"));

        horizontalLayout_17->addWidget(lblMaxRetriesDesc);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        spnMaxRetries = new QSpinBox(grpConnection);
        spnMaxRetries->setObjectName(QString::fromUtf8("spnMaxRetries"));
        spnMaxRetries->setMinimum(0);
        spnMaxRetries->setMaximum(9);

        horizontalLayout_17->addWidget(spnMaxRetries);


        verticalLayout_23->addLayout(horizontalLayout_17);


        verticalLayout_25->addWidget(grpConnection);

        grpBroadcast = new QGroupBox(pageNetwork);
        grpBroadcast->setObjectName(QString::fromUtf8("grpBroadcast"));
        verticalLayout_36 = new QVBoxLayout(grpBroadcast);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        lblBroadcastListDesc = new QLabel(grpBroadcast);
        lblBroadcastListDesc->setObjectName(QString::fromUtf8("lblBroadcastListDesc"));

        verticalLayout_36->addWidget(lblBroadcastListDesc);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        lvBroadcasts = new QListWidget(grpBroadcast);
        lvBroadcasts->setObjectName(QString::fromUtf8("lvBroadcasts"));

        horizontalLayout_31->addWidget(lvBroadcasts);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        lblBroadcastDesc = new QLabel(grpBroadcast);
        lblBroadcastDesc->setObjectName(QString::fromUtf8("lblBroadcastDesc"));

        verticalLayout_24->addWidget(lblBroadcastDesc);

        txtBroadcast = new QLineEdit(grpBroadcast);
        txtBroadcast->setObjectName(QString::fromUtf8("txtBroadcast"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtBroadcast->sizePolicy().hasHeightForWidth());
        txtBroadcast->setSizePolicy(sizePolicy3);
        txtBroadcast->setMinimumSize(QSize(130, 0));
        txtBroadcast->setMaximumSize(QSize(130, 16777215));
        txtBroadcast->setInputMask(QString::fromUtf8("000.000.000.000;_"));

        verticalLayout_24->addWidget(txtBroadcast);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        btnAddBroadcast = new QPushButton(grpBroadcast);
        btnAddBroadcast->setObjectName(QString::fromUtf8("btnAddBroadcast"));
        btnAddBroadcast->setEnabled(false);

        horizontalLayout_29->addWidget(btnAddBroadcast);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_28);


        verticalLayout_24->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        btnDeleteBroadcast = new QPushButton(grpBroadcast);
        btnDeleteBroadcast->setObjectName(QString::fromUtf8("btnDeleteBroadcast"));
        btnDeleteBroadcast->setEnabled(false);

        horizontalLayout_30->addWidget(btnDeleteBroadcast);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_29);


        verticalLayout_24->addLayout(horizontalLayout_30);


        horizontalLayout_31->addLayout(verticalLayout_24);


        verticalLayout_36->addLayout(horizontalLayout_31);


        verticalLayout_25->addWidget(grpBroadcast);

        groupBox_2 = new QGroupBox(pageNetwork);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_38 = new QVBoxLayout(groupBox_2);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        lblMulticastDesc = new QLabel(groupBox_2);
        lblMulticastDesc->setObjectName(QString::fromUtf8("lblMulticastDesc"));

        horizontalLayout_18->addWidget(lblMulticastDesc);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_17);

        txtMulticast = new QLineEdit(groupBox_2);
        txtMulticast->setObjectName(QString::fromUtf8("txtMulticast"));
        txtMulticast->setMinimumSize(QSize(130, 0));
        txtMulticast->setMaximumSize(QSize(130, 16777215));
        txtMulticast->setInputMask(QString::fromUtf8("000.000.000.000;_"));

        horizontalLayout_18->addWidget(txtMulticast);


        verticalLayout_38->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        lblUDPPortDesc = new QLabel(groupBox_2);
        lblUDPPortDesc->setObjectName(QString::fromUtf8("lblUDPPortDesc"));

        horizontalLayout_19->addWidget(lblUDPPortDesc);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_18);

        txtUDPPort = new QLineEdit(groupBox_2);
        txtUDPPort->setObjectName(QString::fromUtf8("txtUDPPort"));
        sizePolicy3.setHeightForWidth(txtUDPPort->sizePolicy().hasHeightForWidth());
        txtUDPPort->setSizePolicy(sizePolicy3);
        txtUDPPort->setMaximumSize(QSize(80, 16777215));
        txtUDPPort->setInputMask(QString::fromUtf8("00000; "));

        horizontalLayout_19->addWidget(txtUDPPort);


        verticalLayout_38->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        lblTCPPortDesc = new QLabel(groupBox_2);
        lblTCPPortDesc->setObjectName(QString::fromUtf8("lblTCPPortDesc"));

        horizontalLayout_20->addWidget(lblTCPPortDesc);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_19);

        txtTCPPort = new QLineEdit(groupBox_2);
        txtTCPPort->setObjectName(QString::fromUtf8("txtTCPPort"));
        sizePolicy3.setHeightForWidth(txtTCPPort->sizePolicy().hasHeightForWidth());
        txtTCPPort->setSizePolicy(sizePolicy3);
        txtTCPPort->setMaximumSize(QSize(80, 16777215));
        txtTCPPort->setInputMask(QString::fromUtf8("00000; "));

        horizontalLayout_20->addWidget(txtTCPPort);


        verticalLayout_38->addLayout(horizontalLayout_20);


        verticalLayout_25->addWidget(groupBox_2);

        lblFinePrint = new QLabel(pageNetwork);
        lblFinePrint->setObjectName(QString::fromUtf8("lblFinePrint"));

        verticalLayout_25->addWidget(lblFinePrint);

        verticalSpacer_7 = new QSpacerItem(20, 132, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(verticalSpacer_7);

        stackedWidget->addWidget(pageNetwork);
        pageFileTransfer = new QWidget();
        pageFileTransfer->setObjectName(QString::fromUtf8("pageFileTransfer"));
        verticalLayout_28 = new QVBoxLayout(pageFileTransfer);
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        lblFileTransferPage = new QLabel(pageFileTransfer);
        lblFileTransferPage->setObjectName(QString::fromUtf8("lblFileTransferPage"));
        sizePolicy1.setHeightForWidth(lblFileTransferPage->sizePolicy().hasHeightForWidth());
        lblFileTransferPage->setSizePolicy(sizePolicy1);
        lblFileTransferPage->setMinimumSize(QSize(0, 31));
        lblFileTransferPage->setFrameShape(QFrame::StyledPanel);
        lblFileTransferPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_28->addWidget(lblFileTransferPage);

        grpFileRequest = new QGroupBox(pageFileTransfer);
        grpFileRequest->setObjectName(QString::fromUtf8("grpFileRequest"));
        verticalLayout_26 = new QVBoxLayout(grpFileRequest);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        chkAutoFile = new QCheckBox(grpFileRequest);
        chkAutoFile->setObjectName(QString::fromUtf8("chkAutoFile"));

        verticalLayout_26->addWidget(chkAutoFile);

        chkAutoShowFile = new QCheckBox(grpFileRequest);
        chkAutoShowFile->setObjectName(QString::fromUtf8("chkAutoShowFile"));

        verticalLayout_26->addWidget(chkAutoShowFile);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalSpacer_20 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_20);

        rdbFileTop = new QRadioButton(grpFileRequest);
        rdbFileTop->setObjectName(QString::fromUtf8("rdbFileTop"));

        horizontalLayout_21->addWidget(rdbFileTop);


        verticalLayout_26->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalSpacer_21 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_21);

        rdbFileBottom = new QRadioButton(grpFileRequest);
        rdbFileBottom->setObjectName(QString::fromUtf8("rdbFileBottom"));

        horizontalLayout_22->addWidget(rdbFileBottom);


        verticalLayout_26->addLayout(horizontalLayout_22);


        verticalLayout_28->addWidget(grpFileRequest);

        grpFileFolder = new QGroupBox(pageFileTransfer);
        grpFileFolder->setObjectName(QString::fromUtf8("grpFileFolder"));
        verticalLayout_27 = new QVBoxLayout(grpFileFolder);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        txtFilePath = new QLineEdit(grpFileFolder);
        txtFilePath->setObjectName(QString::fromUtf8("txtFilePath"));
        txtFilePath->setReadOnly(true);

        horizontalLayout_23->addWidget(txtFilePath);

        btnFilePath = new QPushButton(grpFileFolder);
        btnFilePath->setObjectName(QString::fromUtf8("btnFilePath"));
        btnFilePath->setMaximumSize(QSize(31, 16777215));

        horizontalLayout_23->addWidget(btnFilePath);


        verticalLayout_27->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        btnViewFiles = new QPushButton(grpFileFolder);
        btnViewFiles->setObjectName(QString::fromUtf8("btnViewFiles"));

        horizontalLayout_24->addWidget(btnViewFiles);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_22);


        verticalLayout_27->addLayout(horizontalLayout_24);


        verticalLayout_28->addWidget(grpFileFolder);

        verticalSpacer_8 = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_8);

        stackedWidget->addWidget(pageFileTransfer);
        pageThemes = new QWidget();
        pageThemes->setObjectName(QString::fromUtf8("pageThemes"));
        verticalLayout_31 = new QVBoxLayout(pageThemes);
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        lblThemePage = new QLabel(pageThemes);
        lblThemePage->setObjectName(QString::fromUtf8("lblThemePage"));
        lblThemePage->setMinimumSize(QSize(0, 31));
        lblThemePage->setMaximumSize(QSize(16777215, 31));
        lblThemePage->setFrameShape(QFrame::StyledPanel);
        lblThemePage->setFrameShadow(QFrame::Sunken);

        verticalLayout_31->addWidget(lblThemePage);

        grpChatTheme = new QGroupBox(pageThemes);
        grpChatTheme->setObjectName(QString::fromUtf8("grpChatTheme"));
        verticalLayout_30 = new QVBoxLayout(grpChatTheme);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        cboTheme = new QComboBox(grpChatTheme);
        cboTheme->setObjectName(QString::fromUtf8("cboTheme"));
        sizePolicy2.setHeightForWidth(cboTheme->sizePolicy().hasHeightForWidth());
        cboTheme->setSizePolicy(sizePolicy2);

        horizontalLayout_25->addWidget(cboTheme);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_23);


        verticalLayout_30->addLayout(horizontalLayout_25);

        fraMessageLog = new QFrame(grpChatTheme);
        fraMessageLog->setObjectName(QString::fromUtf8("fraMessageLog"));
        fraMessageLog->setMinimumSize(QSize(341, 200));
        fraMessageLog->setFrameShape(QFrame::Panel);
        fraMessageLog->setFrameShadow(QFrame::Sunken);
        verticalLayout_29 = new QVBoxLayout(fraMessageLog);
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        logLayout = new QHBoxLayout();
        logLayout->setObjectName(QString::fromUtf8("logLayout"));

        verticalLayout_29->addLayout(logLayout);


        verticalLayout_30->addWidget(fraMessageLog);


        verticalLayout_31->addWidget(grpChatTheme);

        groupBox = new QGroupBox(pageThemes);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_35 = new QVBoxLayout(groupBox);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        lblUserListView = new QLabel(groupBox);
        lblUserListView->setObjectName(QString::fromUtf8("lblUserListView"));

        horizontalLayout_27->addWidget(lblUserListView);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_27);

        cboUserListView = new QComboBox(groupBox);
        cboUserListView->setObjectName(QString::fromUtf8("cboUserListView"));

        horizontalLayout_27->addWidget(cboUserListView);


        verticalLayout_35->addLayout(horizontalLayout_27);

        chkUserListToolTip = new QCheckBox(groupBox);
        chkUserListToolTip->setObjectName(QString::fromUtf8("chkUserListToolTip"));

        verticalLayout_35->addWidget(chkUserListToolTip);


        verticalLayout_31->addWidget(groupBox);

        verticalSpacer_9 = new QSpacerItem(20, 313, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_31->addItem(verticalSpacer_9);

        stackedWidget->addWidget(pageThemes);
        pageHotkeys = new QWidget();
        pageHotkeys->setObjectName(QString::fromUtf8("pageHotkeys"));
        verticalLayout_34 = new QVBoxLayout(pageHotkeys);
        verticalLayout_34->setContentsMargins(0, 0, 0, 0);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        lblHotkeysPage = new QLabel(pageHotkeys);
        lblHotkeysPage->setObjectName(QString::fromUtf8("lblHotkeysPage"));
        lblHotkeysPage->setMinimumSize(QSize(0, 32));
        lblHotkeysPage->setMaximumSize(QSize(16777215, 32));
        lblHotkeysPage->setFrameShape(QFrame::StyledPanel);
        lblHotkeysPage->setFrameShadow(QFrame::Sunken);

        verticalLayout_34->addWidget(lblHotkeysPage);

        grpMsgHotkeys = new QGroupBox(pageHotkeys);
        grpMsgHotkeys->setObjectName(QString::fromUtf8("grpMsgHotkeys"));
        verticalLayout_33 = new QVBoxLayout(grpMsgHotkeys);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(3);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        lblSendModDesc = new QLabel(grpMsgHotkeys);
        lblSendModDesc->setObjectName(QString::fromUtf8("lblSendModDesc"));

        verticalLayout_32->addWidget(lblSendModDesc);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalSpacer_24 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_24);

        rdbEnter = new QRadioButton(grpMsgHotkeys);
        rdbEnter->setObjectName(QString::fromUtf8("rdbEnter"));

        horizontalLayout_26->addWidget(rdbEnter);

        rdbCmdEnter = new QRadioButton(grpMsgHotkeys);
        rdbCmdEnter->setObjectName(QString::fromUtf8("rdbCmdEnter"));

        horizontalLayout_26->addWidget(rdbCmdEnter);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_25);


        verticalLayout_32->addLayout(horizontalLayout_26);


        verticalLayout_33->addLayout(verticalLayout_32);


        verticalLayout_34->addWidget(grpMsgHotkeys);

        verticalSpacer_10 = new QSpacerItem(20, 233, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_34->addItem(verticalSpacer_10);

        stackedWidget->addWidget(pageHotkeys);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(SettingsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 6));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnReset = new QPushButton(SettingsDialog);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        hboxLayout->addWidget(btnReset);

        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnOK = new QPushButton(SettingsDialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setDefault(true);

        hboxLayout->addWidget(btnOK);

        btnCancel = new QPushButton(SettingsDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        hboxLayout->addWidget(btnCancel);


        verticalLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(lvCategories, chkAutoStart);
        QWidget::setTabOrder(chkAutoStart, chkAutoShow);
        QWidget::setTabOrder(chkAutoShow, chkSysTray);
        QWidget::setTabOrder(chkSysTray, chkMinimizeTray);
        QWidget::setTabOrder(chkMinimizeTray, chkSingleClickTray);
        QWidget::setTabOrder(chkSingleClickTray, chkSysTrayMsg);
        QWidget::setTabOrder(chkSysTrayMsg, chkAllowSysTrayMin);
        QWidget::setTabOrder(chkAllowSysTrayMin, cboLanguage);
        QWidget::setTabOrder(cboLanguage, lblUpdateLink);
        QWidget::setTabOrder(lblUpdateLink, txtUserName);
        QWidget::setTabOrder(txtUserName, txtFirstName);
        QWidget::setTabOrder(txtFirstName, txtLastName);
        QWidget::setTabOrder(txtLastName, txtAbout);
        QWidget::setTabOrder(txtAbout, spnRefreshTime);
        QWidget::setTabOrder(spnRefreshTime, rdbMessageTop);
        QWidget::setTabOrder(rdbMessageTop, rdbMessageBottom);
        QWidget::setTabOrder(rdbMessageBottom, chkPublicMessagePop);
        QWidget::setTabOrder(chkPublicMessagePop, chkEmoticon);
        QWidget::setTabOrder(chkEmoticon, chkMessageTime);
        QWidget::setTabOrder(chkMessageTime, chkMessageDate);
        QWidget::setTabOrder(chkMessageDate, chkAllowLinks);
        QWidget::setTabOrder(chkAllowLinks, chkPathToLink);
        QWidget::setTabOrder(chkPathToLink, chkTrimMessage);
        QWidget::setTabOrder(chkTrimMessage, btnFont);
        QWidget::setTabOrder(btnFont, btnColor);
        QWidget::setTabOrder(btnColor, cboFontSize);
        QWidget::setTabOrder(cboFontSize, chkHistory);
        QWidget::setTabOrder(chkHistory, btnClearHistory);
        QWidget::setTabOrder(btnClearHistory, rdbSysHistoryPath);
        QWidget::setTabOrder(rdbSysHistoryPath, rdbCustomHistoryPath);
        QWidget::setTabOrder(rdbCustomHistoryPath, txtHistoryPath);
        QWidget::setTabOrder(txtHistoryPath, btnHistoryPath);
        QWidget::setTabOrder(btnHistoryPath, chkFileHistory);
        QWidget::setTabOrder(chkFileHistory, btnClearFileHistory);
        QWidget::setTabOrder(btnClearFileHistory, chkAlert);
        QWidget::setTabOrder(chkAlert, chkNoBusyAlert);
        QWidget::setTabOrder(chkNoBusyAlert, chkNoDNDAlert);
        QWidget::setTabOrder(chkNoDNDAlert, chkSound);
        QWidget::setTabOrder(chkSound, lvSounds);
        QWidget::setTabOrder(lvSounds, txtSoundFile);
        QWidget::setTabOrder(txtSoundFile, btnPlaySound);
        QWidget::setTabOrder(btnPlaySound, btnSoundPath);
        QWidget::setTabOrder(btnSoundPath, btnResetSounds);
        QWidget::setTabOrder(btnResetSounds, chkNoBusySound);
        QWidget::setTabOrder(chkNoBusySound, chkNoDNDSound);
        QWidget::setTabOrder(chkNoDNDSound, spnTimeout);
        QWidget::setTabOrder(spnTimeout, spnMaxRetries);
        QWidget::setTabOrder(spnMaxRetries, lvBroadcasts);
        QWidget::setTabOrder(lvBroadcasts, txtBroadcast);
        QWidget::setTabOrder(txtBroadcast, btnAddBroadcast);
        QWidget::setTabOrder(btnAddBroadcast, btnDeleteBroadcast);
        QWidget::setTabOrder(btnDeleteBroadcast, txtMulticast);
        QWidget::setTabOrder(txtMulticast, txtUDPPort);
        QWidget::setTabOrder(txtUDPPort, txtTCPPort);
        QWidget::setTabOrder(txtTCPPort, chkAutoFile);
        QWidget::setTabOrder(chkAutoFile, chkAutoShowFile);
        QWidget::setTabOrder(chkAutoShowFile, rdbFileTop);
        QWidget::setTabOrder(rdbFileTop, rdbFileBottom);
        QWidget::setTabOrder(rdbFileBottom, txtFilePath);
        QWidget::setTabOrder(txtFilePath, btnFilePath);
        QWidget::setTabOrder(btnFilePath, btnViewFiles);
        QWidget::setTabOrder(btnViewFiles, cboTheme);
        QWidget::setTabOrder(cboTheme, cboUserListView);
        QWidget::setTabOrder(cboUserListView, chkUserListToolTip);
        QWidget::setTabOrder(chkUserListToolTip, rdbEnter);
        QWidget::setTabOrder(rdbEnter, rdbCmdEnter);
        QWidget::setTabOrder(rdbCmdEnter, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnReset);

        retranslateUi(SettingsDialog);
        QObject::connect(btnOK, SIGNAL(clicked()), SettingsDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), SettingsDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Dialog", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = lvCategories->isSortingEnabled();
        lvCategories->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lvCategories->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("SettingsDialog", "General", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = lvCategories->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("SettingsDialog", "Account", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = lvCategories->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("SettingsDialog", "Messages", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = lvCategories->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("SettingsDialog", "History", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = lvCategories->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("SettingsDialog", "Alerts", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = lvCategories->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("SettingsDialog", "Network", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = lvCategories->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("SettingsDialog", "File Transfer", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = lvCategories->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("SettingsDialog", "Appearance", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem8 = lvCategories->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("SettingsDialog", "Hotkeys", 0, QApplication::UnicodeUTF8));
        lvCategories->setSortingEnabled(__sortingEnabled);

        lblGeneralPage->setText(QApplication::translate("SettingsDialog", "General", 0, QApplication::UnicodeUTF8));
        grpSystem->setTitle(QApplication::translate("SettingsDialog", "System", 0, QApplication::UnicodeUTF8));
        chkAutoStart->setText(QApplication::translate("SettingsDialog", "Start %1 on system startup", 0, QApplication::UnicodeUTF8));
        chkAutoShow->setText(QApplication::translate("SettingsDialog", "Show main window when %1 starts", 0, QApplication::UnicodeUTF8));
        grpSysTray->setTitle(QApplication::translate("SettingsDialog", "System Tray", 0, QApplication::UnicodeUTF8));
        chkSysTray->setText(QApplication::translate("SettingsDialog", "Show system tray icon", 0, QApplication::UnicodeUTF8));
        chkMinimizeTray->setText(QApplication::translate("SettingsDialog", "Minimize main window to system tray", 0, QApplication::UnicodeUTF8));
        chkSingleClickTray->setText(QApplication::translate("SettingsDialog", "Single click on tray icon to open", 0, QApplication::UnicodeUTF8));
        chkSysTrayMsg->setText(QApplication::translate("SettingsDialog", "Show balloon notifications in tray", 0, QApplication::UnicodeUTF8));
        chkAllowSysTrayMin->setText(QApplication::translate("SettingsDialog", "Minimize main window using tray icon", 0, QApplication::UnicodeUTF8));
        grpLanguage->setTitle(QApplication::translate("SettingsDialog", "Language", 0, QApplication::UnicodeUTF8));
        lblLanguageDesc->setText(QApplication::translate("SettingsDialog", "Select language:", 0, QApplication::UnicodeUTF8));
        lblUpdateLink->setText(QString());
        lblAccountPage->setText(QApplication::translate("SettingsDialog", "Account", 0, QApplication::UnicodeUTF8));
        grpPersonal->setTitle(QApplication::translate("SettingsDialog", "Personal", 0, QApplication::UnicodeUTF8));
        lblUserNameDesc->setText(QApplication::translate("SettingsDialog", "User name as seen by contacts:", 0, QApplication::UnicodeUTF8));
        lblFirstNameDesc->setText(QApplication::translate("SettingsDialog", "First Name:", 0, QApplication::UnicodeUTF8));
        lblLastNameDesc->setText(QApplication::translate("SettingsDialog", "Last Name:", 0, QApplication::UnicodeUTF8));
        lblAboutDesc->setText(QApplication::translate("SettingsDialog", "About:", 0, QApplication::UnicodeUTF8));
        grpContacts->setTitle(QApplication::translate("SettingsDialog", "Contacts", 0, QApplication::UnicodeUTF8));
        lblRefreshTimeDesc->setText(QApplication::translate("SettingsDialog", "Refresh contacts list every", 0, QApplication::UnicodeUTF8));
        lblSecondsDesc->setText(QApplication::translate("SettingsDialog", "seconds", 0, QApplication::UnicodeUTF8));
        lblMessagesPage->setText(QApplication::translate("SettingsDialog", "Messages", 0, QApplication::UnicodeUTF8));
        grpMsgWindow->setTitle(QApplication::translate("SettingsDialog", "Message Window", 0, QApplication::UnicodeUTF8));
        rdbMessageTop->setText(QApplication::translate("SettingsDialog", "Set incoming messages foreground", 0, QApplication::UnicodeUTF8));
        rdbMessageBottom->setText(QApplication::translate("SettingsDialog", "Minimize incoming messages to taskbar", 0, QApplication::UnicodeUTF8));
        chkPublicMessagePop->setText(QApplication::translate("SettingsDialog", "Apply to public messages", 0, QApplication::UnicodeUTF8));
        chkEmoticon->setText(QApplication::translate("SettingsDialog", "Show emoticons in instant messages", 0, QApplication::UnicodeUTF8));
        chkMessageTime->setText(QApplication::translate("SettingsDialog", "Add time stamp to instant messages", 0, QApplication::UnicodeUTF8));
        chkMessageDate->setText(QApplication::translate("SettingsDialog", "Show date in time stamp", 0, QApplication::UnicodeUTF8));
        chkAllowLinks->setText(QApplication::translate("SettingsDialog", "Allow hyperlinks in instant messages", 0, QApplication::UnicodeUTF8));
        chkPathToLink->setText(QApplication::translate("SettingsDialog", "Convert network paths to links", 0, QApplication::UnicodeUTF8));
        chkTrimMessage->setText(QApplication::translate("SettingsDialog", "Remove whitespace from start and end of messages", 0, QApplication::UnicodeUTF8));
        grpMsgFont->setTitle(QApplication::translate("SettingsDialog", "Message Font", 0, QApplication::UnicodeUTF8));
        btnFont->setText(QApplication::translate("SettingsDialog", "Change Font...", 0, QApplication::UnicodeUTF8));
        btnColor->setText(QApplication::translate("SettingsDialog", "Change Color...", 0, QApplication::UnicodeUTF8));
        lblFontSize->setText(QApplication::translate("SettingsDialog", "Incoming message text size:", 0, QApplication::UnicodeUTF8));
        lblHistoryPage->setText(QApplication::translate("SettingsDialog", "History", 0, QApplication::UnicodeUTF8));
        grpMsgHistory->setTitle(QApplication::translate("SettingsDialog", "Message History", 0, QApplication::UnicodeUTF8));
        chkHistory->setText(QApplication::translate("SettingsDialog", "Keep a history of conversations", 0, QApplication::UnicodeUTF8));
        btnClearHistory->setText(QApplication::translate("SettingsDialog", "Clear Message History", 0, QApplication::UnicodeUTF8));
        grpHistoryFile->setTitle(QApplication::translate("SettingsDialog", "History File Location", 0, QApplication::UnicodeUTF8));
        rdbSysHistoryPath->setText(QApplication::translate("SettingsDialog", "System default location", 0, QApplication::UnicodeUTF8));
        rdbCustomHistoryPath->setText(QApplication::translate("SettingsDialog", "Custom location", 0, QApplication::UnicodeUTF8));
        btnHistoryPath->setText(QApplication::translate("SettingsDialog", "...", 0, QApplication::UnicodeUTF8));
        grpFileHistory->setTitle(QApplication::translate("SettingsDialog", "File Transfer History", 0, QApplication::UnicodeUTF8));
        chkFileHistory->setText(QApplication::translate("SettingsDialog", "Keep a history of file transfers", 0, QApplication::UnicodeUTF8));
        btnClearFileHistory->setText(QApplication::translate("SettingsDialog", "Clear Transfer History", 0, QApplication::UnicodeUTF8));
        lblAlertsPage->setText(QApplication::translate("SettingsDialog", "Alerts", 0, QApplication::UnicodeUTF8));
        grpAlerts->setTitle(QApplication::translate("SettingsDialog", "Status Alerts", 0, QApplication::UnicodeUTF8));
        chkAlert->setText(QApplication::translate("SettingsDialog", "Display status alerts", 0, QApplication::UnicodeUTF8));
        chkNoBusyAlert->setText(QApplication::translate("SettingsDialog", "Suspend alerts when my status is Busy", 0, QApplication::UnicodeUTF8));
        chkNoDNDAlert->setText(QApplication::translate("SettingsDialog", "Suspend alerts when my status is Do Not Disturb", 0, QApplication::UnicodeUTF8));
        grpSounds->setTitle(QApplication::translate("SettingsDialog", "Sounds", 0, QApplication::UnicodeUTF8));
        chkSound->setText(QApplication::translate("SettingsDialog", "Provide feedback with sounds", 0, QApplication::UnicodeUTF8));
        lblSoundEventsDesc->setText(QApplication::translate("SettingsDialog", "Play sounds for these events:", 0, QApplication::UnicodeUTF8));
        btnPlaySound->setText(QString());
        btnSoundPath->setText(QApplication::translate("SettingsDialog", "...", 0, QApplication::UnicodeUTF8));
        btnResetSounds->setText(QApplication::translate("SettingsDialog", "Reset All", 0, QApplication::UnicodeUTF8));
        chkNoBusySound->setText(QApplication::translate("SettingsDialog", "Suspend sounds when my status is Busy", 0, QApplication::UnicodeUTF8));
        chkNoDNDSound->setText(QApplication::translate("SettingsDialog", "Suspend sound when my status is Do Not Disturb", 0, QApplication::UnicodeUTF8));
        lblNetworkPage->setText(QApplication::translate("SettingsDialog", "Network", 0, QApplication::UnicodeUTF8));
        grpConnection->setTitle(QApplication::translate("SettingsDialog", "Connection", 0, QApplication::UnicodeUTF8));
        lblTimeoutDesc->setText(QApplication::translate("SettingsDialog", "Connection timeout (seconds):", 0, QApplication::UnicodeUTF8));
        lblMaxRetriesDesc->setText(QApplication::translate("SettingsDialog", "Maximum number of retries:", 0, QApplication::UnicodeUTF8));
        grpBroadcast->setTitle(QApplication::translate("SettingsDialog", "Broadcast", 0, QApplication::UnicodeUTF8));
        lblBroadcastListDesc->setText(QApplication::translate("SettingsDialog", "Broadcast list:", 0, QApplication::UnicodeUTF8));
        lblBroadcastDesc->setText(QApplication::translate("SettingsDialog", "Broadcast address:", 0, QApplication::UnicodeUTF8));
        btnAddBroadcast->setText(QApplication::translate("SettingsDialog", "<- Add", 0, QApplication::UnicodeUTF8));
        btnDeleteBroadcast->setText(QApplication::translate("SettingsDialog", "Delete", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SettingsDialog", "Advanced", 0, QApplication::UnicodeUTF8));
        lblMulticastDesc->setText(QApplication::translate("SettingsDialog", "Multicast address:", 0, QApplication::UnicodeUTF8));
        lblUDPPortDesc->setText(QApplication::translate("SettingsDialog", "UDP Port*:", 0, QApplication::UnicodeUTF8));
        lblTCPPortDesc->setText(QApplication::translate("SettingsDialog", "TCP Port*:", 0, QApplication::UnicodeUTF8));
        lblFinePrint->setText(QApplication::translate("SettingsDialog", "* Takes effect after you restart %1.", 0, QApplication::UnicodeUTF8));
        lblFileTransferPage->setText(QApplication::translate("SettingsDialog", "File Transfer", 0, QApplication::UnicodeUTF8));
        grpFileRequest->setTitle(QApplication::translate("SettingsDialog", "Incoming File Request", 0, QApplication::UnicodeUTF8));
        chkAutoFile->setText(QApplication::translate("SettingsDialog", "Accept and start receiving files automatically", 0, QApplication::UnicodeUTF8));
        chkAutoShowFile->setText(QApplication::translate("SettingsDialog", "Show File Transfer window when sending or receiving files", 0, QApplication::UnicodeUTF8));
        rdbFileTop->setText(QApplication::translate("SettingsDialog", "Bring window to foreground", 0, QApplication::UnicodeUTF8));
        rdbFileBottom->setText(QApplication::translate("SettingsDialog", "Minimize window to taskbar", 0, QApplication::UnicodeUTF8));
        grpFileFolder->setTitle(QApplication::translate("SettingsDialog", "Store Received Files in this Folder", 0, QApplication::UnicodeUTF8));
        btnFilePath->setText(QApplication::translate("SettingsDialog", "...", 0, QApplication::UnicodeUTF8));
        btnViewFiles->setText(QApplication::translate("SettingsDialog", "View Files", 0, QApplication::UnicodeUTF8));
        lblThemePage->setText(QApplication::translate("SettingsDialog", "Appearance", 0, QApplication::UnicodeUTF8));
        grpChatTheme->setTitle(QApplication::translate("SettingsDialog", "Chat Theme", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SettingsDialog", "Contacts List", 0, QApplication::UnicodeUTF8));
        lblUserListView->setText(QApplication::translate("SettingsDialog", "Contacts list view:", 0, QApplication::UnicodeUTF8));
        chkUserListToolTip->setText(QApplication::translate("SettingsDialog", "Show status as tooltip", 0, QApplication::UnicodeUTF8));
        lblHotkeysPage->setText(QApplication::translate("SettingsDialog", "Hotkeys", 0, QApplication::UnicodeUTF8));
        grpMsgHotkeys->setTitle(QApplication::translate("SettingsDialog", "Messages", 0, QApplication::UnicodeUTF8));
        lblSendModDesc->setText(QApplication::translate("SettingsDialog", "Send messages using:", 0, QApplication::UnicodeUTF8));
        rdbEnter->setText(QApplication::translate("SettingsDialog", "<Enter>", 0, QApplication::UnicodeUTF8));
        rdbCmdEnter->setText(QApplication::translate("SettingsDialog", "<Cmd + Enter>", 0, QApplication::UnicodeUTF8));
        btnReset->setText(QApplication::translate("SettingsDialog", "Reset Preferences", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("SettingsDialog", "OK", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("SettingsDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H

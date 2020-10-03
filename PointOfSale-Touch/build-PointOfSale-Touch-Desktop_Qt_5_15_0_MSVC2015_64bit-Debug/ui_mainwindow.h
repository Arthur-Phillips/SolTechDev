/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_client;
    QAction *actionAdd_supplier;
    QAction *actionAdd_Stock;
    QAction *actionView_Clients;
    QAction *actionView_Suppliers;
    QAction *actionView_Stock_Items;
    QAction *actionView_Transactions_List;
    QAction *actionAdd_Client;
    QAction *actionAdd_Supplier;
    QAction *actionAdd_Stock_Item;
    QAction *actionEdit_Client;
    QAction *actionEdit_Supplier;
    QAction *actionEdit_Stock_Item;
    QAction *actionTotal_Sales;
    QAction *actionClients;
    QAction *actionSuppliers;
    QAction *actionSummary;
    QAction *actionTransaction;
    QAction *actionDebit;
    QAction *actionQuote;
    QAction *actionCredit_transactions;
    QAction *actionDebit_Transactions;
    QAction *actionQuotes;
    QAction *actionDebit_and_Credit_Journal;
    QAction *actionSales;
    QAction *actionPurchases;
    QAction *actionMonthy_Summary;
    QAction *actionLogout;
    QAction *actionLogin;
    QWidget *centralwidget;
    QTabWidget *tab_main;
    QWidget *tab_login;
    QLCDNumber *lcdNumber_inputDisplay;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_login;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QWidget *tab_Ttransactions;
    QComboBox *comboBox_selectTransactionType;
    QLabel *label_selectTransactionType;
    QComboBox *comboBox_selectClient;
    QLabel *label_selectClient;
    QLabel *label_uniqueTransactionNumber;
    QGroupBox *groupBox_transactionSummary;
    QListView *listView_transactionSummary;
    QPushButton *pushButton_printTransactionSummary;
    QScrollArea *scrollArea_productCode;
    QWidget *scrollAreaWidgetContents_2;
    QGroupBox *groupBox_productCode;
    QComboBox *comboBox_productCode;
    QScrollArea *scrollArea_productName;
    QWidget *scrollAreaWidgetContents_3;
    QGroupBox *groupBox_productName;
    QLineEdit *lineEdit_productName;
    QScrollArea *scrollArea_discount;
    QWidget *scrollAreaWidgetContents_4;
    QGroupBox *groupBox_discount;
    QDoubleSpinBox *doubleSpinBox_discount;
    QScrollArea *scrollArea_quantity;
    QWidget *scrollAreaWidgetContents_5;
    QGroupBox *groupBox_quantity;
    QSpinBox *spinBox_quantity;
    QScrollArea *scrollArea_price;
    QWidget *scrollAreaWidgetContents_6;
    QGroupBox *groupBox_price;
    QLineEdit *lineEdit_price;
    QFrame *line;
    QLCDNumber *lcdNumber_currentTotal;
    QPushButton *pushButton_removeAProduct;
    QComboBox *comboBox_uniqueTransactionNumber;
    QPushButton *pushButton_addAnotherProduct;
    QPushButton *pushButton_saveTransaction;
    QPushButton *pushButton_previousTransactionNumber;
    QPushButton *pushButton_nextTransactionNumber;
    QGroupBox *groupBox_transactionSettings;
    QPushButton *pushButton_editTransactionSettings;
    QWidget *tab_Tview;
    QTabWidget *tabWidget_4;
    QWidget *tab_allClients;
    QTableView *tableView_allClients;
    QWidget *tab_allSuppliers;
    QTableView *tableView_allSuppliers;
    QWidget *tab_allProducts;
    QTableView *tableView_allProducts;
    QWidget *tab_transactionList;
    QWidget *tab;
    QWidget *tab_Trecent;
    QTabWidget *tabWidget_6;
    QWidget *tab_credits;
    QWidget *tab_debits;
    QWidget *tab_quotes;
    QWidget *tab_TscheduleWork;
    QCalendarWidget *calendarWidget_scheduledWork;
    QGroupBox *groupBox_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget;
    QGroupBox *groupBox_8;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QFrame *frame;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QTimeEdit *timeEdit;
    QLabel *label_5;
    QTextBrowser *textBrowser_3;
    QRadioButton *radioButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QWidget *tab_Tmaintenance;
    QTabWidget *tabWidget_5;
    QWidget *tab_mPrint;
    QWidget *tab_mBackRestore;
    QWidget *tab_mHexColorWheel;
    QWidget *tab_mSettings;
    QWidget *tab_mLog;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(920, 656);
        MainWindow->setMinimumSize(QSize(920, 656));
        MainWindow->setMaximumSize(QSize(920, 656));
        actionAdd_client = new QAction(MainWindow);
        actionAdd_client->setObjectName(QString::fromUtf8("actionAdd_client"));
        actionAdd_supplier = new QAction(MainWindow);
        actionAdd_supplier->setObjectName(QString::fromUtf8("actionAdd_supplier"));
        actionAdd_Stock = new QAction(MainWindow);
        actionAdd_Stock->setObjectName(QString::fromUtf8("actionAdd_Stock"));
        actionView_Clients = new QAction(MainWindow);
        actionView_Clients->setObjectName(QString::fromUtf8("actionView_Clients"));
        actionView_Clients->setEnabled(false);
        actionView_Suppliers = new QAction(MainWindow);
        actionView_Suppliers->setObjectName(QString::fromUtf8("actionView_Suppliers"));
        actionView_Suppliers->setEnabled(false);
        actionView_Stock_Items = new QAction(MainWindow);
        actionView_Stock_Items->setObjectName(QString::fromUtf8("actionView_Stock_Items"));
        actionView_Stock_Items->setEnabled(false);
        actionView_Transactions_List = new QAction(MainWindow);
        actionView_Transactions_List->setObjectName(QString::fromUtf8("actionView_Transactions_List"));
        actionAdd_Client = new QAction(MainWindow);
        actionAdd_Client->setObjectName(QString::fromUtf8("actionAdd_Client"));
        actionAdd_Client->setEnabled(false);
        actionAdd_Supplier = new QAction(MainWindow);
        actionAdd_Supplier->setObjectName(QString::fromUtf8("actionAdd_Supplier"));
        actionAdd_Supplier->setEnabled(false);
        actionAdd_Stock_Item = new QAction(MainWindow);
        actionAdd_Stock_Item->setObjectName(QString::fromUtf8("actionAdd_Stock_Item"));
        actionAdd_Stock_Item->setEnabled(false);
        actionEdit_Client = new QAction(MainWindow);
        actionEdit_Client->setObjectName(QString::fromUtf8("actionEdit_Client"));
        actionEdit_Supplier = new QAction(MainWindow);
        actionEdit_Supplier->setObjectName(QString::fromUtf8("actionEdit_Supplier"));
        actionEdit_Stock_Item = new QAction(MainWindow);
        actionEdit_Stock_Item->setObjectName(QString::fromUtf8("actionEdit_Stock_Item"));
        actionTotal_Sales = new QAction(MainWindow);
        actionTotal_Sales->setObjectName(QString::fromUtf8("actionTotal_Sales"));
        actionClients = new QAction(MainWindow);
        actionClients->setObjectName(QString::fromUtf8("actionClients"));
        actionSuppliers = new QAction(MainWindow);
        actionSuppliers->setObjectName(QString::fromUtf8("actionSuppliers"));
        actionSummary = new QAction(MainWindow);
        actionSummary->setObjectName(QString::fromUtf8("actionSummary"));
        actionTransaction = new QAction(MainWindow);
        actionTransaction->setObjectName(QString::fromUtf8("actionTransaction"));
        actionTransaction->setEnabled(false);
        actionDebit = new QAction(MainWindow);
        actionDebit->setObjectName(QString::fromUtf8("actionDebit"));
        actionDebit->setEnabled(false);
        actionQuote = new QAction(MainWindow);
        actionQuote->setObjectName(QString::fromUtf8("actionQuote"));
        actionQuote->setEnabled(false);
        actionCredit_transactions = new QAction(MainWindow);
        actionCredit_transactions->setObjectName(QString::fromUtf8("actionCredit_transactions"));
        actionCredit_transactions->setEnabled(false);
        actionDebit_Transactions = new QAction(MainWindow);
        actionDebit_Transactions->setObjectName(QString::fromUtf8("actionDebit_Transactions"));
        actionDebit_Transactions->setEnabled(false);
        actionQuotes = new QAction(MainWindow);
        actionQuotes->setObjectName(QString::fromUtf8("actionQuotes"));
        actionQuotes->setEnabled(false);
        actionDebit_and_Credit_Journal = new QAction(MainWindow);
        actionDebit_and_Credit_Journal->setObjectName(QString::fromUtf8("actionDebit_and_Credit_Journal"));
        actionDebit_and_Credit_Journal->setEnabled(false);
        actionSales = new QAction(MainWindow);
        actionSales->setObjectName(QString::fromUtf8("actionSales"));
        actionPurchases = new QAction(MainWindow);
        actionPurchases->setObjectName(QString::fromUtf8("actionPurchases"));
        actionMonthy_Summary = new QAction(MainWindow);
        actionMonthy_Summary->setObjectName(QString::fromUtf8("actionMonthy_Summary"));
        actionMonthy_Summary->setEnabled(false);
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionLogout->setEnabled(false);
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        actionLogin->setEnabled(true);
        actionLogin->setVisible(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        centralwidget->setMinimumSize(QSize(920, 656));
        centralwidget->setMaximumSize(QSize(920, 656));
        centralwidget->setAutoFillBackground(false);
        tab_main = new QTabWidget(centralwidget);
        tab_main->setObjectName(QString::fromUtf8("tab_main"));
        tab_main->setEnabled(true);
        tab_main->setGeometry(QRect(0, 0, 921, 661));
        tab_login = new QWidget();
        tab_login->setObjectName(QString::fromUtf8("tab_login"));
        lcdNumber_inputDisplay = new QLCDNumber(tab_login);
        lcdNumber_inputDisplay->setObjectName(QString::fromUtf8("lcdNumber_inputDisplay"));
        lcdNumber_inputDisplay->setGeometry(QRect(20, 10, 871, 141));
        lcdNumber_inputDisplay->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 255, 0);"));
        gridLayoutWidget = new QWidget(tab_login);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 168, 871, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(120, 100));
        pushButton_1->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setMinimumSize(QSize(120, 50));
        pushButton_0->setStyleSheet(QString::fromUtf8("font: 75 18pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(120, 100));
        pushButton_7->setBaseSize(QSize(0, 0));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_7, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(120, 100));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(120, 100));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_login = new QPushButton(gridLayoutWidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setMinimumSize(QSize(120, 50));
        pushButton_login->setStyleSheet(QString::fromUtf8("font: 75 18pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_login, 3, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(120, 100));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(120, 100));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_9, 0, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(120, 100));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_clear = new QPushButton(gridLayoutWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setMinimumSize(QSize(120, 50));
        pushButton_clear->setStyleSheet(QString::fromUtf8("font: 75 18pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_clear, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(120, 100));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_8, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(120, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 26pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        tab_main->addTab(tab_login, QString());
        tab_Ttransactions = new QWidget();
        tab_Ttransactions->setObjectName(QString::fromUtf8("tab_Ttransactions"));
        comboBox_selectTransactionType = new QComboBox(tab_Ttransactions);
        comboBox_selectTransactionType->addItem(QString());
        comboBox_selectTransactionType->addItem(QString());
        comboBox_selectTransactionType->addItem(QString());
        comboBox_selectTransactionType->setObjectName(QString::fromUtf8("comboBox_selectTransactionType"));
        comboBox_selectTransactionType->setGeometry(QRect(10, 40, 191, 31));
        label_selectTransactionType = new QLabel(tab_Ttransactions);
        label_selectTransactionType->setObjectName(QString::fromUtf8("label_selectTransactionType"));
        label_selectTransactionType->setGeometry(QRect(10, 10, 191, 31));
        label_selectTransactionType->setStyleSheet(QString::fromUtf8("font: 12pt \"Calibri\";"));
        comboBox_selectClient = new QComboBox(tab_Ttransactions);
        comboBox_selectClient->setObjectName(QString::fromUtf8("comboBox_selectClient"));
        comboBox_selectClient->setGeometry(QRect(210, 40, 261, 31));
        label_selectClient = new QLabel(tab_Ttransactions);
        label_selectClient->setObjectName(QString::fromUtf8("label_selectClient"));
        label_selectClient->setGeometry(QRect(210, 10, 261, 31));
        label_selectClient->setStyleSheet(QString::fromUtf8("font: 12pt \"Calibri\";"));
        label_uniqueTransactionNumber = new QLabel(tab_Ttransactions);
        label_uniqueTransactionNumber->setObjectName(QString::fromUtf8("label_uniqueTransactionNumber"));
        label_uniqueTransactionNumber->setGeometry(QRect(480, 10, 251, 31));
        label_uniqueTransactionNumber->setStyleSheet(QString::fromUtf8("font: 12pt \"Calibri\";"));
        groupBox_transactionSummary = new QGroupBox(tab_Ttransactions);
        groupBox_transactionSummary->setObjectName(QString::fromUtf8("groupBox_transactionSummary"));
        groupBox_transactionSummary->setGeometry(QRect(750, 10, 151, 561));
        listView_transactionSummary = new QListView(groupBox_transactionSummary);
        listView_transactionSummary->setObjectName(QString::fromUtf8("listView_transactionSummary"));
        listView_transactionSummary->setGeometry(QRect(10, 20, 131, 531));
        pushButton_printTransactionSummary = new QPushButton(tab_Ttransactions);
        pushButton_printTransactionSummary->setObjectName(QString::fromUtf8("pushButton_printTransactionSummary"));
        pushButton_printTransactionSummary->setGeometry(QRect(750, 580, 151, 41));
        scrollArea_productCode = new QScrollArea(tab_Ttransactions);
        scrollArea_productCode->setObjectName(QString::fromUtf8("scrollArea_productCode"));
        scrollArea_productCode->setGeometry(QRect(10, 80, 131, 471));
        scrollArea_productCode->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 129, 469));
        groupBox_productCode = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_productCode->setObjectName(QString::fromUtf8("groupBox_productCode"));
        groupBox_productCode->setGeometry(QRect(10, 10, 111, 451));
        comboBox_productCode = new QComboBox(groupBox_productCode);
        comboBox_productCode->addItem(QString());
        comboBox_productCode->setObjectName(QString::fromUtf8("comboBox_productCode"));
        comboBox_productCode->setGeometry(QRect(10, 20, 90, 20));
        scrollArea_productCode->setWidget(scrollAreaWidgetContents_2);
        scrollArea_productName = new QScrollArea(tab_Ttransactions);
        scrollArea_productName->setObjectName(QString::fromUtf8("scrollArea_productName"));
        scrollArea_productName->setGeometry(QRect(150, 80, 211, 471));
        scrollArea_productName->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 209, 469));
        groupBox_productName = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_productName->setObjectName(QString::fromUtf8("groupBox_productName"));
        groupBox_productName->setGeometry(QRect(10, 10, 191, 451));
        lineEdit_productName = new QLineEdit(groupBox_productName);
        lineEdit_productName->setObjectName(QString::fromUtf8("lineEdit_productName"));
        lineEdit_productName->setGeometry(QRect(10, 20, 169, 20));
        scrollArea_productName->setWidget(scrollAreaWidgetContents_3);
        scrollArea_discount = new QScrollArea(tab_Ttransactions);
        scrollArea_discount->setObjectName(QString::fromUtf8("scrollArea_discount"));
        scrollArea_discount->setGeometry(QRect(370, 80, 101, 471));
        scrollArea_discount->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 99, 469));
        groupBox_discount = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_discount->setObjectName(QString::fromUtf8("groupBox_discount"));
        groupBox_discount->setGeometry(QRect(10, 10, 81, 451));
        doubleSpinBox_discount = new QDoubleSpinBox(groupBox_discount);
        doubleSpinBox_discount->setObjectName(QString::fromUtf8("doubleSpinBox_discount"));
        doubleSpinBox_discount->setGeometry(QRect(10, 20, 59, 20));
        doubleSpinBox_discount->setDecimals(1);
        doubleSpinBox_discount->setMaximum(100.000000000000000);
        scrollArea_discount->setWidget(scrollAreaWidgetContents_4);
        scrollArea_quantity = new QScrollArea(tab_Ttransactions);
        scrollArea_quantity->setObjectName(QString::fromUtf8("scrollArea_quantity"));
        scrollArea_quantity->setGeometry(QRect(480, 80, 101, 471));
        scrollArea_quantity->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 99, 469));
        groupBox_quantity = new QGroupBox(scrollAreaWidgetContents_5);
        groupBox_quantity->setObjectName(QString::fromUtf8("groupBox_quantity"));
        groupBox_quantity->setGeometry(QRect(10, 10, 81, 451));
        spinBox_quantity = new QSpinBox(groupBox_quantity);
        spinBox_quantity->setObjectName(QString::fromUtf8("spinBox_quantity"));
        spinBox_quantity->setGeometry(QRect(10, 20, 59, 20));
        scrollArea_quantity->setWidget(scrollAreaWidgetContents_5);
        scrollArea_price = new QScrollArea(tab_Ttransactions);
        scrollArea_price->setObjectName(QString::fromUtf8("scrollArea_price"));
        scrollArea_price->setGeometry(QRect(590, 80, 141, 471));
        scrollArea_price->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 139, 469));
        groupBox_price = new QGroupBox(scrollAreaWidgetContents_6);
        groupBox_price->setObjectName(QString::fromUtf8("groupBox_price"));
        groupBox_price->setGeometry(QRect(10, 10, 121, 451));
        lineEdit_price = new QLineEdit(groupBox_price);
        lineEdit_price->setObjectName(QString::fromUtf8("lineEdit_price"));
        lineEdit_price->setGeometry(QRect(10, 20, 99, 20));
        scrollArea_price->setWidget(scrollAreaWidgetContents_6);
        line = new QFrame(tab_Ttransactions);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(720, -10, 41, 641));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lcdNumber_currentTotal = new QLCDNumber(tab_Ttransactions);
        lcdNumber_currentTotal->setObjectName(QString::fromUtf8("lcdNumber_currentTotal"));
        lcdNumber_currentTotal->setGeometry(QRect(590, 560, 141, 61));
        pushButton_removeAProduct = new QPushButton(tab_Ttransactions);
        pushButton_removeAProduct->setObjectName(QString::fromUtf8("pushButton_removeAProduct"));
        pushButton_removeAProduct->setGeometry(QRect(10, 560, 61, 61));
        comboBox_uniqueTransactionNumber = new QComboBox(tab_Ttransactions);
        comboBox_uniqueTransactionNumber->setObjectName(QString::fromUtf8("comboBox_uniqueTransactionNumber"));
        comboBox_uniqueTransactionNumber->setGeometry(QRect(520, 40, 171, 31));
        pushButton_addAnotherProduct = new QPushButton(tab_Ttransactions);
        pushButton_addAnotherProduct->setObjectName(QString::fromUtf8("pushButton_addAnotherProduct"));
        pushButton_addAnotherProduct->setGeometry(QRect(80, 560, 61, 61));
        pushButton_saveTransaction = new QPushButton(tab_Ttransactions);
        pushButton_saveTransaction->setObjectName(QString::fromUtf8("pushButton_saveTransaction"));
        pushButton_saveTransaction->setGeometry(QRect(370, 560, 211, 61));
        pushButton_previousTransactionNumber = new QPushButton(tab_Ttransactions);
        pushButton_previousTransactionNumber->setObjectName(QString::fromUtf8("pushButton_previousTransactionNumber"));
        pushButton_previousTransactionNumber->setGeometry(QRect(480, 40, 31, 31));
        pushButton_nextTransactionNumber = new QPushButton(tab_Ttransactions);
        pushButton_nextTransactionNumber->setObjectName(QString::fromUtf8("pushButton_nextTransactionNumber"));
        pushButton_nextTransactionNumber->setGeometry(QRect(700, 40, 31, 31));
        groupBox_transactionSettings = new QGroupBox(tab_Ttransactions);
        groupBox_transactionSettings->setObjectName(QString::fromUtf8("groupBox_transactionSettings"));
        groupBox_transactionSettings->setGeometry(QRect(150, 560, 211, 61));
        pushButton_editTransactionSettings = new QPushButton(groupBox_transactionSettings);
        pushButton_editTransactionSettings->setObjectName(QString::fromUtf8("pushButton_editTransactionSettings"));
        pushButton_editTransactionSettings->setGeometry(QRect(10, 20, 191, 31));
        tab_main->addTab(tab_Ttransactions, QString());
        tab_Tview = new QWidget();
        tab_Tview->setObjectName(QString::fromUtf8("tab_Tview"));
        tabWidget_4 = new QTabWidget(tab_Tview);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 921, 641));
        tabWidget_4->setStyleSheet(QString::fromUtf8("Edit"));
        tab_allClients = new QWidget();
        tab_allClients->setObjectName(QString::fromUtf8("tab_allClients"));
        tableView_allClients = new QTableView(tab_allClients);
        tableView_allClients->setObjectName(QString::fromUtf8("tableView_allClients"));
        tableView_allClients->setGeometry(QRect(10, 10, 891, 591));
        tabWidget_4->addTab(tab_allClients, QString());
        tab_allSuppliers = new QWidget();
        tab_allSuppliers->setObjectName(QString::fromUtf8("tab_allSuppliers"));
        tableView_allSuppliers = new QTableView(tab_allSuppliers);
        tableView_allSuppliers->setObjectName(QString::fromUtf8("tableView_allSuppliers"));
        tableView_allSuppliers->setGeometry(QRect(10, 10, 891, 591));
        tabWidget_4->addTab(tab_allSuppliers, QString());
        tab_allProducts = new QWidget();
        tab_allProducts->setObjectName(QString::fromUtf8("tab_allProducts"));
        tableView_allProducts = new QTableView(tab_allProducts);
        tableView_allProducts->setObjectName(QString::fromUtf8("tableView_allProducts"));
        tableView_allProducts->setGeometry(QRect(10, 10, 891, 591));
        tabWidget_4->addTab(tab_allProducts, QString());
        tab_transactionList = new QWidget();
        tab_transactionList->setObjectName(QString::fromUtf8("tab_transactionList"));
        tabWidget_4->addTab(tab_transactionList, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget_4->addTab(tab, QString());
        tab_main->addTab(tab_Tview, QString());
        tab_Trecent = new QWidget();
        tab_Trecent->setObjectName(QString::fromUtf8("tab_Trecent"));
        tabWidget_6 = new QTabWidget(tab_Trecent);
        tabWidget_6->setObjectName(QString::fromUtf8("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(0, 0, 911, 631));
        tab_credits = new QWidget();
        tab_credits->setObjectName(QString::fromUtf8("tab_credits"));
        tabWidget_6->addTab(tab_credits, QString());
        tab_debits = new QWidget();
        tab_debits->setObjectName(QString::fromUtf8("tab_debits"));
        tabWidget_6->addTab(tab_debits, QString());
        tab_quotes = new QWidget();
        tab_quotes->setObjectName(QString::fromUtf8("tab_quotes"));
        tabWidget_6->addTab(tab_quotes, QString());
        tab_main->addTab(tab_Trecent, QString());
        tab_TscheduleWork = new QWidget();
        tab_TscheduleWork->setObjectName(QString::fromUtf8("tab_TscheduleWork"));
        calendarWidget_scheduledWork = new QCalendarWidget(tab_TscheduleWork);
        calendarWidget_scheduledWork->setObjectName(QString::fromUtf8("calendarWidget_scheduledWork"));
        calendarWidget_scheduledWork->setGeometry(QRect(10, 10, 671, 331));
        groupBox_7 = new QGroupBox(tab_TscheduleWork);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(689, 10, 211, 611));
        scrollArea = new QScrollArea(groupBox_7);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 191, 581));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 189, 579));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(-10, -10, 201, 591));
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_8 = new QGroupBox(tab_TscheduleWork);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 350, 671, 271));
        scrollArea_7 = new QScrollArea(groupBox_8);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setGeometry(QRect(10, 20, 651, 191));
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 649, 189));
        frame = new QFrame(scrollAreaWidgetContents_7);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 631, 171));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 41, 21));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 10, 291, 20));
        timeEdit = new QTimeEdit(frame);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(390, 10, 141, 22));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 10, 31, 21));
        textBrowser_3 = new QTextBrowser(frame);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 40, 611, 121));
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(540, 10, 82, 21));
        scrollArea_7->setWidget(scrollAreaWidgetContents_7);
        horizontalLayoutWidget = new QWidget(groupBox_8);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 220, 651, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_14 = new QPushButton(horizontalLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        horizontalLayout->addWidget(pushButton_14);

        pushButton_13 = new QPushButton(horizontalLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        horizontalLayout->addWidget(pushButton_13);

        tab_main->addTab(tab_TscheduleWork, QString());
        tab_Tmaintenance = new QWidget();
        tab_Tmaintenance->setObjectName(QString::fromUtf8("tab_Tmaintenance"));
        tabWidget_5 = new QTabWidget(tab_Tmaintenance);
        tabWidget_5->setObjectName(QString::fromUtf8("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 911, 631));
        tab_mPrint = new QWidget();
        tab_mPrint->setObjectName(QString::fromUtf8("tab_mPrint"));
        tabWidget_5->addTab(tab_mPrint, QString());
        tab_mBackRestore = new QWidget();
        tab_mBackRestore->setObjectName(QString::fromUtf8("tab_mBackRestore"));
        tabWidget_5->addTab(tab_mBackRestore, QString());
        tab_mHexColorWheel = new QWidget();
        tab_mHexColorWheel->setObjectName(QString::fromUtf8("tab_mHexColorWheel"));
        tabWidget_5->addTab(tab_mHexColorWheel, QString());
        tab_mSettings = new QWidget();
        tab_mSettings->setObjectName(QString::fromUtf8("tab_mSettings"));
        tabWidget_5->addTab(tab_mSettings, QString());
        tab_mLog = new QWidget();
        tab_mLog->setObjectName(QString::fromUtf8("tab_mLog"));
        tabWidget_5->addTab(tab_mLog, QString());
        tab_main->addTab(tab_Tmaintenance, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tab_main->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(4);
        tabWidget_6->setCurrentIndex(2);
        tabWidget_5->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_client->setText(QCoreApplication::translate("MainWindow", "Add Client", nullptr));
        actionAdd_supplier->setText(QCoreApplication::translate("MainWindow", "Add Supplier", nullptr));
        actionAdd_Stock->setText(QCoreApplication::translate("MainWindow", "Add Stock", nullptr));
        actionView_Clients->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        actionView_Suppliers->setText(QCoreApplication::translate("MainWindow", "Suppliers", nullptr));
        actionView_Stock_Items->setText(QCoreApplication::translate("MainWindow", "Stock Items", nullptr));
        actionView_Transactions_List->setText(QCoreApplication::translate("MainWindow", "Transactions List", nullptr));
        actionAdd_Client->setText(QCoreApplication::translate("MainWindow", "Create Client", nullptr));
        actionAdd_Supplier->setText(QCoreApplication::translate("MainWindow", "Create Supplier", nullptr));
        actionAdd_Stock_Item->setText(QCoreApplication::translate("MainWindow", "Create Stock Item", nullptr));
        actionEdit_Client->setText(QCoreApplication::translate("MainWindow", "Edit Client", nullptr));
        actionEdit_Supplier->setText(QCoreApplication::translate("MainWindow", "Edit Supplier", nullptr));
        actionEdit_Stock_Item->setText(QCoreApplication::translate("MainWindow", "Edit Stock Item", nullptr));
        actionTotal_Sales->setText(QCoreApplication::translate("MainWindow", "Sales", nullptr));
        actionClients->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        actionSuppliers->setText(QCoreApplication::translate("MainWindow", "Suppliers", nullptr));
        actionSummary->setText(QCoreApplication::translate("MainWindow", "Summary", nullptr));
        actionTransaction->setText(QCoreApplication::translate("MainWindow", "Credit Transaction", nullptr));
        actionDebit->setText(QCoreApplication::translate("MainWindow", "Debit Transaction", nullptr));
        actionQuote->setText(QCoreApplication::translate("MainWindow", "Create Quote", nullptr));
        actionCredit_transactions->setText(QCoreApplication::translate("MainWindow", "Credit Transactions", nullptr));
        actionDebit_Transactions->setText(QCoreApplication::translate("MainWindow", "Debit Transactions", nullptr));
        actionQuotes->setText(QCoreApplication::translate("MainWindow", "Quotes", nullptr));
        actionDebit_and_Credit_Journal->setText(QCoreApplication::translate("MainWindow", "Debit and Credit Journal", nullptr));
        actionSales->setText(QCoreApplication::translate("MainWindow", "Sales", nullptr));
        actionPurchases->setText(QCoreApplication::translate("MainWindow", "Purchases", nullptr));
        actionMonthy_Summary->setText(QCoreApplication::translate("MainWindow", "Monthy Summary", nullptr));
        actionLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        actionLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        tab_main->setTabText(tab_main->indexOf(tab_login), QCoreApplication::translate("MainWindow", "Login", nullptr));
        comboBox_selectTransactionType->setItemText(0, QCoreApplication::translate("MainWindow", "Create a credit transaction", nullptr));
        comboBox_selectTransactionType->setItemText(1, QCoreApplication::translate("MainWindow", "Create a debit transaction", nullptr));
        comboBox_selectTransactionType->setItemText(2, QCoreApplication::translate("MainWindow", "Create a quote", nullptr));

        label_selectTransactionType->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Select transaction type</p></body></html>", nullptr));
        label_selectClient->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Select Client</p></body></html>", nullptr));
        label_uniqueTransactionNumber->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Unique Transaction Number</p></body></html>", nullptr));
        groupBox_transactionSummary->setTitle(QCoreApplication::translate("MainWindow", "Transaction summary", nullptr));
        pushButton_printTransactionSummary->setText(QCoreApplication::translate("MainWindow", "Print Transaction Summary", nullptr));
        groupBox_productCode->setTitle(QCoreApplication::translate("MainWindow", "Product Code", nullptr));
        comboBox_productCode->setItemText(0, QCoreApplication::translate("MainWindow", "Not Apllicable", nullptr));

        groupBox_productName->setTitle(QCoreApplication::translate("MainWindow", "Product Name", nullptr));
        groupBox_discount->setTitle(QCoreApplication::translate("MainWindow", "Discount", nullptr));
        groupBox_quantity->setTitle(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        groupBox_price->setTitle(QCoreApplication::translate("MainWindow", "Price", nullptr));
        pushButton_removeAProduct->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_addAnotherProduct->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_saveTransaction->setText(QCoreApplication::translate("MainWindow", "Save the transaction", nullptr));
        pushButton_previousTransactionNumber->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pushButton_nextTransactionNumber->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        groupBox_transactionSettings->setTitle(QCoreApplication::translate("MainWindow", "Transaction Settings", nullptr));
        pushButton_editTransactionSettings->setText(QCoreApplication::translate("MainWindow", "Edit Transaction Settings", nullptr));
        tab_main->setTabText(tab_main->indexOf(tab_Ttransactions), QCoreApplication::translate("MainWindow", "Transactions", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_allClients), QCoreApplication::translate("MainWindow", "All Clients", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_allSuppliers), QCoreApplication::translate("MainWindow", "All Suppliers", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_allProducts), QCoreApplication::translate("MainWindow", "All Products", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_transactionList), QCoreApplication::translate("MainWindow", "Transactions list", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab), QCoreApplication::translate("MainWindow", "Edit", nullptr));
        tab_main->setTabText(tab_main->indexOf(tab_Tview), QCoreApplication::translate("MainWindow", "View", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_credits), QCoreApplication::translate("MainWindow", "Credits", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_debits), QCoreApplication::translate("MainWindow", "Debits", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_quotes), QCoreApplication::translate("MainWindow", "Quotes", nullptr));
        tab_main->setTabText(tab_main->indexOf(tab_Trecent), QCoreApplication::translate("MainWindow", "Recent", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Upcoming Events", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Details of selected date", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Time: ", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Details...</p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Select Event", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Add event on selected date", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Delete selected event", nullptr));
        tab_main->setTabText(tab_main->indexOf(tab_TscheduleWork), QCoreApplication::translate("MainWindow", "Scheduled Work", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_mPrint), QCoreApplication::translate("MainWindow", "Print", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_mBackRestore), QCoreApplication::translate("MainWindow", "Backup and restore", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_mHexColorWheel), QCoreApplication::translate("MainWindow", "Hex color wheel", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_mSettings), QCoreApplication::translate("MainWindow", "Settings", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_mLog), QCoreApplication::translate("MainWindow", "log", nullptr));
        tab_main->setTabText(tab_main->indexOf(tab_Tmaintenance), QCoreApplication::translate("MainWindow", "Maintenance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

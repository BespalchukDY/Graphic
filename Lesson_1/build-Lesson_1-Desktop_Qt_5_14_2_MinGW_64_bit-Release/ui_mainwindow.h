/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_task1;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QLabel *label_pic;
    QLabel *label_task1_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_A_2;
    QLabel *label_A_3;
    QLabel *label_A_4;
    QLabel *label_A_5;
    QLabel *label_A_7;
    QLabel *label_A_6;
    QWidget *tab_3;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit;
    QLabel *label_task1_3;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_4;
    QLabel *label_task1_4;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1132, 598);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 1121, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(32, 190, 137, 22));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(176, 190, 137, 22));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(320, 190, 137, 22));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 190, 211, 28));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 230, 441, 31));
        label_task1 = new QLabel(tab);
        label_task1->setObjectName(QString::fromUtf8("label_task1"));
        label_task1->setGeometry(QRect(30, 10, 581, 141));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 160, 441, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 410, 541, 41));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(870, 170, 201, 51));
        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(850, 300, 241, 41));
        label_pic = new QLabel(tab_2);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setEnabled(true);
        label_pic->setGeometry(QRect(20, 130, 521, 291));
        label_pic->setMouseTracking(true);
        label_pic->setFocusPolicy(Qt::NoFocus);
        label_pic->setAutoFillBackground(true);
        label_pic->setPixmap(QPixmap(QString::fromUtf8("img/tre.PNG")));
        label_pic->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        label_task1_2 = new QLabel(tab_2);
        label_task1_2->setObjectName(QString::fromUtf8("label_task1_2"));
        label_task1_2->setGeometry(QRect(20, 20, 561, 121));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(690, 150, 131, 251));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        verticalLayout->addWidget(lineEdit_8);

        lineEdit_9 = new QLineEdit(layoutWidget1);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        verticalLayout->addWidget(lineEdit_9);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(560, 150, 131, 251));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_A_2 = new QLabel(layoutWidget2);
        label_A_2->setObjectName(QString::fromUtf8("label_A_2"));

        verticalLayout_2->addWidget(label_A_2);

        label_A_3 = new QLabel(layoutWidget2);
        label_A_3->setObjectName(QString::fromUtf8("label_A_3"));

        verticalLayout_2->addWidget(label_A_3);

        label_A_4 = new QLabel(layoutWidget2);
        label_A_4->setObjectName(QString::fromUtf8("label_A_4"));
        QFont font;
        font.setItalic(false);
        label_A_4->setFont(font);

        verticalLayout_2->addWidget(label_A_4);

        label_A_5 = new QLabel(layoutWidget2);
        label_A_5->setObjectName(QString::fromUtf8("label_A_5"));

        verticalLayout_2->addWidget(label_A_5);

        label_A_7 = new QLabel(layoutWidget2);
        label_A_7->setObjectName(QString::fromUtf8("label_A_7"));
        label_A_7->setFont(font);

        verticalLayout_2->addWidget(label_A_7);

        label_A_6 = new QLabel(layoutWidget2);
        label_A_6->setObjectName(QString::fromUtf8("label_A_6"));

        verticalLayout_2->addWidget(label_A_6);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        plainTextEdit = new QPlainTextEdit(tab_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 110, 231, 141));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(420, 110, 231, 141));
        label_task1_3 = new QLabel(tab_3);
        label_task1_3->setObjectName(QString::fromUtf8("label_task1_3"));
        label_task1_3->setGeometry(QRect(30, 10, 701, 91));
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(270, 120, 141, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_task1_4 = new QLabel(tab_4);
        label_task1_4->setObjectName(QString::fromUtf8("label_task1_4"));
        label_task1_4->setGeometry(QRect(10, 10, 591, 101));
        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 180, 141, 31));
        textEdit_2 = new QTextEdit(tab_4);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(160, 140, 351, 151));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(550, 150, 161, 41));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1132, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\272\320\276\321\200\320\275\320\270 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202:", nullptr));
        label_task1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\261\321\203\320\264\320\265\321\202 \320\275\320\260\321\205\320\276\320\264\320\270\321\202\321\214 \320\272\320\276\321\200\320\265\320\275\321\214 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\275\320\276\320\263\320\276 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217 \320\262\321\202\320\276\321\200\320\276\320\271 \321\201\321\202\320\265\320\277\320\265\320\275\320\270,</p><p>\320\262\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265: a, b, c. \320\225\321\201\320\273\320\270 \320\275\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265 \320\272\320\276\321\200\320\275\321\217 \320\275\320\265\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276, \320\262\321\213\320\262"
                        "\320\276\320\264\320\270\321\202\321\214 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265 \320\262 \320\277\320\276\320\273\320\265</p><p>\321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\260 (\320\270\320\273\320\270 \320\262\321\213\320\262\320\276\320\264\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\262 \320\262\320\270\320\264\320\265 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\201\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260). \320\243\321\207\320\270\321\202\321\213\320\262\320\260\321\202\321\214, \321\207\321\202\320\276 \321\207\320\270\321\201\320\273\320\276 a</p><p>\320\274\320\276\320\266\320\265\321\202 \320\261\321\213\321\202\321\214 \321\200\320\260\320\262\320\275\320\276 \320\275\321\203\320\273\321\216.</p><p>\320\235\320\260\320\271\321\202\320\270 \320\272\320\276\321\200\320\275\320\270 \320\272\320\262\320\260\320\264\321\200\320\260\321"
                        "\202\320\275\320\276\320\263\320\276 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217 - <span style=\" font-weight:600;\">ax</span><span style=\" font-weight:600; vertical-align:super;\">2</span><span style=\" font-weight:600;\"> + bx + c = 0</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 a:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 b:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 c:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2261", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\264\320\273\320\270\320\275\321\203", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\260 \320\262 \320\263\321\200\320\260\320\264\321\203\321\201\320\260\321\205", nullptr));
        label_pic->setText(QString());
        label_task1_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\240\320\260\321\201\321\207\320\265\321\202 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260 \320\277\320\276 \320\264\320\262\321\203\320\274 \321\201\321\202\320\276\321\200\320\276\320\275\320\260\320\274 \320\270 \321\203\320\263\320\273\320\276\320\274 \320\274\320\265\320\266\320\264\321\203 \320\275\320\270\320\274\320\270. \320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276:</p><p>\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214 \320\270\320\267 QRadioButton \320\264\320\273\321\217 \320\262\321\213\320\261\320\276\321\200\320\260 \320\265\320\264\320\270\320\275\320\270\321\206, \320\262 \320\272\320\260\320\272\320\270\321\205 \321\203\320\272\320\260\320\267\320\260\320\275 \321\203\320\263\320\276\320"
                        "\273: \320\263\321\200\320\260\320\264\321\203\321\201\320\260\321\205</p><p>\320\270\320\273\320\270 \321\200\320\260\320\264\320\270\320\260\320\275\320\260\321\205. \320\244\320\276\321\200\320\274\321\203\320\273\321\203 \320\264\320\273\321\217 \321\200\320\260\321\201\321\207\320\265\321\202\320\260 \320\274\320\276\320\266\320\275\320\276 \320\275\320\260\320\271\321\202\320\270 \320\277\320\276 \321\201\321\201\321\213\320\273\320\272\320\265:</p><p>https://www-formula.ru/2011-10-09-11-08-41.</p></body></html>", nullptr));
        label_A_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 a:", nullptr));
        label_A_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 b:", nullptr));
        label_A_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 c:", nullptr));
        label_A_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \316\261:", nullptr));
        label_A_7->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \316\262:", nullptr));
        label_A_6->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 y:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2262", nullptr));
        label_task1_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>*\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \321\200\320\260\320\267\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\275\320\260 \320\277\320\276\320\273\320\265 \320\262\320\270\320\264\320\266\320\265\321\202 QPlainTextEdit. \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\320\270: \320\264\320\273\321\217</p><p>\320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \321\204\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\271 \321\201\321\202\321\200\320\276\320\272\320\270, \320\267\320\260\320\274\320\265\320\275\321\213 \320\275\320\260 \320\263\320\276\321\202\320\276\320\262\321\213\320\271 \321\202\320\265\320\272\321\201\321\202. \320\240\320\260\320\267\320\274\320\265\321\201\321\202\320\270\321\202\321\214 QTextEdit. \320\247\320\265\321\200\320\265\320"
                        "\267</p><p>\320\274\320\265\321\202\320\276\320\264 setHtml(QString) \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\320\276\320\263\320\276 html-\320\272\320\276\320\264\320\260, \320\275\320\260\320\277\321\200\320\270\320\274\320\265\321\200 &lt;font color='red'&gt;Hello&lt;/font&gt;.</p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2263", nullptr));
        label_task1_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\237\320\276\320\273\321\203\321\207\320\270\321\202\320\265 QTextDocument \320\270\320\267 \320\262\320\270\320\264\320\266\320\265\321\202\320\260 QTextEdit (\320\274\320\265\321\202\320\276\320\264 document) . \320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \321\201\320\277\320\270\321\201\320\272\320\260</p><p>\320\274\320\265\321\202\320\276\320\264\320\276\320\262 \320\270 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265, \320\272\320\260\320\272\320\270\320\265 \320\275\320\260\320\270\320\261\320\276\320\273\320\265\320\265 \320\270\320\275\321\202\320\265\321\200\320\265\321\201\320\275\321\213 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \321\202\320\265\320\272\321\201\321\202\320\260.</p><p>\320\236\320\267\320\275\320\260\320\272\320\276\320\274\321\214\321\202\320\265"
                        "\321\201\321\214 \321\201 \321\200\320\260\320\261\320\276\321\202\320\276\320\271 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\321\207\320\270\320\272\320\260 \320\272\320\276\320\264\320\260 Qt Creator ( Ctrl+Space ).</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\273\321\216\320\261\320\276\320\271 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\210\321\200\320\270\321\204\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

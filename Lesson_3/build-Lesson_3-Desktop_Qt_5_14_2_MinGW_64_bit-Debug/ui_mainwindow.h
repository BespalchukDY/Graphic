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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *plainTextEdit;
    QPushButton *Button_Save;
    QPushButton *Button_Open;
    QPushButton *Button_Help;
    QLabel *label;
    QWidget *tab_2;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QPushButton *Button_Find;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1128, 762);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 1091, 701));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 130, 611, 521));
        QFont font;
        font.setPointSize(12);
        plainTextEdit->setFont(font);
        Button_Save = new QPushButton(tab);
        Button_Save->setObjectName(QString::fromUtf8("Button_Save"));
        Button_Save->setGeometry(QRect(660, 260, 171, 51));
        QFont font1;
        font1.setPointSize(10);
        Button_Save->setFont(font1);
        Button_Open = new QPushButton(tab);
        Button_Open->setObjectName(QString::fromUtf8("Button_Open"));
        Button_Open->setGeometry(QRect(660, 320, 171, 51));
        Button_Open->setFont(font1);
        Button_Help = new QPushButton(tab);
        Button_Help->setObjectName(QString::fromUtf8("Button_Help"));
        Button_Help->setGeometry(QRect(660, 380, 171, 51));
        Button_Help->setFont(font1);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 931, 131));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 951, 161));
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 250, 821, 201));
        Button_Find = new QPushButton(tab_2);
        Button_Find->setObjectName(QString::fromUtf8("Button_Find"));
        Button_Find->setGeometry(QRect(850, 190, 141, 51));
        Button_Find->setFont(font1);
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 200, 641, 31));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 200, 141, 31));
        label_3->setFont(font1);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1128, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button_Save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        Button_Open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        Button_Help->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\222\320\260\321\210 \320\277\320\265\321\200\320\262\321\213\320\271 \320\277\321\200\320\276\320\265\320\272\321\202 \320\275\320\260 \320\264\320\260\320\275\320\275\320\276\320\274 \320\272\321\203\321\200\321\201\320\265 - \321\202\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200. </span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\275\320\260 \321\204\320\276\321\200\320\274\321\203 \320\262\320\270\320\264\320\266\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\320\276\320\263\320\276 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200\320\260. \320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320"
                        "\264\320\262\320\265 \320\272\320\275\320\276\320\277\320\272\320\270: \321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270 \320\276\321\202\320\272\321\200\321\213\321\202\321\214. </span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\237\321\200\320\265\320\264\320\276\321\201\321\202\320\260\320\262\321\214\321\202\320\265 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\216 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \320\272\321\203\320\264\320\260 \321\201\320\276\321\205\321\200\320\260\320\275\321\217\321\202\321\214 \321\204\320\260\320\271\320\273 \320\270 \320\272\320\260\320\272\320\276\320\271 \321\204\320\260\320\271\320\273 \320\276\321\202\320\272\321\200\321\213\320\262\320\260\321\202\321\214. </span></p><p><span style=\" font-family:'Helvetica'"
                        ",'sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\262 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \321\201\320\277\321\200\320\260\320\262\320\272\321\203. \320\242\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273 \321\201 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265\320\274 \321\200\320\260\320\267\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262 \321\200\320\265\321\201\321\203\321\200\321\201\320\260\321\205 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213.</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2261", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\222 \321\215\321\202\320\276\320\274 \320\267\320\260\320\264\320\260\320\275\320\270\320\270 \320\275\321\203\320\266\320\275\320\276 \321\201\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\260\321\200\321\201\320\265\321\200 \320\220\320\262\320\270\321\202\320\276 (\320\261\321\203\320\264\320\265\320\274 \321\200\320\260\321\201\321\201\320\274\320\260\321\202\321\200\320\270\320\262\320\260\321\202\321\214 \321\202\320\276\320\273\321\214\320\272\320\276 \320\234\320\276\321\201\320\272\320\262\321\203). </span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214 \320\264\320\276\320\273\320\266\320\265\320\275 \320\270\320\274\320\265\321\202\321\214 \320\262\320\276\320\267\320\274\320\276\320"
                        "\266\320\275\320\276\321\201\321\202\321\214 \320\262\320\262\320\276\320\264\320\270\321\202\321\214 \320\267\320\260\320\277\321\200\320\276\321\201 (\321\202\320\276, \321\207\321\202\320\276 \320\276\320\275 \321\205\320\276\321\207\320\265\321\202 \320\275\320\260\320\271\321\202\320\270). </span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\237\320\276\321\201\320\273\320\265 \321\215\321\202\320\276\320\263\320\276 \321\201 \321\201\320\260\320\271\321\202\320\260 \320\260\320\262\320\270\321\202\320\276 \321\201 \320\277\320\265\321\200\320\262\320\276\320\271 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\321\203\320\266\320\275\320\276 \320\277\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\320\273\320\265\320\264\321\203\321\216\321\211\321\203\321\216 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216: </span></p><p><span style=\" font-family:'Helv"
                        "etica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\321\217, \321\201\321\201\321\213\320\273\320\272\321\203 \320\275\320\260 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\265, \321\206\320\265\320\275\320\260, \320\274\320\265\321\202\321\200\320\276 (\320\265\321\201\320\273\320\270 \320\265\321\201\321\202\321\214), \321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\274\320\265\321\202\321\200\320\276\320\262 \320\276\321\202 \320\274\320\265\321\202\321\200\320\276 (\320\265\321\201\320\273\320\270 \320\265\321\201\321\202\321\214). </span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30; background-color:#ffffff;\">\320\255\321\202\321\203 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\275\321\203\320\266\320\275\320\276 "
                        "\320\276\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\262 \320\262\320\270\320\264\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213.</span></p></body></html>", nullptr));
        Button_Find->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\260\320\277\321\200\320\276\321\201:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
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
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_2;
    QLabel *label_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListView *listView;
    QWidget *tab_3;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1230, 763);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1221, 711));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 951, 91));
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(50, 120, 361, 321));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 1091, 191));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(560, 210, 171, 31));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 270, 151, 51));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 340, 151, 51));
        listView = new QListView(tab_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 200, 501, 411));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 1041, 91));
        tableWidget = new QTableWidget(tab_3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 110, 811, 421));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(870, 120, 211, 71));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(870, 220, 211, 71));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1230, 26));
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
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\272\320\273\320\260\321\201\321\201, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\261\321\203\320\264\320\265\321\202 \320\262\321\201\321\202\320\260\320\262\320\273\321\217\321\202\321\214 \320\262 \321\202\320\265\320\272\321\201\321\202 \321\201\320\277\320\265\321\206\321\201\320\270\320\274\320\262\320\276\320\273\321\213 (4\342\200\2235). \320\237\321\200\320\270\320\263\320\276\320\264\320\270\321\202\321\201\321\217 \320\264\320\273\321\217 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262, \320\264\320\273\321\217 \320\272\320\276\321\202\320\276\321\200\321\213\321\205</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\320\275\320\265\321\202 \320\272\320\273\320\260\320\262\320\270\321\210\320\270 \320\275\320\260 \320\272\320\273\320\260\320\262"
                        "\320\270\320\260\321\202\321\203\321\200\320\265, \320\275\320\276 \320\276\320\275\320\270 \321\207\320\260\321\201\321\202\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\216\321\202\321\201\321\217 \320\262 \321\202\320\265\320\272\321\201\321\202\320\265: \302\251 \342\200\224 \320\267\320\275\320\260\320\272 \320\276\321\205\321\200\320\260\320\275\321\213 \320\260\320\262\321\202\320\276\321\200\321\201\320\272\320\276\320\263\320\276 \320\277\321\200\320\260\320\262\320\260, \342\200\260 \342\200\224 \320\277\321\200\320\276\320\274\320\270\320\273\320\273\320\265, \302\256,</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\342\202\254 \342\200\224 \320\265\320\262\321\200\320\276, \342\202\275 \342\200\224 \321\200\321\203\320\261\320\273\321\214. \320\235\320\260\320\277\321\200\320\270\320\274\320\265\321\200, \320\262\320\262\320\276\320\264 \321\200\321\203\320\261\320\273\321\217 \320\262 \320\277\321\200\320\276\320\263"
                        "\321\200\320\260\320\274\320\274\320\265 #@RUB@, \320\270\320\273\320\270 \321\200\321\203\320\261. (\320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\267\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\260 \320\267\320\275\320\260\320\272).</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2261", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217\320\274\320\270 \321\217\320\267\321\213\320\272\320\276\320\262 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 (\320\241++, Python, Java, C#, PHP, JavaScript). \320\224\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \321\201\320\277\320\270\321\201\320\272\320\260</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\321\200\321\217\320\264\320\276\320\274 \320\276\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\270\320\272\320\276\320\275\320\272\321\203 \321\201 \320\273\320\276\320"
                        "\263\320\276\321\202\320\270\320\277\320\276\320\274 \321\217\320\267\321\213\320\272\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217. \320\237\321\200\320\265\320\264\321\203\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \321\202\320\265\320\272\321\201\321\202\320\260 \320\262 \320\272\320\260\320\266\320\264\320\276\320\274 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\265</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\321\201\320\277\320\270\321\201\320\272\320\260. \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320"
                        "\265\320\275\320\270\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265. \320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\321\203 \320\264\320\273\321\217 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\275\320\276\320\262\320\276\320\263\320\276 \321\217\320\267\321\213\320\272\320\260 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\320\262 \321\201\320\277\320\270\321\201\320\276\320\272. \320\230\320\272\320\276\320\275\320\272\321\203 \320\264\320\273\321\217 \320\275\320\265\320\263\320\276 \320\277\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\273\321\216\320\261\321\203\321\216 (\320\277\320\276-\321\203\320\274\320\276\320\273\321"
                        "\207\320\260\320\275\320\270\321\216). \320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\275\320\276\320\277\320\272\321\203 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260 (\320\262 \321\215\321\202\320\276\320\274 \321\201\320\273\321\203\321\207\320\260\320\265</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\264\320\276\320\273\320\266\320\265\320\275 \320\261\321\213\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275). \320\241\320\276\320\267\320\264\320\260\321\202\321\214 CheckBox \320\270 \320\272\320\276\320\263\320\264\320\260 \320\261\321\203\320\264\320\265\321\202 \321\201\321\202\320\276\321\217\321\202\321\214 \320\263\320\260\320\273\320\276\321\207\320\272\320\260, \320\276\321\202"
                        "\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\262 \321\200\320\265\320\266\320\270\320\274\320\265 \320\270\320\272\320\276\320\275\320\276\320\272 (\320\275\321\203\320\266\320\265\320\275 \320\274\320\265\321\202\320\276\320\264</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">setViewMode()). \320\232\320\276\320\263\320\264\320\260 \320\263\320\260\320\273\320\276\321\207\320\272\320\260 \320\275\320\265 \321\201\321\202\320\276\320\270\321\202, \321\202\320\276 \321\201\320\277\320\270\321\201\320\276\320\272 \320\264\320\276\320\273\320\266\320\265\320\275 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\260\321\202\321\214\321\201\321\217 \320\262 \320\276\320\261\321\213\321\207\320\275\320\276\320\274 \321\200\320\265\320\266\320\270\320\274\320\265. \320\237\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\260: \320\270\321\201\320\277\320\276\320\273\321\214"
                        "\320\267\321\203\320\271\321\202\320\265 \321\201\320\277\321\200\320\260\320\262\320\272\321\203 qt, \320\262\321\213\320\267\320\276\320\262 F1.</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\270\320\272\320\276\320\275\320\276\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2262", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">*\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \321\201\320\276 \321\201\321\202\320\276\320\273\320\261\321\206\320\260\320\274\320\270: \342\204\226, \320\230\320\274\321\217 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260, IP \320\260\320\264\321\200\320\265\321\201, MAC \320\260\320\264\321\200\320\265\321\201. \320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \320\264\320\260\320\275\320\275\321\213\320\274\320\270. \320\237\321\200\320\265\320\264\321\203\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\275\320\265\321"
                        "\201\320\272\320\276\320\273\321\214\320\272\320\270\321\205 \321\201\321\202\321\200\320\276\320\272 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 (\320\276\320\275\320\270 \320\274\320\276\320\263\321\203\321\202 \320\270\320\264\321\202\320\270 \320\275\320\265 \320\277\320\276\320\264\321\200\321\217\320\264). \320\224\320\273\321\217 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\275\321\213\321\205 \321\201\321\202\321\200\320\276\320\272, \320\277\320\276 \320\275\320\260\320\266\320\260\321\202\320\270\321\216 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276\320\272\321\200\320\260\321\201\320\270\321\202\321\214</span></p><p><span style=\" font-family:'Helvetica','sans-serif'; font-size:10pt; color:#2c2d30;\">\320\267\320\260\320\264\320\275\320\270\320\271 \321\204\320\276\320\275 \320\262 \320\264\321\200\321\203\320\263\320\276\320\271 \321\206\320\262\320\265\321\202.</span><span style=\" font-size:10pt;\"/></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\321\200\320\260\321\201\320\270\321\202\321\214 \321\204\320\276\320\275 \321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \342\204\2263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#include "mainwindow.hpp"

#include <QApplication>
//#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //QTranslator translator;
    //translator.load(":/translations/QtLanguage_en.qm");
   // a.installTranslator(&translator);

    MainWindow w;
    w.show();
    return a.exec();
}

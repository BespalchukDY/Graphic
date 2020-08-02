#include "downloadergui.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DownloaderGUI w;
    w.show();
    return a.exec();
}

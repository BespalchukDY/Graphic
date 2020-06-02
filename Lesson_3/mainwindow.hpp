#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QNetworkAccessManager>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_Save_clicked();

    void on_Button_Open_clicked();

    void on_Button_Help_clicked();

    void on_Button_Find_clicked();

private:
    Ui::MainWindow *ui;
    QString getHtml(const QString& url);
    QStringList getData(const QString& html);
    int rows;
};
#endif // MAINWINDOW_HPP

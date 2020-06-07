#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QKeyEvent>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:

    virtual void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
    QString key;
    QString program;

signals:
    void signal__setTitleText(QString);
    void signal__cmd();

private slots:
    void slot__setTitleText(QString);
    void on_comboBox_activated(const QString &arg1);
    void on_comboBox_2_activated(const QString &arg1);
    void slot__cmd();

};
#endif // MAINWINDOW_HPP

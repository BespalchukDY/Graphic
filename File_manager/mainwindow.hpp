#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QGridLayout>
#include <QComboBox>
#include <QLabel>
#include "controller.hpp"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLineEdit *searchEdit;
    QPushButton *startFindButton;
    QTextEdit *infoText;
    QComboBox *selDrive;
    Controller *controllerl;
    QLabel *statusLabel;

private slots:
    void findFileSlot();
    void changStatusLabel(QString);
    void printFindFile(QString);
};
#endif // MAINWINDOW_HPP

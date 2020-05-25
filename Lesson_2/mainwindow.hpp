#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QtWidgets>
#include "parsetext.hpp"
#include "lstvw.hpp"
#include "delegates.hpp"



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

void on_plainTextEdit_textChanged();

void on_checkBox_clicked();

void on_pushButton_clicked();

void on_pushButton_2_clicked();

void on_pushButton_3_clicked();

void on_pushButton_4_clicked();

private:
Ui::MainWindow *ui;

ParseText *parseText;

lstVw *LstVW;

QStandardItemModel *model;

int rows;

};
#endif // MAINWINDOW_HPP

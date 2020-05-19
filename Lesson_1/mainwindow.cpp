//Задания выполнил Беспальчук Денис

#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/resource/img/tre.PNG");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();

    ui->label_pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toInt();
        double b = ui->lineEdit_2->text().toInt();
        double c = ui->lineEdit_3->text().toInt();

        if (a != 0) {
                double D = (qPow(b,2)) - (4 * a * c);
                double x1 = (-b + qSqrt(D)) / (2 * a);
                double x2 = (-b - qSqrt(D)) / (2 * a);

                if (D < 0) {
                    ui->label->setText("Уравнение не имеет корней");
                }
                else if (D == 0) {
                     ui->label->setText("Уравнение имеет один корень: x = " + QString::number(x1));
                }
                else {
                    ui->label->setText("Уравнение имеет два корня: x1 = " + QString::number(x1) + " x2 = " + QString::number(x2));
                }
        }
        else {
            double x = - c / b;
            ui->label->setText("Уравнение имеет один корень: x = " + QString::number(x));
        }
}

void MainWindow::on_pushButton_2_clicked()
{
    double a1 = ui->lineEdit_4->text().toDouble();
        double b1 = ui->lineEdit_5->text().toDouble();
        double c1 = ui->lineEdit_6->text().toDouble();
        double a2 = ui->lineEdit_7->text().toDouble();
        double b2 = ui->lineEdit_8->text().toDouble();
        double c2 = ui->lineEdit_9->text().toDouble();

        if (ui->radioButton->isChecked()) {
            double pi = 3.1415926535;
            a2 = a2 * pi / 180;
            b2 = b2 * pi / 180;
            c2 = c2 * pi / 180;
        }

        double x1 = qSqrt((qPow(b1, 2) + qPow(c1, 2)) - (2 * b1 * c1 * qCos(a2)));
        double x2 = qSqrt(qPow(a1, 2) + qPow(c1, 2) - 2 * a1 * c1 * qCos(c2));
        double x3 = qSqrt(qPow(a1, 2) + qPow(b1, 2) - 2 * a1 * b1 * qCos(b2));
        if (b1 != 0 && c1 != 0) {
            ui->label_2->setText("Длина стороны равна " + QString::number(x1));
        }
        else if (a1 != 0 && c1 != 0) {
             ui->label_2->setText("Длина стороны равна " + QString::number(x2));
        }
       else {
            ui->label_2->setText("Длина стороны равна " + QString::number(x3));
        }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString fixstr = ui->plainTextEdit->toPlainText();
        ui->textEdit->insertPlainText(fixstr);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString txt = ui->plainTextEdit->toPlainText();
        ui->textEdit->setHtml("<font color='red'>Hello World!</font>");
}

void MainWindow::on_pushButton_5_clicked()
{
    QTextDocument* str = ui->textEdit_2->document();

     QFont sansFont("Helvetica", 20);
     str->setDefaultFont(sansFont);
     ui->textEdit_2->setDocument(str);
}

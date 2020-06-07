#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->plainTextEdit_2->setReadOnly(true);
        QPlainTextEdit* pte = ui->plainTextEdit;
        roAct = new QAction("Только чтение(ВКЛ)", pte);
        pte->addAction(roAct);
        pte->setContextMenuPolicy(Qt::ActionsContextMenu);
        pte->connect(roAct, SIGNAL(triggered()), this, SLOT(read_only_switch()));

        QFile file ("./lasttext.txt");
        if (file.open(QIODevice::ReadOnly))
        {
            QByteArray byteArray = file.readAll(); // считываем весь файл
            ui->plainTextEdit->setPlainText(tr(byteArray.data()));
            ui->plainTextEdit_2->setPlainText("lasttext.txt");
            file.close();
        }

        edit = true;
        read_only = false;
}

MainWindow::~MainWindow()
{
    QFile file ("./lasttext.txt");

        if (file.open(QIODevice::WriteOnly))
        {
            QString s = ui->plainTextEdit->toPlainText();
            QByteArray barr = s.toUtf8();          // преобразуем строку в
                                                   // последовательность байт
                                                   // кодировка текста UTF-8
            file.write(barr, barr.length());       // записываем
            file.close();
        }
    delete ui;
}

void MainWindow::on_Button_Open_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Открыть", QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray byteArray = file.readAll();
        ui->plainTextEdit->setPlainText(byteArray.data());
        file.close();
    }
}

void MainWindow::on_Button_Save_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this, "Сохранить", QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QString str = ui->plainTextEdit->toPlainText();
        QByteArray arr = str.toUtf8();
        file.write(arr, arr.length());
        file.close();
    }
}

void MainWindow::on_btn_undo_clicked()
{
    edit = false;
    if (!read_only)
    {
        if (cur_undo_pos > 0)
        {
            cur_undo_pos--;
            QString s = undo_list.at(cur_undo_pos);
            ui->plainTextEdit->setPlainText(s);
        }
    }
}


void MainWindow::on_btn_redo_clicked()
{
    edit = false;
    if (!read_only)
    {
        if (undo_list.size() - 1 >= (cur_undo_pos + 1))
        {
            cur_undo_pos++;
            QString s = undo_list.at(cur_undo_pos);
            ui->plainTextEdit->setPlainText(s);
        }
    }

}

void MainWindow::on_desc_btn_clicked()
{
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information);
    QFile file ("://res.txt");
    file.open(QIODevice::ReadOnly);
    QByteArray byteArray = file.readAll();
    msgBox.setText(tr(byteArray.data()));
    msgBox.exec();
}

void MainWindow::on_plainTextEdit_textChanged()
{
    if (!read_only)
    {
        if (edit)
        {
            QString s = ui->plainTextEdit->toPlainText();
            if (!undo_list.isEmpty() && undo_list.last() != s)
            {
                undo_list.append(s);
                cur_undo_pos++;
            }
            else if (undo_list.isEmpty())
            {
                undo_list.append(s);
                cur_undo_pos = 0;
            }
        }
    }
    edit = true;
}

void MainWindow::read_only_switch()
{
    if (!read_only)
    {
        read_only = true;
        roAct->setText("Только чтение(ВЫКЛ)");
        ui->plainTextEdit->setReadOnly(true);
    }
    else
    {
        read_only = false;
        roAct->setText("Только чтение(ВКЛ)");
        ui->plainTextEdit->setReadOnly(false);
    }
}

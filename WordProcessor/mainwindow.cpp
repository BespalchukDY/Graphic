#include "mainwindow.hpp"
#include "ui_mainwindow.h"

/*
1. Добавить в текстовый редактор выбор из нескольких таблиц стилей. Сделать темную и светлую тему.
2. Перевести текстовый редактор на английский язык (названия кнопок из предыдущих заданий).
Добавить возможность динамически переключать языки во время работы приложения.
*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItems(QStringList() << "ru_RU" << "en_US");
    connect(ui->comboBox, static_cast<void (QComboBox::*)(const QString &)>(&QComboBox::currentIndexChanged),
                [=](const QString &str){
            qtLanguageTranslator.load("://QtLanguage_" + str, ".");
            qApp->installTranslator(&qtLanguageTranslator);
        });

        qtLanguageTranslator.load(QString("://QtLanguage_") + QString("ru_RU"));
        qApp->installTranslator(&qtLanguageTranslator);

        setWindowTitle(tr("Текстовый редактор"));
        QPlainTextEdit* pte = ui->plainTextEdit;
        roAct = new QAction(tr("Только чтение(ВКЛ)"), pte);
        pte->addAction(roAct);
        pte->setContextMenuPolicy(Qt::ActionsContextMenu);
        pte->connect(roAct, SIGNAL(triggered()), this, SLOT(read_only_switch()));

        QFile file ("./lasttext.txt");
        if (file.open(QIODevice::ReadOnly))
        {
            QByteArray byteArray = file.readAll();
            ui->plainTextEdit->setPlainText(tr(byteArray.data()));
            file.close();
        }
        edit = true;
        read_only = false;
}

MainWindow::~MainWindow()
{
    QFile file ("./lasttext.txt");
    if (file.open(QIODevice::WriteOnly)) {
        QString s = ui->plainTextEdit->toPlainText();
        QByteArray barr = s.toUtf8();
        file.write(barr, barr.length());
        file.close();
    }
    delete ui;
}

void MainWindow::on_Button_Open_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Открыть"), QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray byteArray = file.readAll();
        ui->plainTextEdit->setPlainText(byteArray.data());
        file.close();
    }
}

void MainWindow::on_Button_Save_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this, tr("Сохранить"), QDir::currentPath(), "Text(*.txt)");
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
    if (!read_only) {
        if (cur_undo_pos > 0) {
            cur_undo_pos--;
            QString s = undo_list.at(cur_undo_pos);
            ui->plainTextEdit->setPlainText(s);
        }
    }
}


void MainWindow::on_btn_redo_clicked()
{
    edit = false;
    if (!read_only) {
        if (undo_list.size() - 1 >= (cur_undo_pos + 1)) {
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
    if (!read_only) {
        if (edit) {
            QString s = ui->plainTextEdit->toPlainText();
            if (!undo_list.isEmpty() && undo_list.last() != s) {
                undo_list.append(s);
                cur_undo_pos++;
            }
            else if (undo_list.isEmpty()) {
                undo_list.append(s);
                cur_undo_pos = 0;
            }
        }
    }
    edit = true;
}

void MainWindow::read_only_switch()
{
    if (!read_only) {
        read_only = true;
        roAct->setText(tr("Только чтение(ВЫКЛ)"));
        ui->plainTextEdit->setReadOnly(true);
    }
    else {
        read_only = false;
        roAct->setText(tr("Только чтение(ВКЛ)"));
        ui->plainTextEdit->setReadOnly(false);
    }
}

void MainWindow::on_radioButton_clicked()
{
    setStyleSheet("QMainWindow {background-color:DimGrey}"
                  "QPushButton {color:Aqua; background-color:SlateGray}"
                  "QRadioButton {color:Aqua}"
                  "QLabel {color:Aqua}"
                  "QPlainTextEdit {color:Aqua; background-color:Silver}");
}

void MainWindow::on_radioButton_2_clicked()
{
    setStyleSheet("QMainWindow {background-color:Snow}"
                  "QPushButton {color:MediumBlue; background-color:Ivory}"
                  "QRadioButton {color:MediumBlue}"
                  "QLabel {color:MediumBlue}"
                  "QPlainTextEdit {color:MediumBlue; background-color:Azure}");
}

void MainWindow::changeEvent(QEvent *event)
{

    if (event->type() == QEvent::LanguageChange) {
        ui->retranslateUi(this);
    }
}

// Задания выполнил Беспальчук Денис

#include "mainwindow.hpp"
#include "ui_mainwindow.h"

/*
    1. Ваш первый проект на данном курсе - текстовый редактор.
    Добавьте на форму виджет текстового редактора.
    Добавьте две кнопки: сохранить и открыть.
    Предоставьте возможность пользователю выбрать куда сохранять файл и какой файл открывать.
    Добавьте в текстовый редактор справку. Текстовый файл с описанием разместить в ресурсах программы.

    2. В этом задании нужно создать парсер Авито (будем рассматривать только Москву).
    Пользователь должен иметь возможность вводить запрос (то, что он хочет найти).
    После этого с сайта авито с первой страницы нужно получить следующую информацию:
    название объявления, ссылку на объявление, цена, метро (если есть), сколько метров от метро (если есть).
    Эту информацию нужно отобразить в виде таблицы.
*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    rows = 1;
    ui->tableWidget->setColumnCount(5);
    QStringList name_table;
    name_table << "Название обьявления" << "Ссылка на объявление" << "Цена" << "Метро" << "Расстояние от метро";
    ui->tableWidget->setHorizontalHeaderLabels(name_table);
    ui->tableWidget->setRowCount(rows);

    for (int i = 0; i < 5; i++)
    {
        ui->tableWidget->setItem(0, i, new QTableWidgetItem);
        ui->tableWidget->resizeColumnsToContents();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_Open_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Открыть", QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray byteArray = file.readAll();
        ui->plainTextEdit->setPlainText(byteArray.data());
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
    }
}

void MainWindow::on_Button_Help_clicked()
{
    QFile file(":/input.txt");
    if (file.open(QIODevice::ReadOnly)) {
        QByteArray byteArray = file.readAll();
        ui->plainTextEdit->setPlainText(byteArray.data());
    }
}

void MainWindow::on_Button_Find_clicked()
{
    QString s = ui->lineEdit->text();
    QString url = "https://avito.ru/moskva?q=" + s;
    QString html = getHtml(url);
    if (html.isEmpty()) {
        ui->plainTextEdit->setPlainText("Ошибка!");
        return;
    }

    QStringList data = getData(html);

   // ui->tableWidget->setPlainText(html);

    rows++;
    ui->tableWidget->setRowCount(rows);
    for (int i = 0;i < 5;i++) {
        ui->tableWidget->setItem(rows-1, i, new QTableWidgetItem);
    }

   // ui->tableWidget->setText(data[0]);
  //  ui->tableWidget->setText(data[1]);
}

// Получение HTML по адресу страницы
QString MainWindow::getHtml(const QString &url)
{
    QNetworkAccessManager manager;
    QNetworkReply *response = manager.get(QNetworkRequest(QUrl(url)));
    QEventLoop event;
    QObject::connect(response,SIGNAL(finished()), &event, SLOT(quit()));
    event.exec();
    response->deleteLater();
    return response->readAll();
}

// Поиск всех совпадений с регулярным выражением
QStringList MainWindow::getData(const QString &html)
{
    QStringList list;
    QRegExp regex("(<span class=\"snippet-price snippet-price-vas\" data-shape=\"default\" data-marker=\"item-price\">)([\\d,]+)(</span>)");
    QRegExp regex1("<a class=\"snippet-link\" itemprop=\"url\" href=\"/moskva/predlozheniya_uslug/kompyuternaya_diagnostika_bmw_1895379366\" target=\"_blank\" title=\"Компьютерная диагностика BMW в Москве\">Компьютерная диагностика BMW</a>");
    QRegExp regex2("(<span class=\"item-address-georeferences-item__content\">)([\\s]+)(</span>)");
    QRegExp regex3("(<span class=\"item-address-georeferences-item__after\">)([\\d,]+)(</span>)");
    QRegExp regex4("<input type=\"text\" id=\"search\" placeholder=\"Поиск по объявлениям\" autocomplete=\"off\" spellcheck=\"false\" maxlength=\"100\" data-marker=\"search-form/suggest\" class=\"suggest-root-1v2AH js-suggest suggest_search\" value=\"программа\">");

    int lastPos = 0;
    while ((lastPos = regex.indexIn(html, lastPos)) != -1) {
        lastPos += regex.matchedLength();
        list.append(regex.cap(2));
    }
    return list;
}

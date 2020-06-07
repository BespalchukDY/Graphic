// Задания выполнил Беспальчук Денис

#include "mainwindow.hpp"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
    Задание №1
    Написать класс, который будет вставлять в текст спецсимволы (4–5). Пригодится для символов, для которых
    нет клавиши на клавиатуре, но они часто используются в тексте: © — знак охраны авторского права, ‰ — промилле, ®,
    € — евро, ₽ — рубль. Например, ввод рубля в программе #@RUB@, или руб. (автоматически заменить на знак).
    */

    parseText = new ParseText();
    if (!parseText) close();

    /*
    Задание №2
    Создать список с названиями языков программирования (С++, Python, Java, C#, PHP, JavaScript). Для каждого элемента списка
    рядом отобразить иконку с логотипом языка программирования. Предусмотреть возможность изменения текста в каждом элементе
    списка. Добавить возможность перемещения элементов в списке. Создать кнопку для добавления нового языка программирования
    в список. Иконку для него поставить любую (по-умолчанию). Создать кнопку для удаления элемента из списка (в этом случае
    элемент должен быть выбран). Создать CheckBox и когда будет стоять галочка, отобразить список в режиме иконок (нужен метод
    setViewMode()). Когда галочка не стоит, то список должен отображаться в обычном режиме. Подсказка: используйте справку qt, вызов F1.
    */

    model = new QStandardItemModel(this);
    LstVW = new lstVw(model);
    if (!LstVW) close();

    ui->listView->setModel(model);
    ui->listView->setAcceptDrops(true);
    ui->listView->setDragEnabled(true);
    ui->listView->setDefaultDropAction(Qt::MoveAction);

    /*
    Задание №3
    *Создать таблицу со столбцами: №, Имя компьютера, IP адрес, MAC адрес. Заполнить таблицу данными. Предусмотреть
    возможность нескольких строк в таблице (они могут идти не подряд). Для выделенных строк, по нажатию на кнопку покрасить
    задний фон в другой цвет.
    */

    rows = 1;
    ui->tableWidget->setColumnCount(4);
    QStringList name_table;
    name_table << "№" << "Имя компьютера" << "IP адрес" << "MAC адрес";
    ui->tableWidget->setHorizontalHeaderLabels(name_table);
    ui->tableWidget->setRowCount(rows);
    CInputMaskDelegate *d = new CInputMaskDelegate();
    for (int i = 0; i < 4; i++)
    {
        ui->tableWidget->setItem(0, i, new QTableWidgetItem);
        ui->tableWidget->resizeColumnsToContents();
    }

    ui->tableWidget->setItemDelegateForColumn(2, d);
    ui->tableWidget->setItemDelegateForColumn(3, d);
}

MainWindow::~MainWindow()
{
    if (parseText) {
    delete parseText;
    parseText = nullptr;
    }

    if (LstVW) {
        delete LstVW;
        LstVW = nullptr;
    }

    delete ui;
}

void MainWindow::on_plainTextEdit_textChanged()
{
    QString str = ui->plainTextEdit->toPlainText();

    qint32 pos = 0;

    while(true) {
        int fnd = str.indexOf("#@", pos);

        if (fnd == -1) return;

        pos = fnd + 1;
        int t = str.indexOf('@', fnd + 2);

        if (t > 0 && t > (fnd + 1)) {
            str = parseText->calc(fnd, t, str);
            QTextCursor cursor = ui->plainTextEdit->textCursor();
            ui->plainTextEdit->setPlainText(str);
            ui->plainTextEdit->setTextCursor(cursor);
        }
    }
}

void MainWindow::on_checkBox_clicked()
{
    if (ui->checkBox->isChecked()) {
        ui->listView->setViewMode(QListView::IconMode);
    }
    else {
        ui->listView->setViewMode(QListView::ListMode);
    }

    ui->listView->setAcceptDrops(true);
    ui->listView->setDragEnabled(true);
    ui->listView->setDragDropMode(QAbstractItemView::DragDrop);
    ui->listView->setDefaultDropAction(Qt::MoveAction);
}

void MainWindow::on_pushButton_clicked()
{
    model->appendRow(new QStandardItem(QIcon("./Icons/XXX.png"), "newElement"));
}

void MainWindow::on_pushButton_2_clicked()
{
    QModelIndexList indexes = ui->listView->selectionModel()->selectedRows();
    while (!indexes.isEmpty()) {
        model->removeRows(indexes.last().row(), 1);
        indexes.removeLast();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    rows++;
    ui->tableWidget->setRowCount(rows);
    for (int i = 0;i < 4;i++) {
        ui->tableWidget->setItem(rows-1, i, new QTableWidgetItem);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    int i= ui->tableWidget->currentRow();
    for (int j = 0;j < 4;j++) {
        ui->tableWidget->item(i, j)->setBackground(Qt::green);
    }
}

QWidget* CInputMaskDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QLineEdit *editor = new QLineEdit(parent);
    editor->setInputMask("000.000.000.000");
    return editor;
}

CInputMaskDelegate::CInputMaskDelegate()
{

}

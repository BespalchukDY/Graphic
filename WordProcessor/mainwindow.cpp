#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <rustextedit.hpp>

/*
1. Добавить меню в текстовый редактор.
2. Добавить в текстовый редактор кнопку для вывода на печать.
3. *Добавить в текстовый редактор поддержку многодокументного интерфейса.
*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
        , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    setWindowTitle(tr("Текстовый редактор"));



    QWidget* centralW = new QWidget(this);
    setCentralWidget(centralW);

    mdiArea = new QMdiArea(this);

    QGridLayout* layout = new QGridLayout(this);
    centralW->setLayout(layout);
    layout->addWidget(mdiArea, 1, 0, 10, 1);

    QLabel* label = new QLabel(this);
    label->setText(tr("1.Добавить меню в текстовый редактор.\n2.Добавить в текстовый редактор кнопку для вывода на печать.\n3.*Добавить в текстовый редактор поддержку многодокументного интерфейса."));
    layout->addWidget(label, 0, 0, 1, 1);

    QPlainTextEdit* plainTextEdit = new rustextedit(this);
    mdiArea->addSubWindow(plainTextEdit);
    mdiArea->cascadeSubWindows();

        QMenu* fileMenu = menuBar()->addMenu(tr("Файл"));

        QAction* openAct = fileMenu->addAction(tr("Открыть"));
        connect(openAct, SIGNAL(triggered(bool)), this, SLOT(openText()));

        QAction* saveAct = fileMenu->addAction(tr("Сохранить"));
        connect(saveAct, SIGNAL(triggered(bool)), this, SLOT(saveText()));

        QAction* printAct = fileMenu->addAction(tr("Печать"));
        connect(printAct, SIGNAL(triggered(bool)), this, SLOT(printText()));

        fileMenu->addSeparator();
        QAction* helpAct = fileMenu->addAction(tr("О программе"));
        connect(helpAct, SIGNAL(triggered(bool)), this, SLOT(helpText()));

        fileMenu->addSeparator();
        QAction* quitAct = fileMenu->addAction(tr("Выход"));
        connect(quitAct, SIGNAL(triggered(bool)), this, SLOT(close()));

        QMenu* themeMenu = menuBar()->addMenu(tr("Выбрать тему"));

        QAction* themeAct = themeMenu->addAction(tr("Темная тема"));
        connect(themeAct, SIGNAL(triggered(bool)), this, SLOT(darkTheme()));

        QAction* themeAct2 = themeMenu->addAction(tr("Светлая тема"));
        connect(themeAct2, SIGNAL(triggered(bool)), this, SLOT(lightTheme()));

        comboBox = new QComboBox(this);
        comboBox->addItems(QStringList() << "ru_RU" << "en_US");
        connect(comboBox, static_cast<void (QComboBox::*)(const QString &)>(&QComboBox::currentIndexChanged),
                [=](const QString &str){
            qtLanguageTranslator.load("://QtLanguage_" + str, ".");
            qApp->installTranslator(&qtLanguageTranslator);
        });
        qtLanguageTranslator.load(QString("://QtLanguage_") + QString("ru_RU"));
        qApp->installTranslator(&qtLanguageTranslator);
        layout->addWidget(comboBox, 0, 1, 1, 1);

}

MainWindow::~MainWindow()
{
    QMdiSubWindow* activSubWindow = mdiArea->activeSubWindow();
    QWidget* wdg = activSubWindow->widget();
    QPlainTextEdit* plainTextEdit = (QPlainTextEdit*)wdg;
    QFile file ("./lasttext.txt");
    if (file.open(QIODevice::WriteOnly)) {
        QString s = plainTextEdit->toPlainText();
        QByteArray barr = s.toUtf8();
        file.write(barr, barr.length());
        file.close();
    }
    delete ui;
}

void MainWindow::saveText()
{
    QMdiSubWindow* activSubWindow = mdiArea->activeSubWindow();
    QWidget* wdg = activSubWindow->widget();
    QPlainTextEdit* plainTextEdit = (QPlainTextEdit*)wdg;
    QString filename = QFileDialog::getSaveFileName(this, tr("Сохранить"), QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QString str = plainTextEdit->toPlainText();
        QByteArray arr = str.toUtf8();
        file.write(arr, arr.length());
        file.close();
    }
}

void MainWindow::printText()
{
    QMdiSubWindow* activSubWindow = mdiArea->activeSubWindow();
    QWidget* wdg = activSubWindow->widget();
    QPlainTextEdit* plainTextEdit = (QPlainTextEdit*)wdg;
    QPrinter printer;
    QPrintDialog dlg(&printer, this);
    if(dlg.exec() == QDialog::Accepted) {
        plainTextEdit->print(&printer);
    }
}

void MainWindow::helpText()
{
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information);
    QFile file ("://res.txt");
    file.open(QIODevice::ReadOnly);
    QByteArray byteArray = file.readAll();
    msgBox.setText(tr(byteArray.data()));
    msgBox.exec();
}

void MainWindow::darkTheme()
{
    setStyleSheet("QMainWindow {background-color:DimGrey}"
                  "QPushButton {color:Aqua; background-color:SlateGray}"
                  "QRadioButton {color:Aqua}"
                  "QLabel {color:Aqua}"
                  "QPlainTextEdit {color:Aqua; background-color:Silver}");
}

void MainWindow::lightTheme()
{
    setStyleSheet("QMainWindow {background-color:Snow}"
                  "QPushButton {color:MediumBlue; background-color:Ivory}"
                  "QRadioButton {color:MediumBlue}"
                  "QLabel {color:MediumBlue}"
                  "QPlainTextEdit {color:MediumBlue; background-color:Azure}");
}

void MainWindow::openText()
{
    mdiArea->addSubWindow(new QPlainTextEdit(this))->show();
    QMdiSubWindow* activSubWindow = mdiArea->activeSubWindow();
    QWidget* wdg = activSubWindow->widget();
    QPlainTextEdit* plainTextEdit = (QPlainTextEdit*)wdg;

    QString filename = QFileDialog::getOpenFileName(this, tr("Открыть"), QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray byteArray = file.readAll();
        plainTextEdit->setPlainText(byteArray.data());
        plainTextEdit->setWindowTitle(filename);
        file.close();
    }
}

void MainWindow::createText()
{
    QPlainTextEdit* plainTextEdit = new QPlainTextEdit(this);
    mdiArea->addSubWindow(plainTextEdit);
    plainTextEdit->setWindowTitle(tr("Новый"));
    plainTextEdit->show();
}

void MainWindow::changeEvent(QEvent *event)
{

    if (event->type() == QEvent::LanguageChange) {
        qApp->processEvents();
    }
}


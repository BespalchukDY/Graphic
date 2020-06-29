#include "mainwindow.hpp"
#include "rustextedit.hpp"

/*
    В проект "Текстовый редактор" добавить:
    a. возможность копировать формат фрагмента текста и применять к другому фрагменту.
    b. возможность выбора шрифта.
*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Текстовый редактор"));

    mdiArea = new QMdiArea(this);

    centralW = new QWidget(this);
    setCentralWidget(centralW);

    layout = new QGridLayout(this);
    centralW->setLayout(layout);
    layout->addWidget(mdiArea, 1, 0, 10, 1);

    label = new QLabel(this);
    label->setText(tr("В проект \"Текстовый редактор\" добавить:\na. возможность копировать формат фрагмента текста и применять к другому фрагменту.\nb. возможность выбора шрифта."));
    layout->addWidget(label, 0, 0, 1, 1);

    comboBox = new QComboBox(this);
    comboBox->addItems(QStringList() << "ru_RU" << "en_US");
    connect(comboBox, static_cast<void (QComboBox::*)(const QString &)>(&QComboBox::currentIndexChanged),
            [=](const QString &str){
        Translator.load("://QtLanguage_" + str, ".");
        qApp->installTranslator(&Translator);
    });
    Translator.load(QString("://QtLanguage_") + QString("ru_RU"));
    qApp->installTranslator(&Translator);
    layout->addWidget(comboBox, 0, 1, 1, 1);

    tEdit = new rustextedit(this);
    mdiArea->addSubWindow(tEdit);
    tEdit->setWindowTitle(tr("Безымянный"));

        fileMenu = menuBar()->addMenu(tr("Файл"));

        createAct = fileMenu->addAction(tr("Создать"));
        connect(createAct, SIGNAL(triggered(bool)), this, SLOT(createText()));

        openAct = fileMenu->addAction(tr("Открыть"));
        connect(openAct, SIGNAL(triggered(bool)), this, SLOT(openText()));

        saveAct = fileMenu->addAction(tr("Сохранить"));
        connect(saveAct, SIGNAL(triggered(bool)), this, SLOT(saveText()));

        printAct = fileMenu->addAction(tr("Печать"));
        connect(printAct, SIGNAL(triggered(bool)), this, SLOT(printText()));

        fileMenu->addSeparator();

        helpAct = fileMenu->addAction(tr("О программе"));
        connect(helpAct, SIGNAL(triggered(bool)), this, SLOT(helpText()));

        fileMenu->addSeparator();

        quitAct = fileMenu->addAction(tr("Выход"));
        connect(quitAct, SIGNAL(triggered(bool)), this, SLOT(close()));

        themeMenu = menuBar()->addMenu(tr("Выбрать тему"));

        themeAct = themeMenu->addAction(tr("Темная тема"));
        connect(themeAct, SIGNAL(triggered(bool)), this, SLOT(darkTheme()));

        themeAct2 = themeMenu->addAction(tr("Светлая тема"));
        connect(themeAct2, SIGNAL(triggered(bool)), this, SLOT(lightTheme()));

        fontMenu = menuBar()->addMenu(tr("Шрифт"));

        setFontAct = fontMenu->addAction(tr("Изменить шрифт"));
        connect(setFontAct, SIGNAL(triggered()), this , SLOT(setFont()));

        copyFormatAct = fontMenu->addAction(tr("Копировать формат"));
        connect(copyFormatAct, SIGNAL(triggered()), this , SLOT(copyFormat()));

        pasteFormatAct = fontMenu->addAction(tr("Вставить формат"));
        connect(pasteFormatAct, SIGNAL(triggered()), this , SLOT(pasteFormat()));

        srand(clock());

}

MainWindow::~MainWindow()
{
    QFile file ("./lasttext.txt");
    if (file.open(QIODevice::WriteOnly)) {
        QString s = pTE->toPlainText();
        QByteArray barr = s.toUtf8();
        file.write(barr, barr.length());
        file.close();
    }
}

void MainWindow::saveText()
{
    QMdiSubWindow* activSubWindow = mdiArea->activeSubWindow();
    QWidget* wdg = activSubWindow->widget();
    tEdit = (QTextEdit*)wdg;
    QString filename = QFileDialog::getSaveFileName(this, tr("Сохранить"), QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        QString str = tEdit->toPlainText();
        QByteArray arr = str.toUtf8();
        file.write(arr, arr.length());
        file.close();
    }
}

void MainWindow::printText()
{
    QMdiSubWindow* activSubWindow = mdiArea->activeSubWindow();
    QWidget* wdg = activSubWindow->widget();
    tEdit = (QTextEdit*)wdg;
    QPrinter printer;
    QPrintDialog dlg(&printer, this);
    if(dlg.exec() == QDialog::Accepted) {
        tEdit->print(&printer);
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
    tEdit = (QTextEdit*)wdg;

    QString filename = QFileDialog::getOpenFileName(this, tr("Открыть"), QDir::currentPath(), "Text(*.txt)");
    QFile file(filename);
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray byteArray = file.readAll();
        tEdit->setPlainText(byteArray.data());
        tEdit->setWindowTitle(filename);
        file.close();
    }
}

void MainWindow::createText()
{
    tEdit = new QTextEdit(this);
    mdiArea->addSubWindow(tEdit);
    tEdit->setWindowTitle(tr("Новый"));
    tEdit->show();
}

void MainWindow::changeEvent(QEvent *event)
{

    if (event->type() == QEvent::LanguageChange) {
        this->label->setText(tr("В проект \"Текстовый редактор\" добавить:\na. возможность копировать формат фрагмента текста и применять к другому фрагменту.\nb. возможность выбора шрифта."));
        setWindowTitle(tr("Текстовый редактор"));
        tEdit->setWindowTitle(tr("Безымянный"));
        fileMenu->setTitle(tr("Файл"));
        createAct->setText(tr("Создать"));
        openAct->setText(tr("Открыть"));
        saveAct->setText(tr("Сохранить"));
        printAct->setText(tr("Печать"));
        helpAct->setText(tr("О программе"));
        quitAct->setText(tr("Выход"));
        themeMenu->setTitle(tr("Выбрать тему"));
        themeAct->setText(tr("Темная тема"));
        themeAct2->setText(tr("Светлая тема"));
        fontMenu->setTitle(tr("Шрифт"));
        setFontAct->setText(tr("Изменить шрифт"));
        copyFormatAct->setText(tr("Копировать формат"));
        pasteFormatAct->setText(tr("Вставить формат"));
    }
}

void MainWindow::setFont()
{
    QFont font = tEdit->textCursor().charFormat().font();
    QFontDialog fntDlg(font, this);
    bool ok;
    font = fntDlg.getFont(&ok);
    if (ok) {
        QTextCharFormat fmt;
        fmt.setFont(font);
        tEdit->textCursor().setCharFormat(fmt);
    }
}

void MainWindow::copyFormat()
{
    QMdiSubWindow *activeSubWindow = mdiArea->activeSubWindow();
    QWidget *wgt = activeSubWindow->widget();
    QTextEdit* te = (QTextEdit*)wgt;
    format = te->textCursor().charFormat();
}

void MainWindow::pasteFormat()
{
    QMdiSubWindow *activeSubWindow = mdiArea->activeSubWindow();
    QWidget *wgt = activeSubWindow->widget();
    QTextEdit* te = (QTextEdit*)wgt;
    te->textCursor().setCharFormat(format);
}

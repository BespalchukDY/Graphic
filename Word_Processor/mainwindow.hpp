#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QMdiArea>
#include <QGridLayout>
#include <QPlainTextEdit>
#include <QMdiSubWindow>
#include <QLabel>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QEvent>
#include <QMenu>
#include <QMenuBar>
#include <QPrinter>
#include <QPrintDialog>
#include <QComboBox>
#include <QTranslator>
#include <QTextEdit>
#include <QFont>
#include <QFontDialog>
#include <QToolBar>
#include <QPushButton>
#include <QTranslator>
#include <QDateTime>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void changeEvent(QEvent * event) override;


private slots:
    void openText();
    void createText();
    void saveText();
    void printText();
    void helpText();

    void darkTheme();
    void lightTheme();

    void setFont();
    void copyFormat();
    void pasteFormat();

    void pasteDate();
    void pasteTime();

private:
    QMdiArea* mdiArea;
    QPlainTextEdit* pTE;
    QAction* roAct;
    QTranslator Translator;
    QTextEdit* tEdit;
    QTextCharFormat format;
    QWidget* centralW;
    QGridLayout* layout;
    QLabel* label;
    QComboBox* comboBox;
    QMenu* fileMenu;
    QMenu* themeMenu;
    QMenu* fontMenu;
    QMenu* pasteDateTime;

    QAction* createAct;
    QAction* openAct;
    QAction* saveAct;
    QAction* printAct;
    QAction* helpAct;
    QAction* quitAct;
    QAction* themeAct;
    QAction* themeAct2;
    QAction* setFontAct;
    QAction* copyFormatAct;
    QAction* pasteFormatAct;
    QAction* pasteDateAct;
    QAction* pasteTimeAct;

};
#endif // MAINWINDOW_HPP

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
#include <QTranslator>
#include <QComboBox>
#include <QApplication>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

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


private:
    QMdiArea* mdiArea;
    QComboBox* comboBox;
    QPlainTextEdit* pTE;
    QAction* roAct;
    Ui::MainWindow *ui;
    QPlainTextEdit* plainTextEdit;
    QLabel* label;
    QTranslator qtLanguageTranslator;

};
#endif // MAINWINDOW_HPP

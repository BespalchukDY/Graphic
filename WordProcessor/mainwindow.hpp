#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTranslator>
#include <QEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QStringList undo_list;
    bool edit;
    int cur_undo_pos;
    bool read_only;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void changeEvent(QEvent * event) override;

private slots:
    void on_Button_Save_clicked();
    void on_Button_Open_clicked();
    void on_btn_undo_clicked();
    void on_btn_redo_clicked();
    void on_desc_btn_clicked();
    void on_plainTextEdit_textChanged();
    void read_only_switch();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QMenu* m_menu;
    QAction* roAct;
    QTranslator qtLanguageTranslator;

};
#endif // MAINWINDOW_HPP

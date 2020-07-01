#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QWheelEvent>
#include "graphicsitem.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsScene* scence;

private:
    Ui::MainWindow *ui;
    QGraphicsView* view;
    int counter;

protected:
    void mousePressEvent(QMouseEvent *ev) override;
    void wheelEvent(QWheelEvent *ev) override;

private slots:
        void reDraw();
};
#endif // MAINWINDOW_HPP

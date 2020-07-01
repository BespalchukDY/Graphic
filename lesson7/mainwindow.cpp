#include "mainwindow.hpp"
#include "ui_mainwindow.h"

/*
    Используя графическое представление, создать программу-окно, на которое можно добавлять графические элементы
    щелчком левой кнопки мыши на пустой области окна. Добавляемыми элементами могут быть прямоугольник, эллипс, звезда,
    они должны добавляться по очереди, т.е. первый щелчок мыши - прямоугольник, второй - эллипс, третий - звезда,
    четвертый - снова прямоугольник и т.д. Цвет фигур может быть любой. При щелчке правой кнопки мыши по элементу он должен удалиться.
    Должна быть возможность перемещать элементы, с помощью зажатой левой кнопкой мыши.
    * Для предыдущей задачи добавить: Возможность приближать и удалять изображение путем прокручивания колеса мыши.
*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    view = new QGraphicsView();
    scence = new QGraphicsScene();

    view->setScene(scence);
    this->setCentralWidget(view);
    counter = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton) {
        GraphicsItem* item;
        if (counter == 3) counter = 0;
        item = new GraphicsItem(this, counter);
        counter++;
        item->setBrush(QBrush(QColor(rand() % 256, rand() % 256, rand() % 256)));
        scence->addItem(item);
        item->setPos(ev->pos().x(), ev->pos().y());
        connect(item, SIGNAL(reDraw()), this, SLOT(reDraw()));
    }
}

void MainWindow::wheelEvent(QWheelEvent *ev)
{
    const double scalefactor = 1.15;
    if (ev->delta() > 0) {
        view->scale(scalefactor, scalefactor);
    } else {
        view->scale(1.0 / scalefactor, 1.0 / scalefactor);
    }
}

void MainWindow::reDraw()
{
    scence->update();
    this->update();
}

#ifndef TABLEWDGT_HPP
#define TABLEWDGT_HPP

#include <QMainWindow>
#include <QWidget>
#include "delegates.hpp"

class tablewdgt : public QMainWindow
{
    Q_OBJECT
public:
    tablewdgt();

private:
    int rows;
};

#endif // TABLEWDGT_HPP

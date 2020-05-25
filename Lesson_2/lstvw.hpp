#ifndef LSTVW_HPP
#define LSTVW_HPP

#include <QMainWindow>
#include <QModelIndexList>
#include <QStandardItem>

class lstVw : public QMainWindow
{
    Q_OBJECT
public:
    lstVw(QStandardItemModel *model);

private:

};

#endif // LSTVW_HPP

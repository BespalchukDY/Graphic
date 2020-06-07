#ifndef DELEGATES_HPP
#define DELEGATES_HPP

#include <QItemDelegate>

class CInputMaskDelegate : public QItemDelegate
{
public:
    CInputMaskDelegate ();
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;


};

#endif // DELEGATES_HPP

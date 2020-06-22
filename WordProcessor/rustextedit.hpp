#ifndef RUSTEXTEDIT_HPP
#define RUSTEXTEDIT_HPP

#include <QMainWindow>
#include <QObject>
#include <QPlainTextEdit>
#include <QContextMenuEvent>
#include <QMenu>
#include <QApplication>
#include <QClipboard>
#include <QEvent>

class rustextedit : public QPlainTextEdit
{
    Q_OBJECT
public:
    rustextedit(QWidget* parent = nullptr);

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;

public slots:
    void copyText();
    void pasteText();

private:
    QMenu* menu;

};

#endif // RUSTEXTEDIT_HPP

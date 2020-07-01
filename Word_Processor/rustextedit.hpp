#ifndef RUSTEXTEDIT_HPP
#define RUSTEXTEDIT_HPP

#include <QObject>
#include <QMainWindow>
#include <QPlainTextEdit>
#include <QTextEdit>
#include <QContextMenuEvent>
#include <QMenu>
#include <QApplication>
#include <QClipboard>
#include <QEvent>

class rustextedit : public QTextEdit
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
    QTextEdit* tEdit;
};

#endif // RUSTEXTEDIT_HPP

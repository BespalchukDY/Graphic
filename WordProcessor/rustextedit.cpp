#include "rustextedit.hpp"

rustextedit::rustextedit(QWidget *parent) : QPlainTextEdit(parent)
{
    menu = new QMenu(this);
    QAction* copyAct = menu->addAction(tr("Копировать"));
    connect(copyAct, SIGNAL(triggered()), this, SLOT(copyText()));

    QAction* pasteAct = menu->addAction(tr("Вставить"));
    connect(pasteAct, SIGNAL(triggered()), this, SLOT(pasteText()));

}

void rustextedit::contextMenuEvent(QContextMenuEvent *event)
{
    menu->exec(event->globalPos());
}

void rustextedit::copyText()
{
    QString str = this->textCursor().selectedText();
    qApp->clipboard()->setText(str);
}

void rustextedit::pasteText()
{
    QString text = qApp->clipboard()->text();
    this->textCursor().insertText(text);
}

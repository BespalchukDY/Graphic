#pragma once
#ifndef PARSETEXT_HPP
#define PARSETEXT_HPP

#include <QMainWindow>
#include <QTextCursor>

class ParseText : public QMainWindow
{
    Q_OBJECT
public:
    ParseText();

    QString calc(int fnd, int t, QString str);


private:
    QString txt;
    QString str;
};

#endif // PARSETEXT_HPP

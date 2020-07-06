#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <QObject>
#include <QSharedPointer>
#include "threadfinder.hpp"

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    void startFind(QString dir, QString file);

private:
    QSharedPointer<ThreadFinder>findThread;
    QString currentPath;

signals:
    void changFindPath(QString);
    void genPathOfFile(QString);
    void newFind();

public slots:
    void deleteThread();
    void printCurrentPath(QString);
    void genStringPathFile(QString);
    void finishThread();

};

#endif // CONTROLLER_HPP

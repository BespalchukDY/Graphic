#ifndef SAVING_HPP
#define SAVING_HPP

#include <QObject>
#include <QStringList>
#include <QArrayData>
#include <QVariant>
#include <QFile>
#include <QTextStream>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDate>

struct BData {
    int day, mounth, year;
};

struct DataBase
{
    quint32 idTask;
    QChar task[ 512 ];
    BData beginDate;
    quint32 progress;
};


class Saving : public QObject
{
    Q_OBJECT
public:
    explicit Saving(QObject *parent = nullptr);

signals:
    void statusLoadBase ( bool correct, quint32 amount, QString error);
    void printData ( quint32 id, QString task, QString begDate,  quint32 progress);
    void logMistake (QString msg);
    void emitNextLine ();
    void taskFullInformation ( quint32 id, QString task, QString begDate, quint32 progress);

public slots:
    void initBase ();
    void getNext ();
    void getLine ( quint32 id);
    void addNew (QString task, QString begData, quint32 progr);
    void updateTaskData (quint32 id, QString task, QString stDate, QString progress);
    void saveReport (QString report);

private:
    QSqlDatabase database;
    QList<quint32>listIDTask; // Список ID задач
    quint32 pos; // Текущая задача
    void writeToFile();
    QString str;
    QSqlQuery query;
    quint32 curID; // Текущая авторизованная задача

};

#endif // SAVING_HPP

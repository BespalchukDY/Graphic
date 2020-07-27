#include "saving.hpp"


Saving::Saving(QObject *parent) : QObject(parent)
{
}

void Saving::initBase()
{
    database = QSqlDatabase::addDatabase("QSQLITE");//SQLite-driver
    database.setDatabaseName( "dbtasks.db" ); // Файл БД
    if (!database.open()) // Пытаемся загрузить БД
    {
        emit statusLoadBase ( false , 0 , tr( "Couldn't open DB" )); // Не удалось подключиться к БД
    } else {
        query = QSqlQuery(database); // Создаем запрос к открытой БД
        bool p = query.exec( "create table if not exists TaskList(id int not null,task varchar(256) not null,"
                             "begdata varchar(32) not null, prgress int(8) not null)" ); // Создаем таблицу 1, если она еще не создана
        if (!p) // Ошибка запроса
        {
            emit statusLoadBase ( false , 0 , query.lastError(). text ()); // Выводим ошибку в консоль через QML
            return ;
        }

        query.exec( "select count (*) from TaskList" );
                if (query.next()) {
                    quint32 amount = query.value( 0 ).toUInt();
                    listIDTask.clear();
                    if (query.exec( "select id from TaskList" )) {
                        while (query.next()) {
                            listIDTask.append(query.value( 0 ).toUInt());
                        }
                    }
                    pos = 0 ;
                    emit statusLoadBase ( true , amount, "" );
                } else {
                    emit statusLoadBase( false , 0 , query.lastError().text());
                }

    }
}

void Saving::getNext()
{
    if (pos >= listIDTask.size()) return ;
    bool p = query.exec( "select * from TaskList where id=" + QString::number(listIDTask[pos++]));
    if (query.next()) {
// Вывод задачи в список
        emit printData (query.value( 0 ). toUInt (), query. value ( 1 ). toString (),
                        query. value ( 2 ). toString (),query. value ( 3 ). toUInt ());
    }
}

void Saving::getLine(quint32 id)
{
    if (query.exec( "select * from TaskList where id = " + QString::number(id))) {
        if (query.next()) {
            curID = query.value( 0 ).toUInt();
            emit taskFullInformation (curID, query.value( 1 ). toString (),
                                      query. value ( 2 ). toString (),query. value ( 3 ). toUInt ());
        }
    } else emit logMistake( "Ошибка SQL-запрос" );
}

void Saving::addNew(QString task, QString begData, quint32 progr)
{
    quint32 id = 0 ;
    for (;;id++) // Определяем свободный ID
    {
        query.exec( "select count (*) from TaskList where id=" + QString::number(id)); // Запрашиваем количество задач с данным ID
        if (query.next()) {
            if (!query.value( 0 ).toInt()) break ; // Если количество равно 0, используем данный ID для добавляемой задачи
        }
    }
    bool corr = query.exec( "insert into TaskList VALUES(" + QString::number(id) + ",'" + task + "','" + begData + "','" + QString::number(progr) + "')"); // SQL-запрос на добавление строки задачи в таблицу БД
    if (!corr) emit logMistake (query.lastError(). text ());
    else {
        listIDTask.append(id);
        emit emitNextLine ();
    }
}

void Saving::updateTaskData(quint32 id, QString task, QString stDate, QString progress)
{

    bool p = query.exec("create table if not exists TaskList(id int not null,task varchar(256) not null,"
    "begdata varchar(32) not null,prgress int(32) not null)");

        int prog = progress.toUInt();
        if (prog < 0 ) prog = 0 ;
        if (prog > 100 ) prog = 100 ;
        QString cmd = "task='" + task + "'," ;
        cmd += "begdata='" + stDate + "'," ;
        cmd += "prgress=" + QString::number(prog);
        bool res = query.exec( "update TaskList set " + cmd + " where id=" + QString::number(id));
        if (!res) {
            emit logMistake (query.lastError(). text ());
        }
}

void Saving::saveReport(QString report)
{
    if (!query.exec( "update TaskUser set userreport = '" + report + "' where id=" + QString::number(curID) + "'" )) // curId ранее был сохранен в других методах, без которых данный метод не запустится
    {
        emit logMistake (query.lastError(). text ());
    }
}

#ifndef BASEREADER_HPP
#define BASEREADER_HPP

#include <QObject>
#include <QFile>

class BaseReader : public QObject
{
    Q_OBJECT
public:
    explicit BaseReader ();
    virtual ~BaseReader();

    Q_INVOKABLE void loadBase();
    Q_INVOKABLE void getNextRecord();
    Q_INVOKABLE void writeNewInformation(QString, QString, QString, QString);
    Q_INVOKABLE void rewriteFile();

private:
    QFile *file;

signals:
    void initEnd(bool succeed);
    void load(QString id, QString task, QString date_end, QString prog);
};

#endif // BASEREADER_HPP

#include "basereader.hpp"

#include <QDataStream>

BaseReader::BaseReader() : file( nullptr )
{
}

BaseReader::~BaseReader()
{
if (file) file->close();
}

void BaseReader::loadBase()
{
    file = new QFile("./testbase.txt", this);
    if (!file) return;
    if (!file->open(QIODevice::ReadWrite)) {
        emit initEnd(false);
        return;
    }
    emit initEnd(true);
}

void BaseReader::getNextRecord() {
    if (file->atEnd()) return;
       QDataStream stream(file);
       int len = 0;

       stream.readRawData((char*)&len, sizeof len);
       QByteArray b;
       b.resize(len);
       stream.readRawData(b.data(), len);
       QString l_id = QString::fromUtf8(b);

       stream.readRawData((char*)&len, sizeof len);
       b.resize(len);
       stream.readRawData(b.data(), len);
       QString l_task = QString::fromUtf8(b);

       stream.readRawData((char*)&len, sizeof len);
       b.resize(len);
       stream.readRawData(b.data(), len);
       QString l_dateend = QString::fromUtf8(b);

       stream.readRawData((char*)&len, sizeof len);
       b.resize(len);
       stream.readRawData(b.data(), len);
       QString l_prog = QString::fromUtf8(b);

       emit load(l_id, l_task, l_dateend, l_prog);
}

void BaseReader::writeNewInformation(QString id, QString task, QString date_end, QString prog) // Записываем
{
    QDataStream stream(file);
       auto bytes = id.toUtf8();
       int len = bytes.length();
       stream.writeRawData((char*)&len, sizeof len);
       stream.writeRawData(bytes.data(), len);

       bytes = task.toUtf8();
       len = bytes.length();
       stream.writeRawData((char*)&len, sizeof len);
       stream.writeRawData(bytes.data(), len);

       bytes = date_end.toUtf8();
       len = bytes.length();
       stream.writeRawData((char*)&len, sizeof len);
       stream.writeRawData(bytes.data(), len);

       bytes = prog.toUtf8();
       len = bytes.length();
       stream.writeRawData((char*)&len, sizeof len);
       stream.writeRawData(bytes.data(), len);
}

void BaseReader::rewriteFile()
{
    file->remove();
       file->close();
       file = new QFile("./testbase.txt", this);
       file->open(QIODevice::ReadWrite);
}

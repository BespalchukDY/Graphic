#include "downloadergui.hpp"
#include <QGridLayout>
#include <QUrl>
#include <QFile>
#include <QStandardPaths>
#include <QLabel>
#include <QMessageBox>



DownloaderGUI::DownloaderGUI(QWidget *parent)
    : QWidget(parent)
{
    downloader = new Downloader(this);
    progressBar = new QProgressBar;
    lineEdit = new QLineEdit;
    pushButton = new QPushButton(tr("Показать изображения"));
    pushButton2 = new QPushButton(tr("Поиск картинок по запросу"));
    plainTextEdit = new QPlainTextEdit;
    lineEdit1 = new QLineEdit;
    lineEdit2 = new QLineEdit;
    lineEdit3 = new QLineEdit;
    QLabel* label2 = new QLabel;
    label2->setText(tr("Введите слово для поиска, например, кот"));

    connect(pushButton, SIGNAL(clicked()), SLOT(slotGo()));
    connect(pushButton2, SIGNAL(clicked()), SLOT(slotStart()));
    connect(downloader, SIGNAL(downloadProgress(qint64, qint64)), this, SLOT(slotDownloadProgress(qint64, qint64)));
    connect(downloader, SIGNAL(done(const QUrl&, const QByteArray&)), this, SLOT(slotDone(const QUrl&, const QByteArray&)));

    QGridLayout* lay = new QGridLayout;
    lay->addWidget(label2, 0, 0);
    lay->addWidget(lineEdit, 1, 0);
    lay->addWidget(pushButton, 1, 1);
    lay->addWidget(pushButton2, 1, 2);
    lay->addWidget(progressBar, 2, 0, 1, 1);
    lay->addWidget(plainTextEdit, 3, 0);
    lay->addWidget(lineEdit1, 3, 1);
    lay->addWidget(lineEdit2, 3, 2);
    lay->addWidget(lineEdit3, 3, 3);
    setLayout(lay);
}

DownloaderGUI::~DownloaderGUI()
{
}

void DownloaderGUI::slotGo()
{
    downloader->download(QUrl(lineEdit1->text()));
    downloader->download(QUrl(lineEdit2->text()));
    downloader->download(QUrl(lineEdit3->text()));
}

void DownloaderGUI::slotStart()
{
    QString url = "https://yandex.ru/images/search?text=" + lineEdit->text();
    QString html = getHtml(url);
    if (html.isEmpty()){
        plainTextEdit->setPlainText("Ошибка!");
        lineEdit1->clear();
        lineEdit2->clear();
        lineEdit3->clear();
        return;
    }

    QStringList data = getData(html);

    plainTextEdit->setPlainText(html);
    lineEdit1->setText(data[0]);
    lineEdit2->setText(data[1]);
    lineEdit3->setText(data[2]);
}

void DownloaderGUI::slotDownloadProgress(qint64 received, qint64 total)
{
    if (total <= 0) {
        slotError();
        return;
    }
    progressBar->setValue(100 * received / total);
}

void DownloaderGUI::slotDone(const QUrl& url, const QByteArray& ba)
{
    QString strFileName = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation) + "/" + url.path().section('/', -1);

    QFile file(strFileName);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(ba);
        file.close();
        showPic(strFileName);
    }
}

void DownloaderGUI::showPic(QString &strFileName)
{
    QPixmap pix(strFileName);
    pix = pix.scaled(pix.size()/3, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QLabel* label = new QLabel;
    label->setPixmap(pix);
    label->setFixedSize(pix.size());
    label->show();
}

QString DownloaderGUI::getHtml(const QString &url)
{
    QNetworkAccessManager manager;
    QNetworkReply *response = manager.get(QNetworkRequest(QUrl(url)));
    QEventLoop event;
    QObject::connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    response->deleteLater();
    return response->readAll();
}

QStringList DownloaderGUI::getData(const QString &html)
{
    QStringList list;
    QRegExp regex("(rpt=simage\",\"img_href\":\")([\\S]+)(\",\"useProxy\")");
    int lastPos = 0;
    while( ( lastPos = regex.indexIn( html, lastPos ) ) != -1 ) {
        lastPos += regex.matchedLength();
        list.append(regex.cap(2));
    }
    return list;
}

void DownloaderGUI::slotError()
{
    QMessageBox::critical(0, tr("Error"), tr("Error download"));
}

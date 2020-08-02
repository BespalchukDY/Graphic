#ifndef DOWNLOADERGUI_HPP
#define DOWNLOADERGUI_HPP

#include <QWidget>
#include <QProgressBar>
#include <QLineEdit>
#include <QPushButton>
#include <QEventLoop>
#include <QObject>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QPlainTextEdit>
#include "downloader.hpp"

class DownloaderGUI : public QWidget
{
    Q_OBJECT

public:
    DownloaderGUI(QWidget *parent = nullptr);
    ~DownloaderGUI();

private:
    Downloader* downloader;
    QProgressBar* progressBar;
    QLineEdit* lineEdit;
    QPushButton* pushButton;
    void showPic(QString&);

    QString getHtml(const QString& url);
    QStringList getData(const QString& html);
    QPushButton* pushButton2;
    QPlainTextEdit* plainTextEdit;
    QLineEdit* lineEdit1;
    QLineEdit* lineEdit2;
    QLineEdit* lineEdit3;

private slots:
    void slotGo();
    void slotStart();
    void slotError();
    void slotDownloadProgress(qint64, qint64);
    void slotDone(const QUrl&, const QByteArray&);

};
#endif // DOWNLOADERGUI_HPP

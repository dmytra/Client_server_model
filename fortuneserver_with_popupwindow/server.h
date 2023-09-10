
#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include "popup.h"
#include <QString>
#include <QList>

QT_BEGIN_NAMESPACE
class QLabel;
class QTcpServer;
QT_END_NAMESPACE

class Server : public QDialog
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);

private slots:
    void sendFortune();

private:
    void initServer();
    PopUp *popUp;       // Объявляем объект всплывающего сообщения

    QLabel *statusLabel = nullptr;
    QTcpServer *tcpServer = nullptr;
    QList<QString> fortunes;
};
//! [0]

#endif

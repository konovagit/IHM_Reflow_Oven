#include "myserver.h"

MyServer::MyServer(QObject *parent) : QObject(parent)
{
    server = new QTcpServer(this);
    connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));

    if(!server->listen(QHostAddress::Any,1234))
    {
        qDebug() <<"Le Serveur ne peut pas se lancer!";
    }
    else
    {
        qDebug() <<"Le Serveur est lancé!";
    }
}

void MyServer::newConnection()
{
    QTcpSocket *socket = server->nextPendingConnection();

    socket->write("Bonjour est bienvenue!\r\n");
    socket->flush();
    socket->waitForBytesWritten(3000);
    socket->close();
}

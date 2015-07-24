#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    MainWindow w;
    w.show();
    return app.exec();
}

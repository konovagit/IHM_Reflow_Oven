#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();


    //QwtPlot myPlot;
    //myPlot.show();

    return a.exec();
}

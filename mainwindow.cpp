#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    makePlot();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::makePlot()
{
    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
      x[i] = i/50.0 - 1; // x goes from -1 to 1
      y[i] = x[i]*x[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:
    ui->Plot->addGraph();
    ui->Plot->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->Plot->xAxis->setLabel("Temps");
    ui->Plot->yAxis->setLabel("Température");
    // set axes ranges, so we see all data:
    ui->Plot->xAxis->setRange(0, 1);
    ui->Plot->yAxis->setRange(0, 240);
    ui->Plot->replot();
}

void MainWindow::on_Button_Reset_clicked()
{
    ui->Plot->clearGraphs(); //Clear graph
    ui->Plot->replot();
}

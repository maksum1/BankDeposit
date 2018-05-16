#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"vipdeposit.h"
#include"timelydeposit.h"
#include"accruingdeposit.h"
#include"qdebug.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    TimelyDeposit A(1000,3,0.02);
    AccruingDeposit B(1000,4,0.02);

    VIPDeposit VIP(1000,5,0.02);
    VIP.Refill(1000,5,3,1000);

    qDebug()<<VIP.Payout(1);





}

MainWindow::~MainWindow()
{
    delete ui;
}

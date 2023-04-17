#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QtWebEngineWidgets/QWebEngineView>
#include"url.h"
#include"ip1.h"
#include"url1.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("请选择登录方式");
    this->setWindowIcon(QIcon(":/img/1.PNG"));

    IP1 *ip1 = new IP1();
    URL1 *url1 = new URL1();
    connect(ui->URLBtn,&QPushButton::clicked,[=]()
    {
       this->hide();
        url1->show();
    });

    connect(ui->IPBtn,&QPushButton::clicked,[=]()
    {
        this->hide();
        ip1->show();
    });

    connect(url1,&URL1::back,[=]()
    {
        url1->hide();
        this->show();
    });

    connect(ip1,&IP1::back,[=]()
    {
       ip1->hide();
       this->show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}



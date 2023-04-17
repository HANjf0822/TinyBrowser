#include "url1.h"
#include "ui_url1.h"
#include<QString>
#include<QDebug>
URL1::URL1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::URL1)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/img/10.PNG"));
    this->setWindowTitle("URL登录");
    setMaximumSize(2000,2000);
    setMinimumSize(1000,1000);
    connect(ui->BackBtn,&QPushButton::clicked,[=]()
    {
       this->back();
    });


    connect(ui->ReloadBtn,&QPushButton::clicked,[=]()
    {
        ui->widget_web->reload();
    });

    connect(ui->GoBtn,&QPushButton::clicked,[=]()
    {
        QString qstr = ui->lineEdit->text();
        qDebug()<<qstr;
        ui->widget_web->load(QUrl(qstr));
    });

}

URL1::~URL1()
{
    delete ui;
}

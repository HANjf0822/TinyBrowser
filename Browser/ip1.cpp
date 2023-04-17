#include "ip1.h"
#include "ui_ip1.h"

IP1::IP1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IP1)
{
    ui->setupUi(this);
    setMaximumSize(2000,2000);
    setMinimumSize(1000,1000);

    this->setWindowIcon(QIcon(":/img/2.PNG"));
    this->setWindowTitle("IP地址登录");
    connect(ui->BakcBtn,&QPushButton::clicked,[=]()
    {
        this->back();
    });


    connect(ui->Gobtn,&QPushButton::clicked,[=]()
    {
       QString str = ui->lineEdit->text();
       ui->widget_web->load(QUrl(str));
    });

    connect(ui->ReloadBtn,&QPushButton::clicked,[=]()
    {
       ui->widget_web->reload();
    });
}

IP1::~IP1()
{
    delete ui;
}

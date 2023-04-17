#include "url.h"
#include "ui_url.h"
#include<QtWebEngineWidgets/QWebEngineView>
#include<QUrl>
#include<QString>
URL::URL(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::URL)
{
    ui->setupUi(this);
    setMaximumSize(2000,2000);
    setMinimumSize(1000,1000);
}

URL::~URL()
{
    delete ui;
}

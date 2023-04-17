#ifndef URL_H
#define URL_H

#include <QDialog>
#include<QString>
namespace Ui {
class URL;
}

class URL : public QDialog
{
    Q_OBJECT

public:
    explicit URL(QWidget *parent = nullptr);
    ~URL();

private:
    Ui::URL *ui;
};

#endif // URL_H

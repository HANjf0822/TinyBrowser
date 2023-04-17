#ifndef IP1_H
#define IP1_H

#include <QMainWindow>

namespace Ui {
class IP1;
}

class IP1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit IP1(QWidget *parent = nullptr);
    ~IP1();
signals:
    void back();



private:
    Ui::IP1 *ui;
};

#endif // IP1_H

#ifndef URL1_H
#define URL1_H

#include <QMainWindow>

namespace Ui {
class URL1;
}

class URL1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit URL1(QWidget *parent = nullptr);
    ~URL1();

signals:
    void back();




private:
    Ui::URL1 *ui;
};

#endif // URL1_H

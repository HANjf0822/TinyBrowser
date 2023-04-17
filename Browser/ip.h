#ifndef IP_H
#define IP_H

#include <QMainWindow>

namespace Ui {
class IP;
}

class IP : public QMainWindow
{
    Q_OBJECT

public:
    explicit IP(QWidget *parent = nullptr);
    ~IP();

private:
    Ui::IP *ui;
};

#endif // IP_H

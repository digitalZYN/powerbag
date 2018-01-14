#ifndef POWERBAG_H
#define POWERBAG_H

#include <QMainWindow>

namespace Ui {
class PowerBag;
}

class PowerBag : public QMainWindow
{
    Q_OBJECT

public:
    explicit PowerBag(QWidget *parent = 0);
    ~PowerBag();

private:
    Ui::PowerBag *ui;
};

#endif // POWERBAG_H

#include "powerbag.h"
#include "ui_powerbag.h"

PowerBag::PowerBag(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PowerBag)
{
    ui->setupUi(this);
}

PowerBag::~PowerBag()
{
    delete ui;
}

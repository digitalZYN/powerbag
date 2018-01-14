#include "powerbag.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PowerBag w;
    w.show();

    return a.exec();
}

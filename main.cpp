#include "travelersmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TravelersMainWindow w;
    w.show();

    return a.exec();
}

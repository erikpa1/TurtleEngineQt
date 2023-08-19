#include "TurtleMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TurtleMainWindow w;
    w.show();
    return a.exec();
}

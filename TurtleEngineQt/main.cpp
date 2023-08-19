#include <QtWidgets/QApplication>


#include "TurtleMainWindow.h"


using namespace tui;

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	TurtleMainWindow w;
	w.show();
	return a.exec();
}

#include <QtWidgets/QApplication>


#include "TurtleMainWindow.h"

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QGraphicsDropShadowEffect>


#include "AppRouterManager.h"


using namespace tui;

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	TurtleMainWindow w;

	AppRouterManager::onRouteChanged = std::bind(&TurtleMainWindow::RouteChanged, &w, std::placeholders::_1);


	w.show();
	return a.exec();
}


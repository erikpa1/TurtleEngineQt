#include "TurtleMainWindow.h"

#include "NavBar.h"

namespace tui {

	TurtleMainWindow::TurtleMainWindow(QWidget* parent)
		: QMainWindow(parent)
	{

		resize(600, 400);

		auto tmp = new NavBar(this);


		tmp->resize(100, 400);



		this->setStyleSheet("{background-image: url(:/Textures/Textures/UniversalTurtle.png);}");


	}

	TurtleMainWindow::~TurtleMainWindow()
	{
	}

}


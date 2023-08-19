#include "TurtleMainWindow.h"

#include "NavBar.h"

namespace tui {

	TurtleMainWindow::TurtleMainWindow(QWidget* parent)
		: QMainWindow(parent)
	{

		new NavBar(this);



	}

	TurtleMainWindow::~TurtleMainWindow()
	{
	}

}


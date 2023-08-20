
#include <QHBoxLayout>
#include <qpushbutton.h>

#include "TurtleMainWindow.h"

#include "NavBar.h"


namespace tui {

	TurtleMainWindow::TurtleMainWindow(QWidget* parent)
		: QMainWindow(parent)
	{

		// Create a QVBoxLayout for the main window
		QHBoxLayout* mainLayout = new QHBoxLayout;

		auto tmp = new NavBar();

		tmp->resize(100, 400);

		setLayout(mainLayout);

		mainLayout->addWidget(tmp);


		resize(600, 400);





	}

	TurtleMainWindow::~TurtleMainWindow()
	{
	}

}


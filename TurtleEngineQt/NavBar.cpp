#include "NavBar.h"


#include <QtWidgets/QLabel>


namespace tui {

	NavBar::NavBar(QWidget* parent) : QWidget(parent)
	{
		new QLabel("Magic label", this);
	}

	NavBar::~NavBar()
	{
	}

}


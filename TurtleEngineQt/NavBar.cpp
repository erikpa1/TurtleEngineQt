#include "NavBar.h"

#include <QtWidgets/QLabel>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qpushbutton.h>


namespace tui {

	NavBar::NavBar(QWidget* parent) : QWidget(parent)
	{
		new QLabel("Magic label", this);

		_layout = new QBoxLayout(QBoxLayout::Direction::Down, this);

		_AddNavBarButton("projects", "projects.svg");
		_AddNavBarButton("deployment", "deploymnet.svg");
		_AddNavBarButton("assets", "assets.svg");

	}

	NavBar::~NavBar()
	{

	}

	void NavBar::_AddNavBarButton(std::string lang, std::string icon)
	{
		auto btn1 = new QPushButton();
		btn1->setText("Btn1");

		_layout->addWidget(btn1);


	}






}


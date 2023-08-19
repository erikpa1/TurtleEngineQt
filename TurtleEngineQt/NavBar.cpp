#include "NavBar.h"


#include <QtWidgets/QLabel>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qpushbutton.h>



namespace tui {

	NavBar::NavBar(QWidget* parent) : QWidget(parent)
	{
		new QLabel("Magic label", this);

		auto layout = new QBoxLayout(QBoxLayout::Direction::LeftToRight, this);


		auto btn1 = new QPushButton();
		btn1->setText("Btn1");


		auto btn2 = new QPushButton();
		btn1->setText("Btn2");

		layout->addWidget(btn1);
		layout->addWidget(btn2);



	}

	NavBar::~NavBar()
	{
	}

}


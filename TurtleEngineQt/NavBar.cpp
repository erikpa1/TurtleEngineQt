#include "NavBar.h"


#include <qstring.h>

#include <QLabel>
#include <QIcon>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPaintEvent>
#include <QStackedLayout>

#include <qdebug.h>


namespace tui {

	NavBar::NavBar(QWidget* parent) : QWidget(parent)
	{

		//QWidget* pic = new QWidget(this);


		//auto label = new QLabel(this);


		//QPixmap map(":/Textures/Textures/UniversalTurtle.png");


		//label->setPixmap(map);
		//label->setScaledContents(true);
		//label->setAlignment(Qt::AlignCenter);

		//label->setGeometry(QRect(40, 40, 220, 400));


		//pic->setStyleSheet("background-image: url(:/Textures/Textures/UniversalTurtle.png)");
		//pic->setGeometry(QRect(10, 10, 220, 220)); // your location and size.

		//_stack = new QStackedLayout(this);
		//_stack->addItem(_layout);


		_layout = new QVBoxLayout();
		_layout->setSpacing(0);

		this->setLayout(_layout);

		_AddNavBarButton("projects", "Projects.svg");
		_AddNavBarButton("deployment", "Bell.svg");
		_AddNavBarButton("assets", "Assets.svg");
		_AddNavBarButton("assets", "Assets.svg");
		_AddNavBarButton("assets", "Assets.svg");
		_AddNavBarButton("assets", "Assets.svg");
		_AddNavBarButton("assets", "Assets.svg");
		_AddNavBarButton("assets", "Assets.svg");
		_AddNavBarButton("assets", "Assets.svg");


	}

	NavBar::~NavBar()
	{

	}

	void NavBar::_AddNavBarButton(std::string lang, std::string icon)
	{
		auto qIcon = new QIcon(QString::fromStdString(":/Icons/Icons/" + icon));

		auto btn = new QPushButton();
		btn->setIcon(*qIcon);
		btn->setText(QString::fromStdString(lang));
		btn->resize(100, 100);
		//btn->setStyleSheet("background: transparent; border: none;");

		_layout->addWidget(btn);
	}


	void NavBar::paintEvent(QPaintEvent* event)
	{

	}






}


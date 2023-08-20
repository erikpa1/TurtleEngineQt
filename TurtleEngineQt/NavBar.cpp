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



		this->setStyleSheet("background-image: url(:Textures/Textures/AppBackgroundBlured.png);"
			"background-repeat: no-repeat;"
			"background-position: center;");


		QWidget* buttonContainer = new QWidget(this);



		buttonContainer->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
		buttonContainer->setStyleSheet("background-color: lightgray;");

		_layout = new QVBoxLayout(buttonContainer);


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
		QIcon qIcon(QString::fromStdString(":/Icons/Icons/" + icon));
	

		auto btn = new QPushButton();
		btn->setIcon(qIcon);
		btn->setIconSize(QSize(32, 32));
		btn->setStyleSheet("font-color: white;");
		btn->setText(QString::fromStdString(lang));

		btn->setStyleSheet("background: transparent; border: none;"
			"text-align: left;"
			"color: white;"
		);

		_layout->addWidget(btn);
	}


	void NavBar::paintEvent(QPaintEvent* event)
	{

	}






}


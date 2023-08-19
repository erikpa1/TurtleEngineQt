#include "NavBar.h"


#include <qstring.h>

#include <QLabel>
#include <QIcon>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPaintEvent>

#include <qdebug.h>


namespace tui {

	NavBar::NavBar(QWidget* parent) : QWidget(parent)
	{
		_layout = new QVBoxLayout(this);
		_layout->setSpacing(0);

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
		btn->resize(100, 50);
		btn->setStyleSheet("background: transparent; border: none;");

		_layout->addWidget(btn);
	}

	void NavBar::paintEvent(QPaintEvent* event)
	{

	}






}


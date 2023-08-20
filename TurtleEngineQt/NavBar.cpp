#include "NavBar.h"


#include <qstring.h>

#include <QLabel>
#include <QIcon>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPaintEvent>
#include <QStackedLayout>
#include <QGraphicsDropShadowEffect>
#include <QSpacerItem>

#include <qdebug.h>


namespace tui {

	NavBar::NavBar(QWidget* parent) : QWidget(parent)
	{

		setStyleSheet("background: transparent;");

		QWidget* buttonContainer = new QWidget(this);

		_layout = new QVBoxLayout(buttonContainer);
		_layout->setSpacing(25);


		_AddHeading();

		_AddNavBarButton("Projects", "Projects.svg", []() {
			qDebug() << "Projects clicked";
			});

		_AddNavBarButton("Deployment", "Bell.svg", []() {
			qDebug() << "Deployment clicked";
			});

		_AddNavBarButton("Assets", "Assets.svg", []() {
			qDebug() << "Assets clicked";
			});

		_AddSeparator();

		_AddNavBarButton("Assets", "Assets.svg", []() {
			qDebug() << "Assets clicked";
			});

	}

	NavBar::~NavBar()
	{

	}

	void NavBar::_AddNavBarButton(std::string lang, std::string icon, QFunctionPointer functPtr)
	{

		auto elementsBox = new QHBoxLayout();


		auto divider = new QPushButton();
		divider->setFixedWidth(1);
		divider->setStyleSheet("background-color: #006ba8;border: none");

		QIcon qIcon(QString::fromStdString(":/Icons/Icons/" + icon));

		auto btn = new QPushButton();
		btn->setIcon(qIcon);
		btn->setIconSize(QSize(22, 22));
		btn->setFixedWidth(23);
		btn->setCursor(Qt::PointingHandCursor);

		auto label = new QLabel(QString::fromStdString(lang));
		label->setStyleSheet("color: #b2b2b2;text-align: left;");
		label->setCursor(Qt::PointingHandCursor);

		QFont font;
		font.setPointSize(12);

		label->setFont(font);


		btn->setStyleSheet("background: transparent; border: none;");

		elementsBox->addWidget(divider);
		elementsBox->addWidget(btn);
		elementsBox->addWidget(label);

		connect(btn, &QPushButton::clicked, functPtr);


		_layout->addLayout(elementsBox);
	}

	void NavBar::_AddSeparator()
	{


		_layout->addSpacerItem(new QSpacerItem(20, 20));
	}

	void NavBar::_AddHeading()
	{
		auto label = new QLabel("Turtle engine");
		label->setStyleSheet("color: white;text-align: left;");

		QFont font;
		font.setPointSize(12);
		font.setBold(true);

		label->setFont(font);

		_layout->addWidget(label);

	}


	void NavBar::paintEvent(QPaintEvent* event)
	{

	}






}


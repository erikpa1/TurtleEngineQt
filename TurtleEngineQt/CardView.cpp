

#include <qstring.h>
#include <QFont>
#include <QLineEdit>
#include <QLabel>
#include <QIcon>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPaintEvent>
#include <QStackedLayout>
#include <QGraphicsDropShadowEffect>
#include <QSpacerItem>

#include <qdebug.h>

#include "CardView.h"


namespace tui {


	CardView::CardView(QWidget* parent) : QWidget(parent) {


		auto layout = new QVBoxLayout();
		layout->setContentsMargins(0, 0, 0, 0);

		auto cardWidget = new QWidget();
		cardWidget->setStyleSheet(
			"background-color: white;"
			"");
		cardWidget->setContentsMargins(0, 0, 0, 0);


		auto imageLabel = new QWidget();
		imageLabel->setFixedSize(250, 100);
		imageLabel->setContentsMargins(0, 0, 0, 0);
		imageLabel->setStyleSheet("background-image: url(:Textures/Textures/AppBackgroundBlured.png);"
			"background-color: #002330;"
			"background-repeat: no-repeat;"
			"background-position: center;");


		auto cardLayout = new QVBoxLayout();
		cardLayout->setContentsMargins(0, 0, 0, 0);

		cardLayout->addWidget(imageLabel);

		auto contentLayout = new QVBoxLayout();
		contentLayout->setContentsMargins(15, 15, 15, 15);


		QFont headingFont;
		headingFont.setPixelSize(15);
		headingFont.setBold(true);

		auto titleLabel = new QLabel("Card Title");
		titleLabel->setFont(headingFont);


		auto contentLabel = new QLabel("Card Content");
		auto  actionButton = new QPushButton("Action");

		cardLayout->addLayout(contentLayout);
		contentLayout->addWidget(titleLabel);
		contentLayout->addWidget(contentLabel);
		contentLayout->addWidget(actionButton);

		cardWidget->setLayout(cardLayout);
		layout->addWidget(cardWidget);

		setLayout(layout);


	}

	CardView::~CardView()
	{

	}


}

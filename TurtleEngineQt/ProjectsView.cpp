

#include <qstring.h>
#include <QFont>
#include <QLineEdit>
#include <QLabel>
#include <QIcon>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPaintEvent>
#include <QScrollArea>
#include <QStackedLayout>
#include <QGraphicsDropShadowEffect>
#include <QSpacerItem>

#include <qdebug.h>

#include "ProjectsView.h"
#include "CardView.h"

namespace tui {


	ProjectsView::ProjectsView(QWidget* parent) : QWidget(parent) {


		auto root = new QWidget(this);
		root->setContentsMargins(15, 15, 15, 0);

		QFont font;
		font.setPointSize(14);


		auto input = new QLineEdit();
		input->setStyleSheet(
			"background-color: white;"
			"height: 30px;"
			"width: 200px;"
			"border-radius: 5px"
		);
		input->setContentsMargins(2, 1, 2, 1);
		input->setFont(font);
		input->setAlignment(Qt::AlignCenter);
		input->setPlaceholderText("Search");


		auto layout = new QVBoxLayout(root);
		layout->setSpacing(15);

		layout->addWidget(input);

		_FillStackWidget(layout);
		_FillStackWidget(layout);
		_FillStackWidget(layout);
		_FillStackWidget(layout);



	}

	ProjectsView::~ProjectsView()
	{

	}

	void ProjectsView::_FillStackWidget(QVBoxLayout* layout)
	{
		auto hBox = new QHBoxLayout();

		auto card1 = new CardView();
		auto card2 = new CardView();
		auto card3 = new CardView();
		auto card4 = new CardView();

		hBox->addWidget(card1);
		hBox->addWidget(card2);
		hBox->addWidget(card3);
		hBox->addWidget(card4);

		layout->addLayout(hBox);
	}


}


#include <QGraphicsDropShadowEffect>
#include <QHBoxLayout>
#include <QPushButton>

#include <QLabel>

#include "TurtleMainWindow.h"
#include "ProjectsView.h"
#include "NavBar.h"


namespace tui {




	TurtleMainWindow::TurtleMainWindow(QWidget* parent)
		: QWidget(parent)
	{

		_InitStyle();



		QHBoxLayout* mainLayout = new QHBoxLayout(this);
		mainLayout->setContentsMargins(0, 0, 0, 0);

		auto navBar = _FillNavbar(mainLayout);
		auto content = _InitProjectsView(mainLayout);

		content->stackUnder(navBar);

		//QPushButton* scalingButton1 = new QPushButton("Scaling Button");
		//scalingButton1->setStyleSheet("background-color: red;");

		//mainLayout->addWidget(scalingButton1);


	}

	TurtleMainWindow::~TurtleMainWindow()
	{

	}

	void TurtleMainWindow::_InitStyle()
	{
		setStyleSheet("background-color: #dae0e6;");
		resize(800, 600);
	}

	QWidget* TurtleMainWindow::_FillNavbar(QHBoxLayout* layout)
	{

		auto leftWidget = new QWidget();
		leftWidget->setFixedWidth(200);
		leftWidget->setContentsMargins(0, 0, 0, 0);
		leftWidget->setStyleSheet("background-image: url(:Textures/Textures/AppBackgroundBlured.png);"
			"background-color: #002330;"
			"background-repeat: no-repeat;"
			"background-position: bottom;");

		QGraphicsDropShadowEffect* shadowEffect = new QGraphicsDropShadowEffect;
		shadowEffect->setOffset(1, 0);
		shadowEffect->setColor(Qt::black);
		shadowEffect->setBlurRadius(30);

		leftWidget->setGraphicsEffect(shadowEffect);

		auto vbox = new QVBoxLayout();
		vbox->setSpacing(10);

		leftWidget->setLayout(vbox);

		auto navBar = new NavBar();

		navBar->setContentsMargins(0, 0, 0, 0);

		vbox->addWidget(navBar);

		layout->addWidget(leftWidget);

		return leftWidget;

	}



	QWidget* TurtleMainWindow::_InitProjectsView(QHBoxLayout* layout)
	{
		auto projectsView = new ProjectsView();


		layout->addWidget(projectsView);

		return projectsView;

	}

}


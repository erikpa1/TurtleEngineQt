#pragma once

#include <QtWidgets/qwidget.h>


namespace tui {

	class NavBar : public QWidget
	{
		Q_OBJECT

	public:
		NavBar(QWidget* parent = nullptr);
		~NavBar();


	};


}
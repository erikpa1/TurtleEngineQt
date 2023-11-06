#pragma once

#include <QWidget>
#include "ui_TurtleMainWindow.h"



class QHBoxLayout;
class QWidget;

namespace tui {


	class TurtleMainWindow : public QWidget
	{
		Q_OBJECT

	public:
		TurtleMainWindow(QWidget* parent = nullptr);
		~TurtleMainWindow();

		void RouteChanged(const std::string& newRoute);

	private:
		Ui::TurtleMainWindowClass ui;

		void _InitStyle();

		QLayout* _rootLayout;

		QWidget* _navBarWidget;

		QWidget* _rightBar;

		QWidget* _activeContentElement;

		QWidget* _FillNavbar(QLayout* layout);
		QWidget* _InitProjectsView();


	};

}


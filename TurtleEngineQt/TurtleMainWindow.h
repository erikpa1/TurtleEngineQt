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

	private:
		Ui::TurtleMainWindowClass ui;

		void _InitStyle();

		QWidget* _FillNavbar(QHBoxLayout* layout);
		QWidget* _InitProjectsView(QHBoxLayout* layout);


	};

}


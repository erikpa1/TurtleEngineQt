#pragma once

#include <qwidget.h>


class QVBoxLayout;



namespace tui {

	class ProjectsView : public QWidget
	{
		Q_OBJECT

	public:
		ProjectsView(QWidget* parent = nullptr);
		~ProjectsView();


	private:

		void _FillStackWidget(QVBoxLayout * layout);



	};





}
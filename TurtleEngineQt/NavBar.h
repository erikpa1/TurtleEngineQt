#pragma once

#include <QtWidgets/qwidget.h>



class QBoxLayout;


namespace tui {

	class NavBar : public QWidget
	{
		Q_OBJECT

	public:
		NavBar(QWidget* parent = nullptr);
		~NavBar();


	private:

		bool _isMaximalized = true;

		QBoxLayout _layout;



		void _AddNavBarButton(std::string lang, std::string icon);

	};


}
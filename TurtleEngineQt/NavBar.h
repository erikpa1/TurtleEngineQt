#pragma once

#include <qwidget.h>

class QStackedLayout;
class QVBoxLayout;
class QPaintEvent;


namespace tui {

	class NavBar : public QWidget
	{
		Q_OBJECT

	public:
		NavBar(QWidget* parent = nullptr);
		~NavBar();


	private:

		bool _isMaximalized = true;

		QVBoxLayout * _layout;

		QStackedLayout * _stack;

		void _AddNavBarButton(std::string lang, std::string icon);

	protected:

		void paintEvent(QPaintEvent* event) override;

	};





}
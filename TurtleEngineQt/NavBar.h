#pragma once

#include <qwidget.h>


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

		QVBoxLayout* _layout;

		void _AddNavBarButton(std::string lang, std::string icon, QFunctionPointer functPtr);
		void _AddSeparator();
		void _AddHeading();

	protected:

		void paintEvent(QPaintEvent* event) override;




	};





}
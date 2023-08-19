#pragma once

#include <string>

namespace tui {
	class TWidget;
}


namespace ttools {



	class Router {


	public:

		static void Register(std::string route, tui::TWidget* widget);

		static std::string& GetActiveRoute();

	};

}


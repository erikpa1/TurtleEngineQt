#include "Router.h"



namespace ttools {

	void Router::Register(std::string route, tui::TWidget* widget)
	{

	}

	std::string& Router::GetActiveRoute()
	{
		static std::string path = "asdas";
		return path;
		// TODO: insert return statement here
	}

}
#pragma once
#include <functional>
#include <string>

#include "qfunctionpointer.h"

namespace tui {


	class AppRouterManager {


	public:

		static std::function<void(const std::string&)> onRouteChanged;

		static QFunctionPointer fnPointer;

	};


}
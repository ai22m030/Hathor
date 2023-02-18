#pragma once

#include "Core.h"

namespace Hathor {
	class HATHOR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

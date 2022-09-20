#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application(); // Constructor
		virtual ~Application(); // Deconstructor

		void Run();
	};

	Application* CreateApplication(); // Top be defined in client
}


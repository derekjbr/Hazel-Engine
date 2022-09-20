#pragma once

#ifdef HZ_PLATFORM_WINDOWS

#include "Application.h"

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "Hazel Engine\n";
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
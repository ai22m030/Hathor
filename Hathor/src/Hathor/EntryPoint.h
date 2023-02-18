#pragma once

#include "Application.h"

#ifdef HT_PLATFORM_WINDOWS

extern Hathor::Application* Hathor::CreateApplication();

int main(int argc, char** argv) {
	auto app = Hathor::CreateApplication();
	app->Run();
	delete app;
}

#endif // HT_PLATFORM_WINDOWS

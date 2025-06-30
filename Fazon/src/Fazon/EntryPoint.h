#pragma once
#include "Fazon.h"

#ifdef FZ_PLATFORM_WINDOWS
extern Fazon::Application* Fazon::createApplication();
void logTests();
#endif
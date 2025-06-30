#include "Application.h"
#include <Fazon.h>

namespace Fazon {

#define BIND_EVENT_FN(x) std::bind(&x, this, std::placeholders::_1)

	Application* Application::s_instance = nullptr;

	Application::Application() {

		FZ_CORE_ASSERT(s_instance == nullptr, "Application already exists!");
		s_instance = this;

	}

	Application::~Application() {

	}

	void Application::run() {

	}

}
#pragma once

#include "Fazon/Core.h"

namespace Fazon {

	class Application {

	public:
		Application();
		virtual ~Application();

		void run();

		inline static Application& get() { return *s_instance; }

	private:

		bool m_running{ true };

	private:

		static Application* s_instance;

	};

	// TO BE DEFINED IN CLIENT
	Application* createApplication();

}
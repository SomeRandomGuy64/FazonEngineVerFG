#include "Log.h"

namespace Fazon {

	std::shared_ptr<Nexus::Logger> Log::s_coreLogger;
	std::shared_ptr<Nexus::Logger> Log::s_clientLogger;

	void Log::init() {
		s_coreLogger = std::make_shared<Nexus::Logger>();
		s_clientLogger = std::make_shared<Nexus::Logger>();
	}

}

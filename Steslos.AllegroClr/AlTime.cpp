#include "Al.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroTimeout.h"

namespace Steslos::AllegroClr
{
	Double Al::GetTime()
	{
		return al_get_time();
	}

	void Al::InitTimeout(AllegroTimeout^ timeout, Double seconds)
	{
		auto nativeTimeout = timeout->GetNativePointer();
		al_init_timeout(nativeTimeout, seconds);
	}

	void Al::Rest(Double seconds)
	{
		al_rest(seconds);
	}
}

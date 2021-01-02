#include "AllegroLibraryHeaders.h"
#include "AllegroTimer.h"

namespace Steslos::AllegroClr
{
	AllegroTimer::AllegroTimer(ALLEGRO_TIMER* nativeTimer)
		: NativePointerWrapper(nativeTimer)
	{
	}

	AllegroTimer::~AllegroTimer()
	{
	}

	AllegroTimer::!AllegroTimer()
	{
	}
}

#include "AllegroEventSource.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroEventSource::AllegroEventSource(ALLEGRO_EVENT_SOURCE* nativeEventSource)
		: NativePointerWrapper(nativeEventSource)
	{
	}

	AllegroEventSource::~AllegroEventSource()
	{
	}

	AllegroEventSource::!AllegroEventSource()
	{
	}
}

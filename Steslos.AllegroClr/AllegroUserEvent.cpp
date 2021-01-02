#include "AllegroLibraryHeaders.h"
#include "AllegroUserEvent.h"

namespace Steslos::AllegroClr
{
	AllegroUserEvent::AllegroUserEvent(ALLEGRO_USER_EVENT* nativeUserEvent)
		: NativePointerWrapper(nativeUserEvent)
	{
	}

	AllegroUserEvent::~AllegroUserEvent()
	{
	}

	AllegroUserEvent::!AllegroUserEvent()
	{
	}
}

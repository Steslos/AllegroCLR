#include "AllegroEventQueue.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroEventQueue::AllegroEventQueue(ALLEGRO_EVENT_QUEUE* nativeEventQueue)
		: NativePointerWrapper(nativeEventQueue)
	{
	}

	AllegroEventQueue::~AllegroEventQueue()
	{
	}

	AllegroEventQueue::!AllegroEventQueue()
	{
	}
}

#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_EVENT_QUEUE;

namespace Steslos::AllegroClr
{
	public ref class AllegroEventQueue : public NativePointerWrapper<ALLEGRO_EVENT_QUEUE*>
	{
	internal:
		AllegroEventQueue(ALLEGRO_EVENT_QUEUE* nativeEventQueue);
		virtual ~AllegroEventQueue();
		!AllegroEventQueue();
	};
}

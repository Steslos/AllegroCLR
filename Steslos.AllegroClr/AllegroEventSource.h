#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_EVENT_SOURCE;

namespace Steslos::AllegroClr
{
	public ref class AllegroEventSource : public NativePointerWrapper<ALLEGRO_EVENT_SOURCE*>
	{
	internal:
		AllegroEventSource(ALLEGRO_EVENT_SOURCE* nativeEventSource);
		virtual ~AllegroEventSource();
		!AllegroEventSource();
	};
}

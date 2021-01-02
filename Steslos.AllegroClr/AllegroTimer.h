#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_TIMER;

namespace Steslos::AllegroClr
{
	public ref class AllegroTimer : public NativePointerWrapper<ALLEGRO_TIMER*>
	{
	internal:
		AllegroTimer(ALLEGRO_TIMER* nativeTimer);
		virtual ~AllegroTimer();
		!AllegroTimer();
	};
}

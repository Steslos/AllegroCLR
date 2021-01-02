#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_USER_EVENT;

namespace Steslos::AllegroClr
{
	public ref class AllegroUserEvent : public NativePointerWrapper<ALLEGRO_USER_EVENT*>
	{
	internal:
		AllegroUserEvent(ALLEGRO_USER_EVENT* nativeUserEvent);
		virtual ~AllegroUserEvent();
		!AllegroUserEvent();
	};
}

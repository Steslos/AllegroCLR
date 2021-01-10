#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_FONT;

namespace Steslos::AllegroClr
{
	public ref class AllegroFont : public NativePointerWrapper<ALLEGRO_FONT*>
	{
	internal:
		AllegroFont(ALLEGRO_FONT* nativeFont);
		virtual ~AllegroFont();
		!AllegroFont();
	};
}

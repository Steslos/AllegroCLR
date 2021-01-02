#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_CONFIG_ENTRY;

namespace Steslos::AllegroClr
{
	public ref class AllegroConfigEntry : public NativePointerWrapper<ALLEGRO_CONFIG_ENTRY*>
	{
	internal:
		AllegroConfigEntry(ALLEGRO_CONFIG_ENTRY* nativeConfigEntry);
		virtual ~AllegroConfigEntry();
		!AllegroConfigEntry();
	};
}

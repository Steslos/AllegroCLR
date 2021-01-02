#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_CONFIG_SECTION;

namespace Steslos::AllegroClr
{
	public ref class AllegroConfigSection : public NativePointerWrapper<ALLEGRO_CONFIG_SECTION*>
	{
	internal:
		AllegroConfigSection(ALLEGRO_CONFIG_SECTION* nativeConfigSection);
		virtual ~AllegroConfigSection();
		!AllegroConfigSection();
	};
}

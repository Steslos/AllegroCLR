#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_CONFIG;

namespace Steslos::AllegroClr
{
	public ref class AllegroConfig : public NativePointerWrapper<ALLEGRO_CONFIG*>
	{
	internal:
		AllegroConfig(ALLEGRO_CONFIG* nativeConfig);
		virtual ~AllegroConfig();
		!AllegroConfig();
	};
}

#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_MIXER;

namespace Steslos::AllegroClr
{
	public ref class AllegroMixer : public NativePointerWrapper<ALLEGRO_MIXER*>
	{
	internal:
		AllegroMixer(ALLEGRO_MIXER* nativeMixer);
		virtual ~AllegroMixer();
		!AllegroMixer();
	};
}

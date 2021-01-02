#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_SAMPLE;

namespace Steslos::AllegroClr
{
	public ref class AllegroSample : public NativePointerWrapper<ALLEGRO_SAMPLE*>
	{
	internal:
		AllegroSample(ALLEGRO_SAMPLE* nativeSample);
		virtual ~AllegroSample();
		!AllegroSample();
	};
}

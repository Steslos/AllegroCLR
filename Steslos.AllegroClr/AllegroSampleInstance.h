#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_SAMPLE_INSTANCE;

namespace Steslos::AllegroClr
{
	public ref class AllegroSampleInstance : public NativePointerWrapper<ALLEGRO_SAMPLE_INSTANCE*>
	{
	internal:
		AllegroSampleInstance(ALLEGRO_SAMPLE_INSTANCE* nativeSampleInstance);
		virtual ~AllegroSampleInstance();
		!AllegroSampleInstance();
	};
}

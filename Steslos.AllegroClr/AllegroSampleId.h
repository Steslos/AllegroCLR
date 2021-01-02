#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_SAMPLE_ID;

namespace Steslos::AllegroClr
{
	public ref class AllegroSampleId : public NativePointerWrapper<ALLEGRO_SAMPLE_ID*>
	{
	public:
		/*AllegroSampleId();*/

	internal:
		AllegroSampleId(ALLEGRO_SAMPLE_ID* nativeMixer);
		virtual ~AllegroSampleId();
		!AllegroSampleId();
	};
}

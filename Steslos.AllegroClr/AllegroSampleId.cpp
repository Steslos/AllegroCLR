#include "AllegroLibraryHeaders.h"
#include "AllegroSampleId.h"

namespace Steslos::AllegroClr
{
	/*AllegroSampleId::AllegroSampleId()
		: NativePointerWrapper(nullptr)
	{
	}*/

	AllegroSampleId::AllegroSampleId(ALLEGRO_SAMPLE_ID* nativeMixer)
		: NativePointerWrapper(nativeMixer)
	{
	}

	AllegroSampleId::~AllegroSampleId()
	{
	}

	AllegroSampleId::!AllegroSampleId()
	{
	}
}

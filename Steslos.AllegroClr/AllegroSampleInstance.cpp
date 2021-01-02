#include "AllegroLibraryHeaders.h"
#include "AllegroSampleInstance.h"

namespace Steslos::AllegroClr
{
	AllegroSampleInstance::AllegroSampleInstance(ALLEGRO_SAMPLE_INSTANCE* nativeSampleInstance)
		: NativePointerWrapper(nativeSampleInstance)
	{
	}

	AllegroSampleInstance::~AllegroSampleInstance()
	{
	}

	AllegroSampleInstance::!AllegroSampleInstance()
	{
	}
}

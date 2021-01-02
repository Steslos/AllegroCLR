#include "AllegroLibraryHeaders.h"
#include "AllegroSample.h"

namespace Steslos::AllegroClr
{
	AllegroSample::AllegroSample(ALLEGRO_SAMPLE* nativeSample)
		: NativePointerWrapper(nativeSample)
	{
	}

	AllegroSample::~AllegroSample()
	{
	}

	AllegroSample::!AllegroSample()
	{
	}
}

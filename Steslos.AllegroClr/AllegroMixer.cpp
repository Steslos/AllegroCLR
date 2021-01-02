#include "AllegroLibraryHeaders.h"
#include "AllegroMixer.h"

namespace Steslos::AllegroClr
{
	AllegroMixer::AllegroMixer(ALLEGRO_MIXER* nativeMixer)
		: NativePointerWrapper(nativeMixer)
	{
	}

	AllegroMixer::~AllegroMixer()
	{
	}

	AllegroMixer::!AllegroMixer()
	{
	}
}

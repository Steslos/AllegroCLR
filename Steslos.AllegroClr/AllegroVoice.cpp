#include "AllegroLibraryHeaders.h"
#include "AllegroVoice.h"

namespace Steslos::AllegroClr
{
	AllegroVoice::AllegroVoice(ALLEGRO_VOICE* nativeVoice)
		: NativePointerWrapper(nativeVoice)
	{
	}

	AllegroVoice::~AllegroVoice()
	{
	}

	AllegroVoice::!AllegroVoice()
	{
	}
}

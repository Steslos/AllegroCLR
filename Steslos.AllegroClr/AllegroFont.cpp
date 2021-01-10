#include "AllegroFont.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroFont::AllegroFont(ALLEGRO_FONT* nativeFont)
		: NativePointerWrapper(nativeFont)
	{
	}

	AllegroFont::~AllegroFont()
	{
	}

	AllegroFont::!AllegroFont()
	{
	}
}

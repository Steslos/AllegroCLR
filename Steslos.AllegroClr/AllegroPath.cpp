#include "AllegroLibraryHeaders.h"
#include "AllegroPath.h"

namespace Steslos::AllegroClr
{
	AllegroPath::AllegroPath(ALLEGRO_PATH* nativePath)
		: NativePointerWrapper(nativePath)
	{
	}

	AllegroPath::~AllegroPath()
	{
	}

	AllegroPath::!AllegroPath()
	{
	}
}

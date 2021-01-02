#include "AllegroConfigEntry.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroConfigEntry::AllegroConfigEntry(ALLEGRO_CONFIG_ENTRY* nativeConfigEntry)
		: NativePointerWrapper(nativeConfigEntry)
	{
	}

	AllegroConfigEntry::~AllegroConfigEntry()
	{
	}

	AllegroConfigEntry::!AllegroConfigEntry()
	{
	}
}

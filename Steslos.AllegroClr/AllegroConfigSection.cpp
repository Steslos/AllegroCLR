#include "AllegroConfigSection.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroConfigSection::AllegroConfigSection(ALLEGRO_CONFIG_SECTION* nativeConfigSection)
		: NativePointerWrapper(nativeConfigSection)
	{
	}

	AllegroConfigSection::~AllegroConfigSection()
	{
	}

	AllegroConfigSection::!AllegroConfigSection()
	{
	}
}

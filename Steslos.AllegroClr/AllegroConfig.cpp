#include "AllegroConfig.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroConfig::AllegroConfig(ALLEGRO_CONFIG* nativeConfig)
		: NativePointerWrapper(nativeConfig)
	{
	}

	AllegroConfig::~AllegroConfig()
	{
	}

	AllegroConfig::!AllegroConfig()
	{
	}
}

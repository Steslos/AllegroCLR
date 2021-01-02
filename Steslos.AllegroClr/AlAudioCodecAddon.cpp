#include "Al.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	UInt32 Al::GetAllegroACodecVersion()
	{
		return al_get_allegro_acodec_version();
	}

	Boolean Al::InitACodecAddon()
	{
		return al_init_acodec_addon();
	}

	Boolean Al::IsACodecAddonInitialized()
	{
		return al_is_acodec_addon_initialized();
	}
}

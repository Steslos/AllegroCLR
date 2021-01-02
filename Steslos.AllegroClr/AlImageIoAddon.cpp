#include "Al.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	UInt32 Al::GetAllegroImageVersion()
	{
		return al_get_allegro_image_version();
	}

	Boolean Al::InitImageAddon()
	{
		return al_init_image_addon();
	}

	Boolean Al::IsImageAddonInitialized()
	{
		return al_is_image_addon_initialized();
	}

	void Al::ShutdownImageAddon()
	{
		al_shutdown_image_addon();
	}
}

#include "Al.h"
#include "AllegroFont.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroTtfFlags.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	Boolean Al::InitTtfAddon()
	{
		return al_init_ttf_addon();
	}

	Boolean Al::IsTtfAddonInitialized()
	{
		return al_is_ttf_addon_initialized();
	}

	void Al::ShutdownTtfAddon()
	{
		al_shutdown_ttf_addon();
	}

	AllegroFont^ Al::LoadTtfFont(String^ filename, Int32 size, AllegroTtfFlags flags)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeFlags = static_cast<int>(flags);
		auto nativeFont = al_load_ttf_font(nativeFilename, size, nativeFlags);
		return gcnew AllegroFont(nativeFont);
	}

	AllegroFont^ Al::LoadTtfFontStretch(String^ filename, Int32 w, Int32 h, AllegroTtfFlags flags)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeFlags = static_cast<int>(flags);
		auto nativeFont = al_load_ttf_font_stretch(nativeFilename, w, h, nativeFlags);
		return gcnew AllegroFont(nativeFont);
	}

	Int32 Al::GetAllegroTtfVersion()
	{
		return al_get_allegro_ttf_version();
	}
}

#include "Al.h"
#include "AllegroDisplayMode.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroDisplayMode^ Al::GetDisplayMode(Int32 index, AllegroDisplayMode^ mode)
	{
		auto nativeMode = mode->GetNativePointer();
		auto returnedNativeMode = al_get_display_mode(index, nativeMode);
		return gcnew AllegroDisplayMode(returnedNativeMode);
	}

	Int32 Al::GetNumDisplayModes()
	{
		return al_get_num_display_modes();
	}
}

#include "Al.h"
#include "AllegroDisplayMode.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroDisplayMode::AllegroDisplayMode()
		: NativePointerWrapper(new ALLEGRO_DISPLAY_MODE())
	{
	}

	AllegroDisplayMode::AllegroDisplayMode(ALLEGRO_DISPLAY_MODE* nativeDisplayMode)
		: NativePointerWrapper(nativeDisplayMode)
	{
	}

	AllegroDisplayMode::~AllegroDisplayMode()
	{
		if (!_isDisposed)
		{
			this->!AllegroDisplayMode();
			_isDisposed = true;
		}
	}

	AllegroDisplayMode::!AllegroDisplayMode()
	{
		if (!this->IsNull)
		{
			delete this->GetNativePointer();
			this->SetNativePointerNull();
		}
	}
}

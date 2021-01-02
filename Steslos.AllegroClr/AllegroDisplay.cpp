#include "AllegroDisplay.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroDisplay::AllegroDisplay(ALLEGRO_DISPLAY* nativeDisplay)
		: NativePointerWrapper(nativeDisplay)
	{
	}

	AllegroDisplay::~AllegroDisplay()
	{
		if (!_isDisposed)
		{
			this->!AllegroDisplay();
			_isDisposed = true;
		}
	}

	AllegroDisplay::!AllegroDisplay()
	{
		if (!this->IsNull)
		{
			al_destroy_display(this->GetNativePointer());
			this->SetNativePointerNull();
		}
	}
}

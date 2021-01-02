#include "AllegroBitmap.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroBitmap::AllegroBitmap(ALLEGRO_BITMAP* nativeBitmap)
		: NativePointerWrapper(nativeBitmap)
	{
	}

	AllegroBitmap::~AllegroBitmap()
	{
		if (!_isDisposed)
		{
			this->!AllegroBitmap();
			_isDisposed = true;
		}
	}

	AllegroBitmap::!AllegroBitmap()
	{
		if (!this->IsNull)
		{
			al_destroy_bitmap(this->GetNativePointer());
			this->SetNativePointerNull();
		}
	}
}

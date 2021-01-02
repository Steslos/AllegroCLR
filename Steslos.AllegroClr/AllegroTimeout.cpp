#include "AllegroLibraryHeaders.h"
#include "AllegroTimeout.h"

namespace Steslos::AllegroClr
{
	AllegroTimeout::AllegroTimeout()
		: NativePointerWrapper(new ALLEGRO_TIMEOUT())
	{
	}

	AllegroTimeout::~AllegroTimeout()
	{
		if (!_isDisposed)
		{
			this->!AllegroTimeout();
			_isDisposed = true;
		}
	}

	AllegroTimeout::!AllegroTimeout()
	{
		if (!this->IsNull)
		{
			delete this->GetNativePointer();
			this->SetNativePointerNull();
		}
	}
}

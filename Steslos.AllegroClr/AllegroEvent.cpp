#include "AllegroEvent.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroEvent::AllegroEvent()
		: NativePointerWrapper(new ALLEGRO_EVENT())
	{
	}

	AllegroEvent::~AllegroEvent()
	{
		if (!_isDisposed)
		{
			this->!AllegroEvent();
			_isDisposed = true;
		}
	}

	AllegroEvent::!AllegroEvent()
	{
		if (!this->IsNull)
		{
			delete this->GetNativePointer();
			this->SetNativePointerNull();
		}
	}
}

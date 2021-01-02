#include "Al.h"
#include "AllegroKeyboardState.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroKeyboardState::AllegroKeyboardState()
		: NativePointerWrapper(new ALLEGRO_KEYBOARD_STATE())
	{
	}

	AllegroKeyboardState::~AllegroKeyboardState()
	{
		if (!_isDisposed)
		{
			this->!AllegroKeyboardState();
			_isDisposed = true;
		}
	}

	AllegroKeyboardState::!AllegroKeyboardState()
	{
		if (!this->IsNull)
		{
			delete this->GetNativePointer();
			this->SetNativePointerNull();
		}
	}
}

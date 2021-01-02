#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_KEYBOARD_STATE;

namespace Steslos::AllegroClr
{
	public ref class AllegroKeyboardState : public NativePointerWrapper<ALLEGRO_KEYBOARD_STATE*>
	{
	public:
		AllegroKeyboardState();

	internal:
		virtual ~AllegroKeyboardState();
		!AllegroKeyboardState();

	private:
		bool _isDisposed = false;
	};
}

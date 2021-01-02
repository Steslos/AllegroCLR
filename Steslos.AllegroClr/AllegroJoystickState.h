#pragma once

#include "AllegroLibraryHeaders.h"
#include "NativePointerWrapper.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public ref class AllegroJoystickState : public NativePointerWrapper<ALLEGRO_JOYSTICK_STATE*>
	{
	public:
		AllegroJoystickState();

		Int32 GetButton(Int32 button);
		Single GetStickAxis(Int32 stick, Int32 axis);


	internal:
		virtual ~AllegroJoystickState();
		!AllegroJoystickState();

	private:
		bool _isDisposed = false;
	};
}

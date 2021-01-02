#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_JOYSTICK;

namespace Steslos::AllegroClr
{
	public ref class AllegroJoystick : public NativePointerWrapper<ALLEGRO_JOYSTICK*>
	{
	internal:
		AllegroJoystick(ALLEGRO_JOYSTICK* nativeJoystick);
		virtual ~AllegroJoystick();
		!AllegroJoystick();
	};
}

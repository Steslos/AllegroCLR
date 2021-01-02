#include "AllegroJoystick.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroJoystick::AllegroJoystick(ALLEGRO_JOYSTICK* nativeJoystick)
		: NativePointerWrapper(nativeJoystick)
	{
	}

	AllegroJoystick::~AllegroJoystick()
	{
	}

	AllegroJoystick::!AllegroJoystick()
	{
	}
}

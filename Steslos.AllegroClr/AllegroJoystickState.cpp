#include "AllegroJoystickState.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroJoystickState::AllegroJoystickState()
		: NativePointerWrapper(new ALLEGRO_JOYSTICK_STATE())
	{
	}

	Int32 AllegroJoystickState::GetButton(Int32 button)
	{
		return this->GetNativePointer()->button[button];
	}

	Single AllegroJoystickState::GetStickAxis(Int32 stick, Int32 axis)
	{
		return this->GetNativePointer()->stick[stick].axis[axis];
	}

	AllegroJoystickState::~AllegroJoystickState()
	{
		if (!_isDisposed)
		{
			this->!AllegroJoystickState();
			_isDisposed = true;
		}
	}

	AllegroJoystickState::!AllegroJoystickState()
	{
		if (!this->IsNull)
		{
			delete this->GetNativePointer();
			this->SetNativePointerNull();
		}
	}
}

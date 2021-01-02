#include "Al.h"
#include "AllegroEventSource.h"
#include "AllegroJoyFlags.h"
#include "AllegroJoystick.h"
#include "AllegroJoystickState.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroEventSource^ Al::GetJoystickEventSource()
	{
		auto nativeEventSource = al_get_joystick_event_source();
		return gcnew AllegroEventSource(nativeEventSource);
	}

	AllegroJoystick^ Al::GetJoystick(Int32 num)
	{
		auto nativeJoystick = al_get_joystick(num);
		return gcnew AllegroJoystick(nativeJoystick);
	}

	Boolean Al::GetJoystickActive(AllegroJoystick^ joy)
	{
		auto nativeJoystick = joy->GetNativePointer();
		return al_get_joystick_active(nativeJoystick);
	}

	Boolean Al::InstallJoystick()
	{
		return al_install_joystick();
	}

	Boolean Al::IsJoystickInstalled()
	{
		return al_is_joystick_installed();
	}

	Boolean Al::ReconfigureJoysticks()
	{
		return al_reconfigure_joysticks();
	}

	Int32 Al::GetJoystickNumAxes(AllegroJoystick^ joy, Int32 stick)
	{
		auto nativeJoystick = joy->GetNativePointer();
		return al_get_joystick_num_axes(nativeJoystick, stick);
	}

	Int32 Al::GetJoystickNumButtons(AllegroJoystick^ joy)
	{
		auto nativeJoystick = joy->GetNativePointer();
		return al_get_joystick_num_buttons(nativeJoystick);
	}

	Int32 Al::GetJoystickNumSticks(AllegroJoystick^ joy)
	{
		auto nativeJoystick = joy->GetNativePointer();
		return al_get_joystick_num_sticks(nativeJoystick);
	}

	AllegroJoyFlags Al::GetJoystickStickFlags(AllegroJoystick^ joy, Int32 stick)
	{
		auto nativeJoystick = joy->GetNativePointer();
		auto nativeJoyFlags = al_get_joystick_stick_flags(nativeJoystick, stick);
		return static_cast<AllegroJoyFlags>(nativeJoyFlags);
	}

	Int32 Al::GetNumJoysticks()
	{
		return al_get_num_joysticks();
	}

	String^ Al::GetJoystickAxisName(AllegroJoystick^ joy, Int32 stick, Int32 axis)
	{
		auto nativeJoystick = joy->GetNativePointer();
		auto nativeName = al_get_joystick_axis_name(nativeJoystick, stick, axis);
		return gcnew String(nativeName);
	}

	String^ Al::GetJoystickButtonName(AllegroJoystick^ joy, Int32 button)
	{
		auto nativeJoystick = joy->GetNativePointer();
		auto nativeName = al_get_joystick_button_name(nativeJoystick, button);
		return gcnew String(nativeName);
	}

	String^ Al::GetJoystickName(AllegroJoystick^ joy)
	{
		auto nativeJoystick = joy->GetNativePointer();
		auto nativeName = al_get_joystick_name(nativeJoystick);
		return gcnew String(nativeName);
	}

	String^ Al::GetJoystickStickName(AllegroJoystick^ joy, Int32 stick)
	{
		auto nativeJoystick = joy->GetNativePointer();
		auto nativeName = al_get_joystick_stick_name(nativeJoystick, stick);
		return gcnew String(nativeName);
	}

	void Al::GetJoystickState(AllegroJoystick^ joy, AllegroJoystickState^ retState)
	{
		auto nativeJoystick = joy->GetNativePointer();
		auto nativeState = retState->GetNativePointer();
		al_get_joystick_state(nativeJoystick, nativeState);
	}

	void Al::ReleaseJoystick(AllegroJoystick^ joy)
	{
		auto nativeJoystick = joy->GetNativePointer();
		al_release_joystick(nativeJoystick);
	}

	void Al::UninstallJoystick()
	{
		al_uninstall_joystick();
	}
}

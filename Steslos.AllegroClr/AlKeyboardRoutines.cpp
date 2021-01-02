#include "Al.h"
#include "AllegroEventSource.h"
#include "AllegroKeyboardModifier.h"
#include "AllegroKeyboardState.h"
#include "AllegroKeyCode.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroEventSource^ Al::GetKeyboardEventSource()
	{
		auto nativeEventSource = al_get_keyboard_event_source();
		return gcnew AllegroEventSource(nativeEventSource);
	}

	Boolean Al::InstallKeyboard()
	{
		return al_install_keyboard();
	}

	Boolean Al::IsKeyboardInstalled()
	{
		return al_is_keyboard_installed();
	}

	Boolean Al::KeyDown(AllegroKeyboardState^ state, AllegroKeyCode keycode)
	{
		auto nativeState = state->GetNativePointer();
		auto nativeKeyCode = static_cast<int>(keycode);
		return al_key_down(nativeState, nativeKeyCode);
	}

	Boolean Al::SetKeyboardLeds(AllegroKeyboardModifier leds)
	{
		auto nativeLeds = static_cast<int>(leds);
		return al_set_keyboard_leds(nativeLeds);
	}

	String^ Al::KeycodeToName(AllegroKeyCode keycode)
	{
		auto nativeKeyCode = static_cast<int>(keycode);
		auto nativeName = al_keycode_to_name(nativeKeyCode);
		return gcnew String(nativeName);
	}

	void Al::GetKeyboardState(AllegroKeyboardState^ retState)
	{
		auto nativeRetState = retState->GetNativePointer();
		al_get_keyboard_state(nativeRetState);
	}

	void Al::UninstallKeyboard()
	{
		al_uninstall_keyboard();
	}
}

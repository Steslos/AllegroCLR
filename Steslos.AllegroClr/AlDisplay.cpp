#include "Al.h"
#include "AllegroBitmap.h"
#include "AllegroDisplay.h"
#include "AllegroDisplayFlags.h"
#include "AllegroDisplayOption.h"
#include "AllegroDisplayOrientation.h"
#include "AllegroEventSource.h"
#include "AllegroImportance.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroPixelFormat.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	void Al::AcknowledgeDrawingHalt(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_acknowledge_drawing_halt(nativeDisplay);
	}

	void Al::AcknowledgeDrawingResume(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_acknowledge_drawing_resume(nativeDisplay);
	}

	Boolean Al::AcknowledgeResize(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return al_acknowledge_resize(nativeDisplay);
	}

	void Al::ApplyWindowConstraints(AllegroDisplay^ display, Boolean onOff)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_apply_window_constraints(nativeDisplay, onOff);
	}

	Boolean Al::ClipboardHasText(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return al_clipboard_has_text(nativeDisplay);
	}

	AllegroDisplay^ Al::CreateDisplay(Int32 w, Int32 h)
	{
		return gcnew AllegroDisplay(al_create_display(w, h));
	}

	void Al::DestroyDisplay(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_destroy_display(nativeDisplay);
		display->SetNativePointerNull();
	}

	void Al::FlipDisplay()
	{
		al_flip_display();
	}

	AllegroBitmap^ Al::GetBackbuffer(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return gcnew AllegroBitmap(al_get_backbuffer(nativeDisplay));
	}

	String^ Al::GetClipboardText(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return gcnew String(al_get_clipboard_text(nativeDisplay));
	}

	AllegroEventSource^ Al::GetDisplayEventSource(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return gcnew AllegroEventSource(al_get_display_event_source(nativeDisplay));
	}

	AllegroDisplayFlags Al::GetDisplayFlags(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		auto nativeDisplayFlags = al_get_display_flags(nativeDisplay);
		return static_cast<AllegroDisplayFlags>(nativeDisplayFlags);
	}

	AllegroPixelFormat Al::GetDisplayFormat(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		auto nativePixelFormat = al_get_display_format(nativeDisplay);
		return static_cast<AllegroPixelFormat>(nativePixelFormat);
	}

	Int32 Al::GetDisplayHeight(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return al_get_display_height(nativeDisplay);
	}

	Int32 Al::GetDisplayOption(AllegroDisplay^ display, AllegroDisplayOption option)
	{
		auto nativeDisplay = display->GetNativePointer();
		auto nativeOption = static_cast<int>(option);
		return al_get_display_option(nativeDisplay, nativeOption);
	}

	AllegroDisplayOrientation Al::GetDisplayOrientation(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		auto nativeDisplayOrientation = al_get_display_orientation(nativeDisplay);
		return static_cast<AllegroDisplayOrientation>(nativeDisplayOrientation);
	}

	Int32 Al::GetDisplayRefreshRate(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return al_get_display_refresh_rate(nativeDisplay);
	}

	Int32 Al::GetDisplayWidth(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		return al_get_display_width(nativeDisplay);
	}

	AllegroDisplayFlags Al::GetNewDisplayFlags()
	{
		auto nativeDisplayFlags = al_get_new_display_flags();
		return static_cast<AllegroDisplayFlags>(nativeDisplayFlags);
	}

	Int32 Al::GetNewDisplayOption(AllegroDisplayOption option, AllegroImportance% importance)
	{
		auto nativeImportance = static_cast<int>(importance);
		auto nativeReturnValue = al_get_new_display_option((int)option, &nativeImportance);
		importance = static_cast<AllegroImportance>(nativeImportance);
		return nativeReturnValue;
	}

	Int32 Al::GetNewDisplayRefreshRate()
	{
		return al_get_new_display_refresh_rate();
	}

	void Al::GetNewWindowPosition(Int32% x, Int32% y)
	{
		int nativeX = 0;
		int nativeY = 0;
		al_get_new_window_position(&nativeX, &nativeY);
		x = nativeX;
		y = nativeY;
	}

	String^ Al::GetNewWindowTitle()
	{
		auto nativeTitle = al_get_new_window_title();
		return gcnew String(nativeTitle);
	}

	Int32 Al::GetNewWindowTitleMaxSize()
	{
		return ALLEGRO_NEW_WINDOW_TITLE_MAX_SIZE;
	}

	Boolean Al::GetWindowConstraints(AllegroDisplay^ display, Int32% minWidth, Int32% minHeight, Int32% maxWidth, Int32% maxHeight)
	{
		auto nativeDisplay = display->GetNativePointer();
		int nativeMinWidth = 0;
		int nativeMinHeight = 0;
		int nativeMaxWidth = 0;
		int nativeMaxHeight = 0;
		auto nativeReturnValue = al_get_window_constraints(nativeDisplay, &nativeMinWidth, &nativeMinHeight, &nativeMaxWidth, &nativeMaxHeight);
		minWidth = nativeMinWidth;
		minHeight = nativeMinHeight;
		maxWidth = nativeMaxWidth;
		maxHeight = nativeMaxHeight;
		return nativeReturnValue;
	}

	void Al::GetWindowPosition(AllegroDisplay^ display, Int32% x, Int32% y)
	{
		auto nativeDisplay = display->GetNativePointer();
		int nativeX = 0;
		int nativeY = 0;
		al_get_window_position(nativeDisplay, &nativeX, &nativeY);
		x = nativeX;
		y = nativeY;
	}

	Boolean Al::InhibitScreensaver(Boolean inhibit)
	{
		return al_inhibit_screensaver(inhibit);
	}

	void Al::ResetNewDisplayOptions()
	{
		al_reset_new_display_options();
	}

	void Al::ResizeDisplay(AllegroDisplay^ display, Int32 width, Int32 height)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_resize_display(nativeDisplay, width, height);
	}

	Boolean Al::SetClipboardText(AllegroDisplay^ display, String^ text)
	{
		marshal_context marshalContext;
		auto nativeDisplay = display->GetNativePointer();
		auto nativeText = marshalContext.marshal_as<const char*>(text);
		return al_set_clipboard_text(nativeDisplay, nativeText);
	}

	Boolean Al::SetDisplayFlag(AllegroDisplay^ display, AllegroDisplayFlags flag, Boolean onOff)
	{
		auto nativeDisplay = display->GetNativePointer();
		return al_set_display_flag(nativeDisplay, static_cast<int>(flag), onOff);
	}

	void Al::SetDisplayIcon(AllegroDisplay^ display, AllegroBitmap^ icon)
	{
		auto nativeDisplay = display->GetNativePointer();
		auto nativeBitmap = icon->GetNativePointer();
		al_set_display_icon(nativeDisplay, nativeBitmap);
	}

	void Al::SetDisplayIcons(AllegroDisplay^ display, Int32 numIcons, array<AllegroBitmap^>^ icons)
	{
		auto nativeDisplay = display->GetNativePointer();
		auto nativeIcons = new ALLEGRO_BITMAP * [numIcons];
		for (int i = 0; i < numIcons; i++)
		{
			nativeIcons[i] = icons[i]->GetNativePointer();
		}
		al_set_display_icons(nativeDisplay, numIcons, nativeIcons);
		delete nativeIcons;
	}

	void Al::SetDisplayOption(AllegroDisplay^ display, AllegroDisplayOption option, Int32 value)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_set_display_option(nativeDisplay, static_cast<int>(option), value);
	}

	void Al::SetNewDisplayFlags(AllegroDisplayFlags flags)
	{
		al_set_new_display_flags(static_cast<int>(flags));
	}

	void Al::SetNewDisplayOption(AllegroDisplayOption option, Int32 value, AllegroImportance importance)
	{
		al_set_new_display_option(static_cast<int>(option), value, static_cast<int>(importance));
	}

	void Al::SetNewDisplayRefreshRate(Int32 refreshRate)
	{
		al_set_new_display_refresh_rate(refreshRate);
	}

	void Al::SetNewWindowPosition(Int32 x, Int32 y)
	{
		al_set_new_window_position(x, y);
	}

	void Al::SetNewWindowTitle(String^ title)
	{
		marshal_context marshalContext;
		auto nativeTitle = marshalContext.marshal_as<const char*>(title);
		al_set_new_window_title(nativeTitle);
	}

	void Al::SetWindowConstraints(AllegroDisplay^ display, Int32 minWidth, Int32 minHeight, Int32 maxWidth, Int32 maxHeight)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_set_window_constraints(nativeDisplay, minWidth, minHeight, maxWidth, maxHeight);
	}

	void Al::SetWindowPosition(AllegroDisplay^ display, Int32 x, Int32 y)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_set_window_position(nativeDisplay, x, y);
	}

	void Al::SetWindowTitle(AllegroDisplay^ display, String^ title)
	{
		marshal_context marshalContext;
		auto nativeDisplay = display->GetNativePointer();
		auto nativeTitle = marshalContext.marshal_as<const char*>(title);
		al_set_window_title(nativeDisplay, nativeTitle);
	}

	void Al::UpdateDisplayRegion(Int32 x, Int32 y, Int32 width, Int32 height)
	{
		al_update_display_region(x, y, width, height);
	}

	void Al::WaitForVsync()
	{
		al_wait_for_vsync();
	}
}

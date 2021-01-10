#include "Al.h"
#include "AllegroColor.h"
#include "AllegroDrawTextFlags.h"
#include "AllegroFont.h"
#include "AllegroLibraryHeaders.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	Boolean Al::InitFontAddon()
	{
		return al_init_font_addon();
	}

	Boolean Al::IsFontAddonInitialized()
	{
		return al_is_font_addon_initialized();
	}

	void Al::ShutdownFontAddon()
	{
		al_shutdown_font_addon();
	}

	AllegroFont^ Al::LoadFont(String^ filename, Int32 size, AllegroBitmapFlags flags)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeFlags = static_cast<int>(flags);
		auto nativeFont = al_load_font(nativeFilename, size, nativeFlags);
		return gcnew AllegroFont(nativeFont);
	}

	void Al::DestroyFont(AllegroFont^ font)
	{
		auto nativeFont = font->GetNativePointer();
		al_destroy_font(nativeFont);
	}

	Int32 Al::GetFontLineHeight(AllegroFont^ font)
	{
		auto nativeFont = font->GetNativePointer();
		return al_get_font_line_height(nativeFont);
	}

	Int32 Al::GetFontAscent(AllegroFont^ font)
	{
		auto nativeFont = font->GetNativePointer();
		return al_get_font_ascent(nativeFont);
	}

	Int32 Al::GetFontDescent(AllegroFont^ font)
	{
		auto nativeFont = font->GetNativePointer();
		return al_get_font_descent(nativeFont);
	}

	Int32 Al::GetTextWidth(AllegroFont^ font, String^ text)
	{
		marshal_context marshalContext;
		auto nativeFont = font->GetNativePointer();
		auto nativeText = marshalContext.marshal_as<const char*>(text);
		return al_get_text_width(nativeFont, nativeText);
	}

	void Al::DrawText(AllegroFont^ font, AllegroColor^ color, Single x, Single y, AllegroDrawTextFlags flags, String^ text)
	{
		marshal_context marshalContext;
		auto nativeFont = font->GetNativePointer();
		auto nativeColor = color->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		auto nativeText = marshalContext.marshal_as<const char*>(text);
		al_draw_text(nativeFont, *nativeColor, x, y, nativeFlags, nativeText);
	}

	void Al::DrawJustifiedText(AllegroFont^ font, AllegroColor^ color, Single x1, Single x2, Single y, Single diff, AllegroDrawTextFlags flags, String^ text)
	{
		marshal_context marshalContext;
		auto nativeFont = font->GetNativePointer();
		auto nativeColor = color->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		auto nativeText = marshalContext.marshal_as<const char*>(text);
		al_draw_justified_text(nativeFont, *nativeColor, x1, x2, y, diff, nativeFlags, nativeText);
	}

	/*void DrawTextF(AllegroFont^ font, AllegroColor^ color, Single x, Single y, AllegroDrawTextFlags flags, String^ format, ... array<String^>^ args)
	{
	}*/

	/*void DrawJustifiedTextF(AllegroFont^ font, AllegroColor^ color, Single x1, Single x2, Single y, Single diff, AllegroDrawTextFlags flags, String^ format, ... array<String^>^ args)
	{
	}*/

	void Al::GetTextDimensions(AllegroFont^ font, String^ text, Int32% bbx, Int32% bby, Int32% bbw, Int32% bbh)
	{
		marshal_context marshalContext;
		auto nativeFont = font->GetNativePointer();
		auto nativeText = marshalContext.marshal_as<const char*>(text);
		int nativeX, nativeY, nativeW, nativeH;
		al_get_text_dimensions(nativeFont, nativeText, &nativeX, &nativeY, &nativeW, &nativeH);
		bbx = nativeX;
		bby = nativeY;
		bbw = nativeW;
		bbh = nativeH;
	}

	Int32 Al::GetAllegroFontVersion()
	{
		return al_get_allegro_font_version();
	}

	/*Int32 GetFontRanges(AllegroFont^ font, Int32 rangesCount, array<Int32>^ ranges)
	{		
	}*/

	void Al::SetFallbackFont(AllegroFont^ font, AllegroFont^ fallbackFont)
	{
		auto nativeFont = font->GetNativePointer();
		auto nativeFallbackFont = fallbackFont->GetNativePointer();
		al_set_fallback_font(nativeFont, nativeFallbackFont);
	}

	AllegroFont^ Al::GetFallbackFont(AllegroFont^ font)
	{
		auto nativeFont = font->GetNativePointer();
		auto returnedFont = al_get_fallback_font(nativeFont);
		return gcnew AllegroFont(returnedFont);
	}
}

#include "Al.h"
#include "AllegroColor.h"
#include "AllegroFont.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	void Al::DrawGlyph(AllegroFont^ font, AllegroColor^ color, Single x, Single y, Int32 codePoint)
	{
		auto nativeFont = font->GetNativePointer();
		auto nativeColor = color->GetNativePointer();
		al_draw_glyph(nativeFont, *nativeColor, x, y, codePoint);
	}

	Int32 Al::GetGlyphWidth(AllegroFont^ font, Int32 codePoint)
	{
		auto nativeFont = font->GetNativePointer();
		return al_get_glyph_width(nativeFont, codePoint);
	}

	Boolean Al::GetGlyphDimensions(AllegroFont^ font, Int32 codePoint, Int32% bbx, Int32% bby, Int32% bbw, Int32% bbh)
	{
		auto nativeFont = font->GetNativePointer();
		int nativeX, nativeY, nativeW, nativeH;
		auto returnBoolean = al_get_glyph_dimensions(nativeFont, codePoint, &nativeX, &nativeY, &nativeW, &nativeH);
		bbx = nativeX;
		bby = nativeY;
		bbw = nativeW;
		bbh = nativeH;
		return returnBoolean;
	}

	Int32 Al::GetGlyphAdvance(AllegroFont^ font, Int32 codePoint1, Int32 codePoint2)
	{
		auto nativeFont = font->GetNativePointer();
		return al_get_glyph_advance(nativeFont, codePoint1, codePoint2);
	}
}

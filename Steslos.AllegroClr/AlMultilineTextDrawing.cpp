#include "Al.h"
#include "AllegroColor.h"
#include "AllegroDrawTextFlags.h"
#include "AllegroFont.h"
#include "AllegroLibraryHeaders.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	void Al::DrawMultilineText(AllegroFont^ font, AllegroColor^ color, Single x, Single y, Single maxWidth, Single maxHeight, AllegroDrawTextFlags flags, String^ text)
	{
		marshal_context marshalContext;
		auto nativeFont = font->GetNativePointer();
		auto nativeColor = color->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		auto nativeText = marshalContext.marshal_as<const char*>(text);
		al_draw_multiline_text(nativeFont, *nativeColor, x, y, maxWidth, maxHeight, nativeFlags, nativeText);
	}
}

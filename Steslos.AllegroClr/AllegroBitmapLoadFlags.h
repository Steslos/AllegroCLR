#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	[System::FlagsAttribute]
	public enum class AllegroBitmapLoadFlags : Int32
	{
		KeepBitmapFormat = ALLEGRO_KEEP_BITMAP_FORMAT,
		KeepIndex = ALLEGRO_KEEP_INDEX,
		NoPremultipliedAlpha = ALLEGRO_NO_PREMULTIPLIED_ALPHA,
	};
}

#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	[System::FlagsAttribute]
	public enum class AllegroBitmapFlags : Int32
	{
		AlphaTest = ALLEGRO_ALPHA_TEST,
		ConvertBitmap = ALLEGRO_CONVERT_BITMAP,
		ForceLocking = ALLEGRO_FORCE_LOCKING,
		MagLinear = ALLEGRO_MAG_LINEAR,
		MemoryBitmap = ALLEGRO_MEMORY_BITMAP,
		MinLinear = ALLEGRO_MIN_LINEAR,
		MipMap = ALLEGRO_MIPMAP,
		NoPreserveTexture = ALLEGRO_NO_PRESERVE_TEXTURE,
		VideoBitmap = ALLEGRO_VIDEO_BITMAP
	};
}

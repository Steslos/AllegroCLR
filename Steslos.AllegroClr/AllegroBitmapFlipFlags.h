#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	[System::FlagsAttribute]
	public enum class AllegroBitmapFlipFlags : Int32
	{
		FlipHorizontal = ALLEGRO_FLIP_HORIZONTAL,
		FlipVertical = ALLEGRO_FLIP_VERTICAL,
		None = 0
	};
}

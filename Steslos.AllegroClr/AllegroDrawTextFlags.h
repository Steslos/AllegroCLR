#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	[System::FlagsAttribute]
	public enum class AllegroDrawTextFlags : Int32
	{
		AlignCenter = ALLEGRO_ALIGN_CENTER,
		AlignInteger = ALLEGRO_ALIGN_INTEGER,
		AlignLeft = ALLEGRO_ALIGN_LEFT,
		AlignRight = ALLEGRO_ALIGN_RIGHT,
	};
}
#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroTtfFlags : Int32
	{
		None = 0,
		NoKerning = ALLEGRO_TTF_NO_KERNING,
		Monochrome = ALLEGRO_TTF_MONOCHROME,
		NoAutohint = ALLEGRO_TTF_NO_AUTOHINT
	};
}

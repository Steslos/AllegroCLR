#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroImportance : Int32
	{
		DontCare = ALLEGRO_DONTCARE,
		Require = ALLEGRO_REQUIRE,
		Suggest = ALLEGRO_SUGGEST
	};
}

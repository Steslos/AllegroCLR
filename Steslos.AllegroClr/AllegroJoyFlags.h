#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	[FlagsAttribute]
	public enum class AllegroJoyFlags : Int32
	{
		Analog = ALLEGRO_JOYFLAG_ANALOGUE,
		Digital = ALLEGRO_JOYFLAG_DIGITAL
	};
}

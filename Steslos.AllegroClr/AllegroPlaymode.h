#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroPlaymode : Int32
	{
		Bidirectional = ALLEGRO_PLAYMODE_BIDIR,
		Loop = ALLEGRO_PLAYMODE_LOOP,
		Once = ALLEGRO_PLAYMODE_ONCE,
	};
}

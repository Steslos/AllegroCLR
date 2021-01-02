#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroMixerQuality : Int32
	{
		Cubic = ALLEGRO_MIXER_QUALITY_CUBIC,
		Linear = ALLEGRO_MIXER_QUALITY_LINEAR,
		Point = ALLEGRO_MIXER_QUALITY_POINT,
	};
}

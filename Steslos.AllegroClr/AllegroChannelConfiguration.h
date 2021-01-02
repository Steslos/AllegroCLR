#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroChannelConfiguration : Int32
	{
		Speakers1 = ALLEGRO_CHANNEL_CONF_1,
		Speakers2 = ALLEGRO_CHANNEL_CONF_2,
		Speakers3 = ALLEGRO_CHANNEL_CONF_3,
		Speakers4 = ALLEGRO_CHANNEL_CONF_4,
		Speakers51 = ALLEGRO_CHANNEL_CONF_5_1,
		Speakers61 = ALLEGRO_CHANNEL_CONF_6_1,
		Speakers71 = ALLEGRO_CHANNEL_CONF_7_1,
	};
}

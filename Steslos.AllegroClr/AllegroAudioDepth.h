#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroAudioDepth : Int32
	{
		Float32 = ALLEGRO_AUDIO_DEPTH_FLOAT32,
		Int16 = ALLEGRO_AUDIO_DEPTH_INT16,
		Int24 = ALLEGRO_AUDIO_DEPTH_INT24,
		Int8 = ALLEGRO_AUDIO_DEPTH_INT8,
		Uint16 = ALLEGRO_AUDIO_DEPTH_UINT16,
		Uint24 = ALLEGRO_AUDIO_DEPTH_UINT24,
		Uint8 = ALLEGRO_AUDIO_DEPTH_UINT8,
		Unsigned = ALLEGRO_AUDIO_DEPTH_UNSIGNED
	};
}

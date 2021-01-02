#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroDisplayOrientation : Int32
	{
		Degrees0 = ALLEGRO_DISPLAY_ORIENTATION_0_DEGREES,
		Degrees180 = ALLEGRO_DISPLAY_ORIENTATION_180_DEGREES,
		Degrees270 = ALLEGRO_DISPLAY_ORIENTATION_270_DEGREES,
		Degrees90 = ALLEGRO_DISPLAY_ORIENTATION_90_DEGREES,
		FaceDown = ALLEGRO_DISPLAY_ORIENTATION_FACE_DOWN,
		FaceUp = ALLEGRO_DISPLAY_ORIENTATION_FACE_UP,
		Unknown = ALLEGRO_DISPLAY_ORIENTATION_UNKNOWN
	};
}

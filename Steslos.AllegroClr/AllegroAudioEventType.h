#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroAudioEventType : Int32
	{
		StreamFinished = ALLEGRO_EVENT_AUDIO_STREAM_FINISHED,
		StreamFragment = ALLEGRO_EVENT_AUDIO_STREAM_FRAGMENT
	};
}

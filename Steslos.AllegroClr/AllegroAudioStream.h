#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_AUDIO_STREAM;

namespace Steslos::AllegroClr
{
	public ref class AllegroAudioStream : public NativePointerWrapper<ALLEGRO_AUDIO_STREAM*>
	{
	internal:
		AllegroAudioStream(ALLEGRO_AUDIO_STREAM* nativeAudioStream);
		virtual ~AllegroAudioStream();
		!AllegroAudioStream();
	};
}

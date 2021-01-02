#include "AllegroLibraryHeaders.h"
#include "AllegroAudioStream.h"

namespace Steslos::AllegroClr
{
	AllegroAudioStream::AllegroAudioStream(ALLEGRO_AUDIO_STREAM* nativeAudioStream)
		: NativePointerWrapper(nativeAudioStream)
	{
	}

	AllegroAudioStream::~AllegroAudioStream()
	{
	}

	AllegroAudioStream::!AllegroAudioStream()
	{
	}
}

#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_VOICE;

namespace Steslos::AllegroClr
{
	public ref class AllegroVoice : public NativePointerWrapper<ALLEGRO_VOICE*>
	{
	internal:
		AllegroVoice(ALLEGRO_VOICE* nativeVoice);
		virtual ~AllegroVoice();
		!AllegroVoice();
	};
}

#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_DISPLAY;

namespace Steslos::AllegroClr
{
	public ref class AllegroDisplay : public NativePointerWrapper<ALLEGRO_DISPLAY*>
	{
	internal:
		AllegroDisplay(ALLEGRO_DISPLAY* nativeDisplay);
		virtual ~AllegroDisplay();
		!AllegroDisplay();

	private:
		bool _isDisposed = false;
	};
}

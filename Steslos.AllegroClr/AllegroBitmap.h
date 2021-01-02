#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_BITMAP;

namespace Steslos::AllegroClr
{
	public ref class AllegroBitmap : public NativePointerWrapper<ALLEGRO_BITMAP*>
	{
	internal:
		AllegroBitmap(ALLEGRO_BITMAP* nativeDisplay);
		virtual ~AllegroBitmap();
		!AllegroBitmap();

	private:
		bool _isDisposed = false;
	};
}

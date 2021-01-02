#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_PATH;

namespace Steslos::AllegroClr
{
	using namespace System;

	public ref class AllegroPath : public NativePointerWrapper<ALLEGRO_PATH*>
	{
	internal:
		AllegroPath(ALLEGRO_PATH* nativePath);
		virtual ~AllegroPath();
		!AllegroPath();
	};
}

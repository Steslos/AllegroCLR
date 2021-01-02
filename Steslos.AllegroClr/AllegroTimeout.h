#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_TIMEOUT;

namespace Steslos::AllegroClr
{
	public ref class AllegroTimeout : public NativePointerWrapper<ALLEGRO_TIMEOUT*>
	{
	public:
		AllegroTimeout();

	internal:
		virtual ~AllegroTimeout();
		!AllegroTimeout();

	private:
		bool _isDisposed = false;
	};
}

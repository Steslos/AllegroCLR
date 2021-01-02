#pragma once

#include "AllegroEventType.h"
#include "NativePointerWrapper.h"

union ALLEGRO_EVENT;

namespace Steslos::AllegroClr
{
	public ref class AllegroEvent : public NativePointerWrapper<ALLEGRO_EVENT*>
	{
	public:
		AllegroEvent();

		property AllegroEventType Type
		{
			AllegroEventType get()
			{
				return static_cast<AllegroEventType>(this->GetNativePointer()->type);
			}
		}

	internal:
		virtual ~AllegroEvent();
		!AllegroEvent();

	private:
		bool _isDisposed = false;
	};
}

#pragma once

#include "AllegroLibraryHeaders.h"
#include "NativePointerWrapper.h"

namespace Steslos::AllegroClr
{
	public ref class AllegroDisplayMode : public NativePointerWrapper<ALLEGRO_DISPLAY_MODE*>
	{
	public:
		AllegroDisplayMode();

		property Int32 Format
		{
			Int32 get()
			{
				return this->GetNativePointer()->format;
			}
		}

		property Int32 Height
		{
			Int32 get()
			{
				return this->GetNativePointer()->height;
			}
		}

		property Int32 RefreshRate
		{
			Int32 get()
			{
				return this->GetNativePointer()->refresh_rate;
			}
		}

		property Int32 Width
		{
			Int32 get()
			{
				return this->GetNativePointer()->width;
			}
		}

	internal:
		AllegroDisplayMode(ALLEGRO_DISPLAY_MODE* nativeDisplayMode);
		virtual ~AllegroDisplayMode();
		!AllegroDisplayMode();

	private:
		bool _isDisposed = false;
	};
}

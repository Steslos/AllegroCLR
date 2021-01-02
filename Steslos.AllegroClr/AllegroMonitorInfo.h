#pragma once

#include "AllegroLibraryHeaders.h"
#include "NativePointerWrapper.h"

namespace Steslos::AllegroClr
{
	public ref class AllegroMonitorInfo : public NativePointerWrapper<ALLEGRO_MONITOR_INFO*>
	{
	public:
		property Int32 X1
		{
			Int32 get() { return this->GetNativePointer()->x1; }
		}

		property Int32 X2
		{
			Int32 get() { return this->GetNativePointer()->x2; }
		}

		property Int32 Y1
		{
			Int32 get() { return this->GetNativePointer()->y1; }
		}

		property Int32 Y2
		{
			Int32 get() { return this->GetNativePointer()->y2; }
		}

	public:
		AllegroMonitorInfo();

	internal:
		virtual ~AllegroMonitorInfo();
		!AllegroMonitorInfo();

	private:
		bool _isDisposed = false;
	};
}

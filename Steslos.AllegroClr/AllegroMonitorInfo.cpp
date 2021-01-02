#include "AllegroLibraryHeaders.h"
#include "AllegroMonitorInfo.h"

namespace Steslos::AllegroClr
{
	AllegroMonitorInfo::AllegroMonitorInfo()
		: NativePointerWrapper(new ALLEGRO_MONITOR_INFO())
	{
	}

	AllegroMonitorInfo::~AllegroMonitorInfo()
	{
		if (!_isDisposed)
		{
			this->!AllegroMonitorInfo();
			_isDisposed = true;
		}
	}

	AllegroMonitorInfo::!AllegroMonitorInfo()
	{
		if (!this->IsNull)
		{
			delete this->GetNativePointer();
			this->SetNativePointerNull();
		}
	}
}

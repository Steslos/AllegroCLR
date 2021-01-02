#include "Al.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroMonitorInfo.h"

namespace Steslos::AllegroClr
{
	Boolean Al::GetMonitorInfo(Int32 adapter, AllegroMonitorInfo^ info)
	{
		auto nativeMonitorInfo = info->GetNativePointer();
		return al_get_monitor_info(adapter, nativeMonitorInfo);
	}

	Int32 Al::GetMonitorDpi(Int32 adapter)
	{
		return al_get_monitor_dpi(adapter);
	}

	Int32 Al::GetNumVideoAdapters()
	{
		return al_get_num_video_adapters();
	}

	void Al::SetNewDisplayAdapter(Int32 adapter)
	{
		al_set_new_display_adapter(adapter);
	}
}

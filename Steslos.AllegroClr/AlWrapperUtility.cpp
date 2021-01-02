#include "Al.h"

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	String^ Al::GetAllegroCliBuild()
	{
		return gcnew String("AllegroCli.Wrapper .NET Core 3.1");
	}

	String^ Al::GetAllegroCliVersion()
	{
		return gcnew String("2.1.0");
	}

	Double Al::GetBpmToSecs(Double x)
	{
		return ALLEGRO_BPM_TO_SECS(x);
	}

	Double Al::GetBpsToSecs(Double x)
	{
		return ALLEGRO_BPS_TO_SECS(x);
	}
}

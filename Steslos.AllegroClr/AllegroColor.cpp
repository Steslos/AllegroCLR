#include "AllegroColor.h"
#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	AllegroColor::AllegroColor()
		: NativePointerWrapper(new ALLEGRO_COLOR())
	{
	}

	AllegroColor::AllegroColor(ALLEGRO_COLOR* nativeColor)
		: NativePointerWrapper(nativeColor)
	{
	}

	AllegroColor::~AllegroColor()
	{
		if (!_isDisposed)
		{
			this->!AllegroColor();
			_isDisposed = true;
		}
	}

	AllegroColor::!AllegroColor()
	{
		if (!this->IsNull)
		{
			delete this->GetNativePointer();
			this->SetNativePointerNull();
		}
	}

	AllegroColor^ AllegroColor::CreateFromCopy(ALLEGRO_COLOR& source)
	{
		auto newNativeColor = new ALLEGRO_COLOR();
		newNativeColor->r = source.r;
		newNativeColor->g = source.g;
		newNativeColor->b = source.b;
		newNativeColor->a = source.a;
		return gcnew AllegroColor(newNativeColor);
	}

	void AllegroColor::MapRgbAFUpdate(float r, float g, float b, float a)
	{
		*(this->GetNativePointer()) = al_map_rgba_f(r, g, b, a);
	}
}

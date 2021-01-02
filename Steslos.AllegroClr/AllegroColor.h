#pragma once

#include "NativePointerWrapper.h"

struct ALLEGRO_COLOR;

namespace Steslos::AllegroClr
{
	public ref class AllegroColor : public NativePointerWrapper<ALLEGRO_COLOR*>
	{
	public:
		AllegroColor();

		void MapRgbAFUpdate(float r, float g, float b, float a);

	internal:
		AllegroColor(ALLEGRO_COLOR* nativeColor);
		virtual ~AllegroColor();
		!AllegroColor();

		static AllegroColor^ CreateFromCopy(ALLEGRO_COLOR& source);

	private:
		bool _isDisposed = false;
	};
}

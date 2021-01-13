#pragma once

#include "AllegroLibraryHeaders.h"
#include "NativePointerWrapper.h"

namespace Steslos::AllegroClr
{
	public ref class AllegroColor : public NativePointerWrapper<ALLEGRO_COLOR*>
	{
	public:
		AllegroColor();

		void MapRgbAFUpdate(float r, float g, float b, float a);

		property Single A
		{
			Single get()
			{
				return this->GetNativePointer()->a;
			}

			void set(Single alpha)
			{
				this->GetNativePointer()->a = alpha;
			}
		}

		property Single B
		{
			Single get()
			{
				return this->GetNativePointer()->b;
			}

			void set(Single blue)
			{
				this->GetNativePointer()->b = blue;
			}
		}

		property Single G
		{
			Single get()
			{
				return this->GetNativePointer()->g;
			}

			void set(Single green)
			{
				this->GetNativePointer()->g = green;
			}
		}

		property Single R
		{
			Single get()
			{
				return this->GetNativePointer()->r;
			}

			void set(Single red)
			{
				this->GetNativePointer()->r = red;
			}
		}

	internal:
		AllegroColor(ALLEGRO_COLOR* nativeColor);
		virtual ~AllegroColor();
		!AllegroColor();

		static AllegroColor^ CreateFromCopy(ALLEGRO_COLOR& source);

	private:
		bool _isDisposed = false;
	};
}

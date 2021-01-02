#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroPixelFormat : Int32
	{
		Abgr8888 = ALLEGRO_PIXEL_FORMAT_ABGR_8888,
		Abgr8888Le = ALLEGRO_PIXEL_FORMAT_ABGR_8888_LE,
		AbgrF32 = ALLEGRO_PIXEL_FORMAT_ABGR_F32,
		Any = ALLEGRO_PIXEL_FORMAT_ANY,
		Any15NoAlpha = ALLEGRO_PIXEL_FORMAT_ANY_15_NO_ALPHA,
		Any16NoAlpha = ALLEGRO_PIXEL_FORMAT_ANY_16_NO_ALPHA,
		Any16WithAlpha = ALLEGRO_PIXEL_FORMAT_ANY_16_WITH_ALPHA,
		Any24NoAlpha = ALLEGRO_PIXEL_FORMAT_ANY_24_NO_ALPHA,
		Any32NoAlpha = ALLEGRO_PIXEL_FORMAT_ANY_32_NO_ALPHA,
		Any32WithAlpha = ALLEGRO_PIXEL_FORMAT_ANY_32_WITH_ALPHA,
		AnyNoAlpha = ALLEGRO_PIXEL_FORMAT_ANY_NO_ALPHA,
		AnyWithAlpha = ALLEGRO_PIXEL_FORMAT_ANY_WITH_ALPHA,
		Argb1555 = ALLEGRO_PIXEL_FORMAT_ARGB_1555,
		Argb4444 = ALLEGRO_PIXEL_FORMAT_ARGB_4444,
		Argb8888 = ALLEGRO_PIXEL_FORMAT_ARGB_8888,
		Bgr555 = ALLEGRO_PIXEL_FORMAT_BGR_555,
		Bgr565 = ALLEGRO_PIXEL_FORMAT_BGR_565,
		Bgr888 = ALLEGRO_PIXEL_FORMAT_BGR_888,
		CompressedRgbaDxt1 = ALLEGRO_PIXEL_FORMAT_COMPRESSED_RGBA_DXT1,
		CompressedRgbaDxt3 = ALLEGRO_PIXEL_FORMAT_COMPRESSED_RGBA_DXT3,
		CompressedRgbaDxt5 = ALLEGRO_PIXEL_FORMAT_COMPRESSED_RGBA_DXT5,
		Rgb555 = ALLEGRO_PIXEL_FORMAT_RGB_555,
		Rgb565 = ALLEGRO_PIXEL_FORMAT_RGB_565,
		Rgb888 = ALLEGRO_PIXEL_FORMAT_RGB_888,
		Rgba4444 = ALLEGRO_PIXEL_FORMAT_RGBA_4444,
		Rgba5551 = ALLEGRO_PIXEL_FORMAT_RGBA_5551,
		Rgba8888 = ALLEGRO_PIXEL_FORMAT_RGBA_8888,
		Rgbx8888 = ALLEGRO_PIXEL_FORMAT_RGBX_8888,
		SingleChannel8 = ALLEGRO_PIXEL_FORMAT_SINGLE_CHANNEL_8,
		Xbgr8888 = ALLEGRO_PIXEL_FORMAT_XBGR_8888,
		Xrgb8888 = ALLEGRO_PIXEL_FORMAT_XRGB_8888
	};
}

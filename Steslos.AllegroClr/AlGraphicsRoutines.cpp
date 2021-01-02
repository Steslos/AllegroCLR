#include "Al.h"
#include "AllegroBitmap.h"
#include "AllegroBitmapFlags.h"
#include "AllegroBitmapFlipFlags.h"
#include "AllegroBitmapLoadFlags.h"
#include "AllegroColor.h"
#include "AllegroDisplay.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroPixelFormat.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	AllegroBitmap^ Al::CloneBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeReturnBitmap = al_clone_bitmap(nativeBitmap);
		return gcnew AllegroBitmap(nativeReturnBitmap);
	}

	AllegroBitmap^ Al::CreateBitmap(Int32 w, Int32 h)
	{
		auto nativeBitmap = al_create_bitmap(w, h);
		return gcnew AllegroBitmap(nativeBitmap);
	}

	AllegroBitmap^ Al::CreateSubBitmap(AllegroBitmap^ parent, Int32 x, Int32 y, Int32 w, Int32 h)
	{
		auto nativeParent = parent->GetNativePointer();
		auto nativeReturnBitmap = al_create_sub_bitmap(nativeParent, x, y, w, h);
		return gcnew AllegroBitmap(nativeReturnBitmap);
	}

	AllegroBitmap^ Al::GetParentBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeReturnBitmap = al_get_parent_bitmap(nativeBitmap);
		return gcnew AllegroBitmap(nativeReturnBitmap);
	}

	AllegroBitmap^ Al::GetTargetBitmap()
	{
		auto nativeReturnBitmap = al_get_target_bitmap();
		return gcnew AllegroBitmap(nativeReturnBitmap);
	}

	AllegroBitmap^ Al::LoadBitmapA(String^ filename)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeReturnBitmap = al_load_bitmap(nativeFilename);
		return gcnew AllegroBitmap(nativeReturnBitmap);
	}

	AllegroBitmap^ Al::LoadBitmapFlags(String^ filename, AllegroBitmapLoadFlags flags)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeFlags = static_cast<int>(flags);
		auto nativeReturnBitmap = al_load_bitmap_flags(nativeFilename, nativeFlags);
		return gcnew AllegroBitmap(nativeReturnBitmap);
	}

	AllegroBitmapFlags Al::GetBitmapFlags(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto returnFlags = al_get_bitmap_flags(nativeBitmap);
		return static_cast<AllegroBitmapFlags>(returnFlags);
	}

	AllegroBitmapFlags Al::GetNewBitmapFlags()
	{
		auto nativeFlags = al_get_new_bitmap_flags();
		return static_cast<AllegroBitmapFlags>(nativeFlags);
	}

	AllegroColor^ Al::GetBlendColor()
	{
		auto nativeReturnColor = al_get_blend_color();
		return AllegroColor::CreateFromCopy(nativeReturnColor);

	}

	AllegroColor^ Al::GetPixel(AllegroBitmap^ bitmap, Int32 x, Int32 y)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeReturnColor = al_get_pixel(nativeBitmap, x, y);
		return AllegroColor::CreateFromCopy(nativeReturnColor);
	}

	AllegroColor^ Al::MapRgb(Byte r, Byte g, Byte b)
	{
		auto nativeReturnColor = al_map_rgb(r, g, b);
		return AllegroColor::CreateFromCopy(nativeReturnColor);
	}

	AllegroColor^ Al::MapRgbA(Byte r, Byte g, Byte b, Byte a)
	{
		auto nativeReturnColor = al_map_rgba(r, g, b, a);
		return AllegroColor::CreateFromCopy(nativeReturnColor);
	}

	AllegroColor^ Al::MapRgbAF(Single r, Single g, Single b, Single a)
	{
		auto nativeReturnColor = al_map_rgba_f(r, g, b, a);
		return AllegroColor::CreateFromCopy(nativeReturnColor);
	}

	AllegroColor^ Al::MapRgbF(Single r, Single g, Single b)
	{
		auto nativeReturnColor = al_map_rgb_f(r, g, b);
		return AllegroColor::CreateFromCopy(nativeReturnColor);
	}

	AllegroColor^ Al::PremulRgbA(Byte r, Byte g, Byte b, Byte a)
	{
		auto nativeReturnColor = al_premul_rgba(r, g, b, a);
		return AllegroColor::CreateFromCopy(nativeReturnColor);
	}

	AllegroColor^ Al::PreMulRgbAF(Single r, Single g, Single b, Single a)
	{
		auto nativeReturnColor = al_premul_rgba_f(r, g, b, a);
		return AllegroColor::CreateFromCopy(nativeReturnColor);
	}

	AllegroDisplay^ Al::GetCurrentDisplay()
	{
		auto nativeDisplay = al_get_current_display();
		return gcnew AllegroDisplay(nativeDisplay);
	}

	AllegroPixelFormat Al::GetBitmapFormat(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeFormat = al_get_bitmap_format(nativeBitmap);
		return static_cast<AllegroPixelFormat>(nativeFormat);
	}

	AllegroPixelFormat Al::GetNewBitmapFormat()
	{
		auto nativeFormat = al_get_new_bitmap_format();
		return static_cast<AllegroPixelFormat>(nativeFormat);
	}

	Boolean Al::IsBitmapDrawingHeld()
	{
		return al_is_bitmap_drawing_held();
	}

	Boolean Al::IsBitmapLocked(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_is_bitmap_locked(nativeBitmap);
	}

	Boolean Al::IsCompatibleBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_is_compatible_bitmap(nativeBitmap);
	}

	Boolean Al::IsSubBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_is_sub_bitmap(nativeBitmap);
	}

	Boolean Al::SaveBitmap(String^ filename, AllegroBitmap^ bitmap)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_save_bitmap(nativeFilename, nativeBitmap);
	}

	Int32 Al::GetBitmapHeight(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_get_bitmap_height(nativeBitmap);
	}

	Int32 Al::GetBitmapWidth(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_get_bitmap_width(nativeBitmap);
	}

	Int32 Al::GetBitmapX(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_get_bitmap_x(nativeBitmap);
	}

	Int32 Al::GetBitmapY(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		return al_get_bitmap_y(nativeBitmap);
	}

	Int32 Al::GetPixelBlockHeight(Int32 format)
	{
		return al_get_pixel_block_height(format);
	}

	Int32 Al::GetPixelBlockSize(Int32 format)
	{
		return al_get_pixel_block_size(format);
	}

	Int32 Al::GetPixelBlockWidth(Int32 format)
	{
		return al_get_pixel_block_width(format);
	}

	Int32 Al::GetPixelFormatBits(Int32 format)
	{
		return al_get_pixel_format_bits(format);
	}

	Int32 Al::GetPixelSize(Int32 format)
	{
		return al_get_pixel_size(format);
	}

	String^ Al::IdentifyBitmap(String^ filename)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeReturnString = al_identify_bitmap(nativeFilename);
		return gcnew String(nativeReturnString);
	}

	void Al::AddNewBitmapFlag(AllegroBitmapFlags flags)
	{
		auto nativeFlags = static_cast<int>(flags);
		al_add_new_bitmap_flag(nativeFlags);
	}

	void Al::ClearDepthBuffer(Single z)
	{
		al_clear_depth_buffer(z);
	}

	void Al::ClearToColor(AllegroColor^ color)
	{
		auto nativeColor = color->GetNativePointer();
		al_clear_to_color(*nativeColor);
	}

	void Al::ConvertBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		al_convert_bitmap(nativeBitmap);
	}

	void Al::ConvertMaskToAlpha(AllegroBitmap^ bitmap, AllegroColor^ maskColor)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeColor = maskColor->GetNativePointer();
		al_convert_mask_to_alpha(nativeBitmap, *nativeColor);
	}

	void Al::ConvertMemoryBitmaps()
	{
		al_convert_memory_bitmaps();
	}

	void Al::DestroyBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		al_destroy_bitmap(nativeBitmap);
		bitmap->SetNativePointerNull();
	}

	void Al::DrawBitmap(AllegroBitmap^ bitmap, Single dx, Single dy, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_bitmap(nativeBitmap, dx, dy, nativeFlags);
	}

	void Al::DrawBitmapRegion(AllegroBitmap^ bitmap, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_bitmap_region(nativeBitmap, sx, sy, sw, sh, dx, dy, nativeFlags);
	}

	void Al::DrawPixel(Single x, Single y, AllegroColor^ color)
	{
		auto nativeColor = color->GetNativePointer();
		al_draw_pixel(x, y, *nativeColor);
	}

	void Al::DrawRotatedBitmap(AllegroBitmap^ bitmap, Single cx, Single cy, Single dx, Single dy, Single angle, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_rotated_bitmap(nativeBitmap, cx, cy, dx, dy, angle, nativeFlags);
	}

	void Al::DrawScaledBitmap(AllegroBitmap^ bitmap, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, Single dw, Single dh, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_scaled_bitmap(nativeBitmap, sx, sy, sw, sh, dx, dy, dw, dh, nativeFlags);
	}

	void Al::DrawScaledRotatedBitmap(AllegroBitmap^ bitmap, Single cx, Single cy, Single dx, Single dy, Single xScale, Single yScale, Single angle, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_scaled_rotated_bitmap(nativeBitmap, cx, cy, dx, dy, xScale, yScale, angle, nativeFlags);
	}

	void Al::DrawTintedBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single dx, Single dy, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeColor = tint->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_tinted_bitmap(nativeBitmap, *nativeColor, dx, dy, nativeFlags);
	}

	void Al::DrawTintedBitmapRegion(AllegroBitmap^ bitmap, AllegroColor^ tint, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeColor = tint->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_tinted_bitmap_region(nativeBitmap, *nativeColor, sx, sy, sw, sh, dx, dy, nativeFlags);
	}

	void Al::DrawTintedRotatedBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single cx, Single cy, Single dx, Single dy, Single angle, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeColor = tint->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_tinted_rotated_bitmap(nativeBitmap, *nativeColor, cx, cy, dx, dy, angle, nativeFlags);
	}

	void Al::DrawTintedScaledBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, Single dw, Single dh, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeColor = tint->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_tinted_scaled_bitmap(nativeBitmap, *nativeColor, sx, sy, sw, sh, dx, dy, dw, dh, nativeFlags);
	}

	void Al::DrawTintedScaledRotatedBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single cx, Single cy, Single dx, Single dy, Single xScale, Single yScale, Single angle, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeColor = tint->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_tinted_scaled_rotated_bitmap(nativeBitmap, *nativeColor, cx, cy, dx, dy, xScale, yScale, angle, nativeFlags);
	}

	void Al::DrawTintedScaledRotatedBitmapRegion(AllegroBitmap^ bitmap, Single sx, Single sy, Single sw, Single sh, AllegroColor^ tint, Single cx, Single cy, Single dx, Single dy, Single xScale, Single yScale, Single angle, AllegroBitmapFlipFlags flags)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeColor = tint->GetNativePointer();
		auto nativeFlags = static_cast<int>(flags);
		al_draw_tinted_scaled_rotated_bitmap_region(nativeBitmap, sx, sy, sw, sh, *nativeColor, cx, cy, dx, dy, xScale, yScale, angle, nativeFlags);
	}

	void Al::GetBlender(Int32% op, Int32% src, Int32% dst)
	{
		int nativeOp, nativeSrc, nativeDst;
		al_get_blender(&nativeOp, &nativeSrc, &nativeDst);
		op = nativeOp;
		src = nativeSrc;
		dst = nativeDst;
	}

	void Al::GetClippingRectangle(Int32% x, Int32% y, Int32% w, Int32% h)
	{
		int nativeX, nativeY, nativeW, nativeH;
		al_get_clipping_rectangle(&nativeX, &nativeY, &nativeW, &nativeH);
		x = nativeX;
		y = nativeY;
		w = nativeW;
		h = nativeH;
	}

	void Al::GetSeparateBlender(Int32% op, Int32% src, Int32% dst, Int32% alphaOp, Int32% alphaSrc, Int32% alphaDst)
	{
		int nativeOp, nativeSrc, nativeDst, nativeAlphaOp, nativeAlphaSrc, nativeAlphaDst;
		al_get_separate_blender(&nativeOp, &nativeSrc, &nativeDst, &nativeAlphaOp, &nativeAlphaSrc, &nativeAlphaDst);
		op = nativeOp;
		src = nativeSrc;
		dst = nativeDst;
		alphaOp = nativeAlphaOp;
		alphaSrc = nativeAlphaSrc;
		alphaDst = nativeAlphaDst;
	}

	void Al::HoldBitmapDrawing(Boolean hold)
	{
		al_hold_bitmap_drawing(hold);
	}

	void Al::PutBlendedPixel(Int32 x, Int32 y, AllegroColor^ color)
	{
		auto nativeColor = color->GetNativePointer();
		al_put_blended_pixel(x, y, *nativeColor);
	}

	void Al::PutPixel(Int32 x, Int32 y, AllegroColor^ color)
	{
		auto nativeColor = color->GetNativePointer();
		al_put_pixel(x, y, *nativeColor);
	}

	void Al::ReparentBitmap(AllegroBitmap^ bitmap, AllegroBitmap^ parent, Int32 x, Int32 y, Int32 w, Int32 h)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		auto nativeParent = parent->GetNativePointer();
		al_reparent_bitmap(nativeBitmap, nativeParent, x, y, w, h);
	}

	void Al::ResetClippingRectangle()
	{
		al_reset_clipping_rectangle();
	}

	void Al::SetBlendColor(AllegroColor^ color)
	{
		auto nativeColor = color->GetNativePointer();
		al_set_blend_color(*nativeColor);
	}

	void Al::SetBlender(Int32 op, Int32 src, Int32 dst)
	{
		al_set_blender(op, src, dst);
	}

	void Al::SetClippingRectangle(Int32 x, Int32 y, Int32 w, Int32 h)
	{
		al_set_clipping_rectangle(x, y, w, h);
	}

	void Al::SetNewBitmapFlags(AllegroBitmapFlags flags)
	{
		auto nativeFlags = static_cast<int>(flags);
		al_set_new_bitmap_flags(nativeFlags);
	}

	void Al::SetNewBitmapFormat(AllegroPixelFormat format)
	{
		auto nativeFormat = static_cast<int>(format);
		al_set_new_bitmap_format(nativeFormat);
	}

	void Al::SetSeparateBlender(Int32 op, Int32 src, Int32 dst, Int32 alphaOp, Int32 alphaSrc, Int32 alphaDst)
	{
		al_set_separate_blender(op, src, dst, alphaOp, alphaSrc, alphaDst);
	}

	void Al::SetTargetBackbuffer(AllegroDisplay^ display)
	{
		auto nativeDisplay = display->GetNativePointer();
		al_set_target_backbuffer(nativeDisplay);
	}

	void Al::SetTargetBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		al_set_target_bitmap(nativeBitmap);
	}

	void Al::UnlockBitmap(AllegroBitmap^ bitmap)
	{
		auto nativeBitmap = bitmap->GetNativePointer();
		al_unlock_bitmap(nativeBitmap);
	}

	void Al::UnmapRgb(AllegroColor^ color, Byte% r, Byte% g, Byte% b)
	{
		auto nativeColor = color->GetNativePointer();
		unsigned char nativeR, nativeG, nativeB;
		al_unmap_rgb(*nativeColor, &nativeR, &nativeG, &nativeB);
		r = nativeR;
		g = nativeG;
		b = nativeB;
	}

	void Al::UnmapRgbA(AllegroColor^ color, Byte% r, Byte% g, Byte% b, Byte% a)
	{
		auto nativeColor = color->GetNativePointer();
		unsigned char nativeR, nativeG, nativeB, nativeA;
		al_unmap_rgba(*nativeColor, &nativeR, &nativeG, &nativeB, &nativeA);
		r = nativeR;
		g = nativeG;
		b = nativeB;
		a = nativeA;
	}

	void Al::UnmapRgbAF(AllegroColor^ color, Single% r, Single% g, Single% b, Single% a)
	{
		auto nativeColor = color->GetNativePointer();
		float nativeR, nativeG, nativeB, nativeA;
		al_unmap_rgba_f(*nativeColor, &nativeR, &nativeG, &nativeB, &nativeA);
		r = nativeR;
		g = nativeG;
		b = nativeB;
		a = nativeA;
	}

	void Al::UnmapRgbF(AllegroColor^ color, Single% r, Single% g, Single% b)
	{
		auto nativeColor = color->GetNativePointer();
		float nativeR, nativeG, nativeB;
		al_unmap_rgb_f(*nativeColor, &nativeR, &nativeG, &nativeB);
		r = nativeR;
		g = nativeG;
		b = nativeB;
	}
}

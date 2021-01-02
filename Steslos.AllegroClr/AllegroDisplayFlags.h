#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	[System::FlagsAttribute]
	public enum class AllegroDisplayFlags : Int32
	{
		Direct3D = ALLEGRO_DIRECT3D_INTERNAL,
		Frameless = ALLEGRO_FRAMELESS,
		Fullscreen = ALLEGRO_FULLSCREEN,
		FullscreenWindow = ALLEGRO_FULLSCREEN_WINDOW,
		GenerateExposeEvents = ALLEGRO_GENERATE_EXPOSE_EVENTS,
		GTKToplevel = ALLEGRO_GTK_TOPLEVEL_INTERNAL,
		Maximized = ALLEGRO_MAXIMIZED,
		NoFrame = ALLEGRO_NOFRAME,
		OpenGL = ALLEGRO_OPENGL,
		OpenGL30 = ALLEGRO_OPENGL_3_0,
		OpenGLESProfile = ALLEGRO_OPENGL_ES_PROFILE,
		OpenGLForwardCompatible = ALLEGRO_OPENGL_FORWARD_COMPATIBLE,
		ProgrammablePipeline = ALLEGRO_PROGRAMMABLE_PIPELINE,
		Resizeable = ALLEGRO_RESIZABLE,
		Windowed = ALLEGRO_WINDOWED
	};
}

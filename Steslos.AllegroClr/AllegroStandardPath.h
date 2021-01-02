#pragma once

#include "AllegroLibraryHeaders.h"

namespace Steslos::AllegroClr
{
	using namespace System;

	public enum class AllegroStandardPath : Int32
	{
		ExeNamePath = ALLEGRO_EXENAME_PATH,
		ResourcesPath = ALLEGRO_RESOURCES_PATH,
		TempPath = ALLEGRO_TEMP_PATH,
		UserDataPath = ALLEGRO_USER_DATA_PATH,
		UserDocumentsPath = ALLEGRO_USER_DOCUMENTS_PATH,
		UserHomePath = ALLEGRO_USER_HOME_PATH,
		UserSettingsPath = ALLEGRO_USER_SETTINGS_PATH
	};
}

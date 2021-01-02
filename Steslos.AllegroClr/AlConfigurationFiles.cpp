#include "Al.h"
#include "AllegroConfig.h"
#include "AllegroConfigEntry.h"
#include "AllegroConfigSection.h"
#include "AllegroLibraryHeaders.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	AllegroConfig^ Al::CreateConfig()
	{
		auto nativeReturn = al_create_config();
		return gcnew AllegroConfig(nativeReturn);
	}

	AllegroConfig^ Al::LoadConfigFile(String^ filename)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeReturn = al_load_config_file(nativeFilename);
		return gcnew AllegroConfig(nativeReturn);
	}

	AllegroConfig^ Al::MergeConfig(AllegroConfig^ cfg1, AllegroConfig^ cfg2)
	{
		auto nativeCfg1 = cfg1->GetNativePointer();
		auto nativeCfg2 = cfg2->GetNativePointer();
		auto nativeReturn = al_merge_config(nativeCfg1, nativeCfg2);
		return gcnew AllegroConfig(nativeReturn);
	}

	Boolean Al::RemoveConfigKey(AllegroConfig^ config, String^ section, String^ key)
	{
		marshal_context marshalContext;
		auto nativeConfig = config->GetNativePointer();
		auto nativeSection = marshalContext.marshal_as<const char*>(section);
		auto nativeKey = marshalContext.marshal_as<const char*>(key);
		return al_remove_config_key(nativeConfig, nativeSection, nativeKey);
	}

	Boolean Al::RemoveConfigSection(AllegroConfig^ config, String^ section)
	{
		marshal_context marshalContext;
		auto nativeConfig = config->GetNativePointer();
		auto nativeSection = marshalContext.marshal_as<const char*>(section);
		return al_remove_config_section(nativeConfig, nativeSection);
	}

	Boolean Al::SaveConfigFile(String^ filename, AllegroConfig^ config)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeConfig = config->GetNativePointer();
		return al_save_config_file(nativeFilename, nativeConfig);
	}

	String^ Al::GetConfigValue(AllegroConfig^ config, String^ section, String^ key)
	{
		marshal_context marshalContext;
		auto nativeConfig = config->GetNativePointer();
		auto nativeSection = marshalContext.marshal_as<const char*>(section);
		auto nativeKey = marshalContext.marshal_as<const char*>(key);
		auto nativeReturn = al_get_config_value(nativeConfig, nativeSection, nativeKey);
		return gcnew String(nativeReturn);
	}

	String^ Al::GetFirstConfigEntry(AllegroConfig^ config, String^ section, AllegroConfigEntry^% iterator)
	{
		marshal_context marshalContext;
		auto nativeConfig = config->GetNativePointer();
		auto nativeSection = marshalContext.marshal_as<const char*>(section);
		iterator = gcnew AllegroConfigEntry(nullptr);
		auto nativeIterator = iterator->GetNativePointer();
		auto nativeReturn = al_get_first_config_entry(nativeConfig, nativeSection, &nativeIterator);
		return gcnew String(nativeReturn);
	}

	String^ Al::GetFirstConfigSection(AllegroConfig^ config, AllegroConfigSection^% iterator)
	{
		auto nativeConfig = config->GetNativePointer();
		iterator = gcnew AllegroConfigSection(nullptr);
		auto nativeIterator = iterator->GetNativePointer();
		auto nativeReturn = al_get_first_config_section(nativeConfig, &nativeIterator);
		return gcnew String(nativeReturn);
	}

	String^ Al::GetNextConfigEntry(AllegroConfigEntry^ iterator)
	{
		auto nativeIterator = iterator->GetNativePointer();
		auto nativeReturn = al_get_next_config_entry(&nativeIterator);
		return gcnew String(nativeReturn);
	}

	String^ Al::GetNextConfigSection(AllegroConfigSection^ iterator)
	{
		auto nativeIterator = iterator->GetNativePointer();
		auto nativeReturn = al_get_next_config_section(&nativeIterator);
		return gcnew String(nativeReturn);
	}

	void Al::AddConfigComment(AllegroConfig^ config, String^ section, String^ comment)
	{
		marshal_context marshalContext;
		auto nativeConfig = config->GetNativePointer();
		auto nativeSection = marshalContext.marshal_as<const char*>(section);
		auto nativeComment = marshalContext.marshal_as<const char*>(comment);
		al_add_config_comment(nativeConfig, nativeSection, nativeComment);
	}

	void Al::AddConfigSection(AllegroConfig^ config, String^ name)
	{
		marshal_context marshalContext;
		auto nativeConfig = config->GetNativePointer();
		auto nativeName = marshalContext.marshal_as<const char*>(name);
		al_add_config_section(nativeConfig, nativeName);
	}

	void Al::DestroyConfig(AllegroConfig^ config)
	{
		auto nativeConfig = config->GetNativePointer();
		al_destroy_config(nativeConfig);
	}

	void Al::MergeConfigInto(AllegroConfig^ master, AllegroConfig^ add)
	{
		auto nativeMaster = master->GetNativePointer();
		auto nativeAdd = add->GetNativePointer();
		al_merge_config_into(nativeMaster, nativeAdd);
	}

	void Al::SetConfigValue(AllegroConfig^ config, String^ section, String^ key, String^ value)
	{
		marshal_context marshalContext;
		auto nativeConfig = config->GetNativePointer();
		auto nativeSection = marshalContext.marshal_as<const char*>(section);
		auto nativeKey = marshalContext.marshal_as<const char*>(key);
		auto nativeValue = marshalContext.marshal_as<const char*>(value);
		al_set_config_value(nativeConfig, nativeSection, nativeKey, nativeValue);
	}
}

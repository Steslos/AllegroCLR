#include "Al.h"
#include "AllegroConfig.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroPath.h"
#include "AllegroStandardPath.h"
#include "AllegroSystemId.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	UInt32 Al::GetAllegroVersion()
	{
		return al_get_allegro_version();
	}

	String^ Al::GetAppName()
	{
		auto nativeAppName = al_get_app_name();
		return gcnew String(nativeAppName);
	}

	Int32 Al::GetCpuCount()
	{
		return al_get_cpu_count();
	}

	String^ Al::GetOrgName()
	{
		auto nativeOrgName = al_get_org_name();
		return gcnew String(nativeOrgName);
	}

	Int32 Al::GetRamSize()
	{
		return al_get_ram_size();
	}

	AllegroPath^ Al::GetStandardPath(AllegroStandardPath id)
	{
		auto nativeId = (int)id;
		auto nativePath = al_get_standard_path(nativeId);
		return gcnew AllegroPath(nativePath);
	}

	AllegroConfig^ Al::GetSystemConfig()
	{
		auto nativeConfig = al_get_system_config();
		return gcnew AllegroConfig(nativeConfig);
	}

	AllegroSystemId Al::GetSystemId()
	{
		auto nativeSystemId = al_get_system_id();
		return (AllegroSystemId)nativeSystemId;
	}

	Boolean Al::Init()
	{
		return al_init();
	}

	Boolean Al::InstallSystem()
	{
		return al_install_system(ALLEGRO_VERSION_INT, atexit);
	}

	Boolean Al::IsSystemInstalled()
	{
		return al_is_system_installed();
	}

	void Al::RegisterAssertHandler(Action<String^, String^, Int32, String^>^ handler)
	{

	}

	void Al::RegisterTraceHandler(Action<String^>^ handler)
	{

	}

	void Al::SetAppName(String^ appName)
	{
		marshal_context marshalContext;
		auto nativeAppName = marshalContext.marshal_as<const char*>(appName);
		al_set_app_name(nativeAppName);
	}

	void Al::SetExeName(String^ exeName)
	{
		marshal_context marshalContext;
		auto nativeExeName = marshalContext.marshal_as<const char*>(exeName);
		al_set_exe_name(nativeExeName);
	}

	void Al::SetOrgName(String^ orgName)
	{
		marshal_context marshalContext;
		auto nativeOrgName = marshalContext.marshal_as<const char*>(orgName);
		al_set_org_name(nativeOrgName);
	}

	void Al::UninstallSystem()
	{
		al_uninstall_system();
	}
}

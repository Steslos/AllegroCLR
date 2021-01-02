#include "Al.h"
#include "AllegroEventSource.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroTimer.h"

namespace Steslos::AllegroClr
{
	void Al::AddTimerCount(AllegroTimer^ timer, Int64 diff)
	{
		auto nativeTimer = timer->GetNativePointer();
		al_add_timer_count(nativeTimer, diff);
	}

	AllegroTimer^ Al::CreateTimer(Double speedSecs)
	{
		auto nativeTimer = al_create_timer(speedSecs);
		return gcnew AllegroTimer(nativeTimer);
	}

	void Al::DestroyTimer(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		al_destroy_timer(nativeTimer);
		timer->SetNativePointerNull();
	}

	AllegroEventSource^ Al::GetTimerEventSource(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		auto nativeEventSource = al_get_timer_event_source(nativeTimer);
		return gcnew AllegroEventSource(nativeEventSource);
	}

	Boolean Al::GetTimerStarted(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		return al_get_timer_started(nativeTimer);
	}

	Double Al::GetTimerSpeed(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		return al_get_timer_speed(nativeTimer);
	}

	Int64 Al::GetTimerCount(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		return al_get_timer_count(nativeTimer);
	}

	void Al::ResumeTimer(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		al_resume_timer(nativeTimer);
	}

	void Al::SetTimerCount(AllegroTimer^ timer, Int64 newCount)
	{
		auto nativeTimer = timer->GetNativePointer();
		al_set_timer_count(nativeTimer, newCount);
	}

	void Al::SetTimerSpeed(AllegroTimer^ timer, Double newSpeedSecs)
	{
		auto nativeTimer = timer->GetNativePointer();
		al_set_timer_speed(nativeTimer, newSpeedSecs);
	}

	void Al::StartTimer(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		al_start_timer(nativeTimer);
	}

	void Al::StopTimer(AllegroTimer^ timer)
	{
		auto nativeTimer = timer->GetNativePointer();
		al_stop_timer(nativeTimer);
	}
}

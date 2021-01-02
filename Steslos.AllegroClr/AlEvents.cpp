#include "Al.h"
#include "AllegroEvent.h"
#include "AllegroEventQueue.h"
#include "AllegroEventSource.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroTimeout.h"
#include "AllegroUserEvent.h"

namespace Steslos::AllegroClr
{
	AllegroEventQueue^ Al::CreateEventQueue()
	{
		auto nativeEventQueue = al_create_event_queue();
		return gcnew AllegroEventQueue(nativeEventQueue);
	}

	Boolean Al::DropNextEvent(AllegroEventQueue^ queue)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		return al_drop_next_event(nativeEventQueue);
	}

	Boolean Al::EmitUserEvent(AllegroEventSource^ source, AllegroEvent^ allegroEvent, Action<AllegroUserEvent^>^ dtor)
	{
		// TODO: implement this function
		return false;
	}

	Boolean Al::GetNextEvent(AllegroEventQueue^ queue, AllegroEvent^ retEvent)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeRetEvent = retEvent->GetNativePointer();
		return al_get_next_event(nativeEventQueue, nativeRetEvent);
	}

	Boolean Al::IsEventQueueEmpty(AllegroEventQueue^ queue)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		return al_is_event_queue_empty(nativeEventQueue);
	}

	Boolean Al::IsEventQueuePaused(AllegroEventQueue^ queue)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		return al_is_event_queue_paused(nativeEventQueue);
	}

	Boolean Al::IsEventSourceRegistered(AllegroEventQueue^ queue, AllegroEventSource^ source)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeEventSource = source->GetNativePointer();
		return al_is_event_source_registered(nativeEventQueue, nativeEventSource);
	}

	Boolean Al::PeekNextEvent(AllegroEventQueue^ queue, AllegroEvent^ retEvent)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeRetEvent = retEvent->GetNativePointer();
		return al_peek_next_event(nativeEventQueue, nativeRetEvent);
	}

	Boolean Al::WaitForEventTimed(AllegroEventQueue^ queue, AllegroEvent^ retEvent, Single secs)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeRetEvent = retEvent->GetNativePointer();
		return al_wait_for_event_timed(nativeEventQueue, nativeRetEvent, secs);
	}

	Boolean Al::WaitForEventUntil(AllegroEventQueue^ queue, AllegroEvent^ retEvent, AllegroTimeout^ timeout)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeRetEvent = retEvent->GetNativePointer();
		auto nativeTimeout = timeout->GetNativePointer();
		return al_wait_for_event_until(nativeEventQueue, nativeRetEvent, nativeTimeout);
	}

	Object^ Al::GetEventSourceData(AllegroEventSource^ source)
	{
		// TODO: Implement this function
		return nullptr;
	}

	void Al::DestroyEventQueue(AllegroEventQueue^ queue)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		al_destroy_event_queue(nativeEventQueue);
		queue->SetNativePointerNull();
	}

	void Al::DestroyUserEventSource(AllegroEventSource^ source)
	{
		auto nativeEventSource = source->GetNativePointer();
		al_destroy_user_event_source(nativeEventSource);
		source->SetNativePointerNull();
	}

	void Al::FlushEventQueue(AllegroEventQueue^ queue)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		al_flush_event_queue(nativeEventQueue);
	}

	void Al::InitUserEventSource(AllegroEventSource^ source)
	{
		auto nativeEventSource = source->GetNativePointer();
		al_init_user_event_source(nativeEventSource);
	}

	void Al::PauseEventQueue(AllegroEventQueue^ queue, Boolean pause)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		al_pause_event_queue(nativeEventQueue, pause);
	}

	void Al::RegisterEventSource(AllegroEventQueue^ queue, AllegroEventSource^ source)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeEventSource = source->GetNativePointer();
		al_register_event_source(nativeEventQueue, nativeEventSource);
	}

	void Al::SetEventSourceData(AllegroEventSource^ source, Object^ data)
	{
		// TODO: Implement this function
	}

	void Al::UnrefUserEvent(AllegroUserEvent^ allegroEvent)
	{
		// TODO: Implement this function
	}

	void Al::UnregisterEventSource(AllegroEventQueue^ queue, AllegroEventSource^ source)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeEventSource = source->GetNativePointer();
		al_unregister_event_source(nativeEventQueue, nativeEventSource);
	}

	void Al::WaitForEvent(AllegroEventQueue^ queue, AllegroEvent^ retEvent)
	{
		auto nativeEventQueue = queue->GetNativePointer();
		auto nativeRetEvent = retEvent->GetNativePointer();
		al_wait_for_event(nativeEventQueue, nativeRetEvent);
	}
}

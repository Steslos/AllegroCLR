#include "Al.h"
#include "AllegroAudioDepth.h"
#include "AllegroAudioStream.h"
#include "AllegroChannelConfiguration.h"
#include "AllegroEventSource.h"
#include "AllegroLibraryHeaders.h"
#include "AllegroMixer.h"
#include "AllegroMixerQuality.h"
#include "AllegroPlaymode.h"
#include "AllegroSample.h"
#include "AllegroSampleId.h"
#include "AllegroSampleInstance.h"
#include "AllegroVoice.h"

#include <msclr/marshal.h>

namespace Steslos::AllegroClr
{
	using namespace msclr::interop;

	AllegroAudioDepth Al::GetAudioStreamDepth(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeReturn = al_get_audio_stream_depth(nativeStream);
		return static_cast<AllegroAudioDepth>(nativeReturn);
	}

	AllegroAudioDepth Al::GetMixerDepth(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		auto nativeReturn = al_get_mixer_depth(nativeMixer);
		return static_cast<AllegroAudioDepth>(nativeReturn);
	}

	AllegroAudioDepth Al::GetSampleDepth(AllegroSample^ sample)
	{
		auto nativeSample = sample->GetNativePointer();
		auto nativeReturn = al_get_sample_depth(nativeSample);
		return static_cast<AllegroAudioDepth>(nativeReturn);
	}

	AllegroAudioDepth Al::GetSampleInstanceDepth(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		auto nativeReturn = al_get_sample_instance_depth(nativeSampleInstance);
		return static_cast<AllegroAudioDepth>(nativeReturn);
	}

	AllegroAudioDepth Al::GetVoiceDepth(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		auto nativeReturn = al_get_voice_depth(nativeVoice);
		return static_cast<AllegroAudioDepth>(nativeReturn);
	}

	AllegroAudioStream^ Al::CreateAudioStream(UInt64 bufferCount, UInt32 freqSamples, UInt32 freq, AllegroAudioDepth depth, AllegroChannelConfiguration chanConf)
	{
		auto nativeDepth = static_cast<ALLEGRO_AUDIO_DEPTH>(depth);
		auto nativeChanConf = static_cast<ALLEGRO_CHANNEL_CONF>(chanConf);
		auto nativeReturn = al_create_audio_stream(bufferCount, freqSamples, freq, nativeDepth, nativeChanConf);
		return gcnew AllegroAudioStream(nativeReturn);
	}

	AllegroAudioStream^ Al::LoadAudioStream(String^ filename, UInt64 bufferCount, UInt32 samples)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeReturn = al_load_audio_stream(nativeFilename, bufferCount, samples);
		return gcnew AllegroAudioStream(nativeReturn);
	}

	AllegroChannelConfiguration Al::GetAudioStreamChannels(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeReturn = al_get_audio_stream_channels(nativeStream);
		return static_cast<AllegroChannelConfiguration>(nativeReturn);
	}

	AllegroChannelConfiguration Al::GetMixerChannels(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		auto nativeReturn = al_get_mixer_channels(nativeMixer);
		return static_cast<AllegroChannelConfiguration>(nativeReturn);
	}

	AllegroChannelConfiguration Al::GetSampleChannels(AllegroSample^ sample)
	{
		auto nativeSample = sample->GetNativePointer();
		auto nativeReturn = al_get_sample_channels(nativeSample);
		return static_cast<AllegroChannelConfiguration>(nativeReturn);
	}

	AllegroChannelConfiguration Al::GetSampleInstanceChannels(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		auto nativeReturn = al_get_sample_instance_channels(nativeSampleInstance);
		return static_cast<AllegroChannelConfiguration>(nativeReturn);
	}

	AllegroChannelConfiguration Al::GetVoiceChannels(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		auto nativeReturn = al_get_voice_channels(nativeVoice);
		return static_cast<AllegroChannelConfiguration>(nativeReturn);
	}

	AllegroEventSource^ Al::GetAudioStreamEventSource(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeReturn = al_get_audio_stream_event_source(nativeStream);
		return gcnew AllegroEventSource(nativeReturn);
	}

	AllegroMixer^ Al::CreateMixer(UInt32 freq, AllegroAudioDepth depth, AllegroChannelConfiguration channelConf)
	{
		auto nativeDepth = static_cast<ALLEGRO_AUDIO_DEPTH>(depth);
		auto nativeChannelConf = static_cast<ALLEGRO_CHANNEL_CONF>(channelConf);
		auto nativeReturn = al_create_mixer(freq, nativeDepth, nativeChannelConf);
		return gcnew AllegroMixer(nativeReturn);
	}

	AllegroMixer^ Al::GetDefaultMixer()
	{
		auto nativeReturn = al_get_default_mixer();
		return gcnew AllegroMixer(nativeReturn);
	}

	AllegroMixerQuality Al::GetMixerQuality(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		auto nativeReturn = al_get_mixer_quality(nativeMixer);
		return static_cast<AllegroMixerQuality>(nativeReturn);
	}

	AllegroPlaymode Al::GetAudioStreamPlaymode(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeReturn = al_get_audio_stream_playmode(nativeStream);
		return static_cast<AllegroPlaymode>(nativeReturn);
	}

	AllegroPlaymode Al::GetSampleInstancePlaymode(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		auto nativeReturn = al_get_sample_instance_playmode(nativeSampleInstance);
		return static_cast<AllegroPlaymode>(nativeReturn);
	}

	AllegroSample^ Al::GetSample(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		auto nativeReturn = al_get_sample(nativeSampleInstance);
		return gcnew AllegroSample(nativeReturn);
	}

	AllegroSample^ Al::LoadSample(String^ filename)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeReturn = al_load_sample(nativeFilename);
		return gcnew AllegroSample(nativeReturn);
	}

	AllegroSampleInstance^ Al::CreateSampleInstance(AllegroSample^ sample)
	{
		auto nativeSample = sample->GetNativePointer();
		auto nativeReturn = al_create_sample_instance(nativeSample);
		return gcnew AllegroSampleInstance(nativeReturn);
	}

	AllegroVoice^ Al::CreateVoice(UInt32 freq, AllegroAudioDepth depth, AllegroChannelConfiguration chanConf)
	{
		auto nativeDepth = static_cast<ALLEGRO_AUDIO_DEPTH>(depth);
		auto nativeChanConf = static_cast<ALLEGRO_CHANNEL_CONF>(chanConf);
		auto nativeReturn = al_create_voice(freq, nativeDepth, nativeChanConf);
		return gcnew AllegroVoice(nativeReturn);
	}

	AllegroVoice^ Al::GetDefaultVoice()
	{
		return gcnew AllegroVoice(al_get_default_voice());
	}

	Boolean Al::AttachAudioStreamToMixer(AllegroAudioStream^ stream, AllegroMixer^ mixer)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeMixer = mixer->GetNativePointer();
		return al_attach_audio_stream_to_mixer(nativeStream, nativeMixer);
	}

	Boolean Al::AttachAudioStreamToVoice(AllegroAudioStream^ stream, AllegroVoice^ voice)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeVoice = voice->GetNativePointer();
		return al_attach_audio_stream_to_voice(nativeStream, nativeVoice);
	}

	Boolean Al::AttachMixerToMixer(AllegroMixer^ stream, AllegroMixer^ mixer)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeMixer = mixer->GetNativePointer();
		return al_attach_mixer_to_mixer(nativeStream, nativeMixer);
	}

	Boolean Al::AttachMixerToVoice(AllegroMixer^ mixer, AllegroVoice^ voice)
	{
		auto nativeMixer = mixer->GetNativePointer();
		auto nativeVoice = voice->GetNativePointer();
		return al_attach_mixer_to_voice(nativeMixer, nativeVoice);
	}

	Boolean Al::AttachSampleInstanceToMixer(AllegroSampleInstance^ sampleInstance, AllegroMixer^ mixer)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		auto nativeMixer = mixer->GetNativePointer();
		return al_attach_sample_instance_to_mixer(nativeSampleInstance, nativeMixer);
	}

	Boolean Al::AttachSampleInstanceToVoice(AllegroSampleInstance^ spl, AllegroVoice^ voice)
	{
		auto nativeSampleInstance = spl->GetNativePointer();
		auto nativeVoice = voice->GetNativePointer();
		return al_attach_sample_instance_to_voice(nativeSampleInstance, nativeVoice);
	}

	Boolean Al::DetachAudioStream(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_detach_audio_stream(nativeStream);
	}

	Boolean Al::DetachMixer(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_detach_mixer(nativeMixer);
	}

	Boolean Al::DetachSampleInstance(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_detach_sample_instance(nativeSampleInstance);
	}

	Boolean Al::GetAudioStreamAttached(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_attached(nativeStream);
	}

	Boolean Al::GetAudioStreamPlaying(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_playing(nativeStream);
	}

	Boolean Al::GetMixerAttached(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_get_mixer_attached(nativeMixer);
	}

	Boolean Al::GetMixerPlaying(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_get_mixer_playing(nativeMixer);
	}

	Boolean Al::GetSampleInstanceAttached(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_attached(nativeSampleInstance);
	}

	Boolean Al::GetSampleInstancePlaying(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_playing(nativeSampleInstance);
	}

	Boolean Al::GetVoicePlaying(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		return al_get_voice_playing(nativeVoice);
	}

	Boolean Al::InstallAudio()
	{
		return al_install_audio();
	}

	Boolean Al::IsAudioInstalled()
	{
		return al_is_audio_installed();
	}

	Boolean Al::PlaySample(AllegroSample^ sample, Single gain, Single pan, Single speed, AllegroPlaymode loop, AllegroSampleId^% retId)
	{
		if (retId == nullptr)
		{
			retId = gcnew AllegroSampleId(new ALLEGRO_SAMPLE_ID());
		}
		auto nativeSample = sample->GetNativePointer();
		auto nativeLoop = static_cast<ALLEGRO_PLAYMODE>(loop);
		auto nativeRetId = retId->GetNativePointer();
		return al_play_sample(nativeSample, gain, pan, speed, nativeLoop, nativeRetId);
	}

	Boolean Al::PlaySampleInstance(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_play_sample_instance(nativeSampleInstance);
	}

	Boolean Al::ReserveSamples(Int32 reserveSamples)
	{
		return al_reserve_samples(reserveSamples);
	}

	Boolean Al::RestoreDefaultMixer()
	{
		return al_restore_default_mixer();
	}

	Boolean Al::RewindAudioStream(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_rewind_audio_stream(nativeStream);
	}

	Boolean Al::SaveSample(String^ filename, AllegroSample^ sample)
	{
		marshal_context marshalContext;
		auto nativeFilename = marshalContext.marshal_as<const char*>(filename);
		auto nativeSample = sample->GetNativePointer();
		return al_save_sample(nativeFilename, nativeSample);
	}

	Boolean Al::SeekAudioStreamSecs(AllegroAudioStream^ stream, Double time)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_seek_audio_stream_secs(nativeStream, time);
	}

	Boolean Al::SetAudioStreamGain(AllegroAudioStream^ stream, Single val)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_set_audio_stream_gain(nativeStream, val);
	}

	Boolean Al::SetAudioStreamLoopSecs(AllegroAudioStream^ stream, Double start, Double end)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_set_audio_stream_loop_secs(nativeStream, start, end);
	}

	Boolean Al::SetAudioStreamPan(AllegroAudioStream^ stream, Single val)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_set_audio_stream_pan(nativeStream, val);
	}

	Boolean Al::SetAudioStreamPlaying(AllegroAudioStream^ stream, Boolean val)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_set_audio_stream_playing(nativeStream, val);
	}

	Boolean Al::SetAudioStreamPlaymode(AllegroAudioStream^ stream, AllegroPlaymode val)
	{
		auto nativeStream = stream->GetNativePointer();
		auto nativeVal = static_cast<ALLEGRO_PLAYMODE>(val);
		return al_set_audio_stream_playmode(nativeStream, nativeVal);
	}

	Boolean Al::SetAudioStreamSpeed(AllegroAudioStream^ stream, Single val)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_set_audio_stream_speed(nativeStream, val);
	}

	Boolean Al::SetDefaultMixer(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_set_default_mixer(nativeMixer);
	}

	Boolean Al::SetMixerFrequency(AllegroMixer^ mixer, UInt32 val)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_set_mixer_frequency(nativeMixer, val);
	}

	Boolean Al::SetMixerGain(AllegroMixer^ mixer, Single newGain)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_set_mixer_gain(nativeMixer, newGain);
	}

	Boolean Al::SetMixerPlaying(AllegroMixer^ mixer, Boolean val)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_set_mixer_playing(nativeMixer, val);
	}

	Boolean Al::SetMixerQuality(AllegroMixer^ mixer, AllegroMixerQuality newQuality)
	{
		auto nativeMixer = mixer->GetNativePointer();
		auto nativeQuality = static_cast<ALLEGRO_MIXER_QUALITY>(newQuality);
		return al_set_mixer_quality(nativeMixer, nativeQuality);
	}

	Boolean Al::SetSample(AllegroSampleInstance^ sampleInstance, AllegroSample^ sample)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		auto nativeSample = sample->GetNativePointer();
		return al_set_sample(nativeSampleInstance, nativeSample);
	}

	Boolean Al::SetSampleInstanceGain(AllegroSampleInstance^ sampleInstance, Single val)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_set_sample_instance_gain(nativeSampleInstance, val);
	}

	Boolean Al::SetSampleInstanceLength(AllegroSampleInstance^ sampleInstance, UInt32 val)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_set_sample_instance_length(nativeSampleInstance, val);
	}

	Boolean Al::SetSampleInstancePan(AllegroSampleInstance^ sampleInstance, Single val)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_set_sample_instance_pan(nativeSampleInstance, val);
	}

	Boolean Al::SetSampleInstancePlaying(AllegroSampleInstance^ sampleInstance, Boolean val)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_set_sample_instance_playing(nativeSampleInstance, val);
	}

	Boolean Al::SetSampleInstancePlaymode(AllegroSampleInstance^ sampleInstance, AllegroPlaymode val)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		auto nativeVal = static_cast<ALLEGRO_PLAYMODE>(val);
		return al_set_sample_instance_playmode(nativeSampleInstance, nativeVal);
	}

	Boolean Al::SetSampleInstancePosition(AllegroSampleInstance^ sampleInstance, UInt32 val)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_set_sample_instance_position(nativeSampleInstance, val);
	}

	Boolean Al::SetSampleInstanceSpeed(AllegroSampleInstance^ sampleInstance, Single val)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_set_sample_instance_speed(nativeSampleInstance, val);
	}

	Boolean Al::SetVoicePlaying(AllegroVoice^ voice, Boolean val)
	{
		auto nativeVoice = voice->GetNativePointer();
		return al_set_voice_playing(nativeVoice, val);
	}

	Boolean Al::SetVoicePosition(AllegroVoice^ voice, UInt32 val)
	{
		auto nativeVoice = voice->GetNativePointer();
		return al_set_voice_position(nativeVoice, val);
	}

	Boolean Al::StopSampleInstance(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_stop_sample_instance(nativeSampleInstance);
	}

	Double Al::GetAudioStreamLengthSecs(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_length_secs(nativeStream);
	}

	Double Al::GetAudioStreamPositionSecs(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_position_secs(nativeStream);
	}

	Single Al::GetAudioStreamGain(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_gain(nativeStream);
	}

	Single Al::GetAudioStreamPan(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_pan(nativeStream);
	}

	Single Al::GetAudioStreamSpeed(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_speed(nativeStream);
	}

	Single Al::GetMixerGain(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_get_mixer_gain(nativeMixer);
	}

	Single Al::GetSampleInstanceGain(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_gain(nativeSampleInstance);
	}

	Single Al::GetSampleInstancePan(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_pan(nativeSampleInstance);
	}

	Single Al::GetSampleInstanceSpeed(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_speed(nativeSampleInstance);
	}

	Single Al::GetSampleInstanceTime(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_time(nativeSampleInstance);
	}

	UInt32 Al::GetAllegroAudioVersion()
	{
		return al_get_allegro_audio_version();
	}

	UInt32 Al::GetAudioStreamFragments(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_fragments(nativeStream);
	}

	UInt32 Al::GetAudioStreamFrequency(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_frequency(nativeStream);
	}

	UInt32 Al::GetAudioStreamLength(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_length(nativeStream);
	}

	UInt32 Al::GetAvailableAudioStreamFragments(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_available_audio_stream_fragments(nativeStream);
	}

	UInt32 Al::GetMixerFrequency(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		return al_get_mixer_frequency(nativeMixer);
	}

	UInt32 Al::GetSampleFrequency(AllegroSample^ sample)
	{
		auto nativeSample = sample->GetNativePointer();
		return al_get_sample_frequency(nativeSample);
	}

	UInt32 Al::GetSampleInstanceFrequency(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_frequency(nativeSampleInstance);
	}

	UInt32 Al::GetSampleInstanceLength(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_length(nativeSampleInstance);
	}

	UInt32 Al::GetSampleInstancePosition(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		return al_get_sample_instance_position(nativeSampleInstance);
	}

	UInt32 Al::GetSampleLength(AllegroSample^ sample)
	{
		auto nativeSample = sample->GetNativePointer();
		return al_get_sample_length(nativeSample);
	}

	UInt32 Al::GetVoiceFrequency(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		return al_get_voice_frequency(nativeVoice);
	}

	UInt32 Al::GetVoicePosition(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		return al_get_voice_position(nativeVoice);
	}

	UInt64 Al::GetAudioDepthSize(AllegroAudioDepth depth)
	{
		auto nativeDepth = static_cast<ALLEGRO_AUDIO_DEPTH>(depth);
		return al_get_audio_depth_size(nativeDepth);
	}

	UInt64 Al::GetAudioStreamPlayedSamples(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		return al_get_audio_stream_played_samples(nativeStream);
	}

	UInt64 Al::GetChannelCount(AllegroChannelConfiguration conf)
	{
		auto nativeConf = static_cast<ALLEGRO_CHANNEL_CONF>(conf);
		return al_get_channel_count(nativeConf);
	}

	void Al::DestroyAudioStream(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		al_destroy_audio_stream(nativeStream);
	}

	void Al::DestroyMixer(AllegroMixer^ mixer)
	{
		auto nativeMixer = mixer->GetNativePointer();
		al_destroy_mixer(nativeMixer);
	}

	void Al::DestroySample(AllegroSample^ sample)
	{
		auto nativeSample = sample->GetNativePointer();
		al_destroy_sample(nativeSample);
	}

	void Al::DestroySampleInstance(AllegroSampleInstance^ sampleInstance)
	{
		auto nativeSampleInstance = sampleInstance->GetNativePointer();
		al_destroy_sample_instance(nativeSampleInstance);
	}

	void Al::DestroyVoice(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		al_destroy_voice(nativeVoice);
	}

	void Al::DetachVoice(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		al_detach_voice(nativeVoice);
	}

	void Al::DrainAudioStream(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		al_drain_audio_stream(nativeStream);
	}

	void Al::GetAudioStreamFragment(AllegroAudioStream^ stream)
	{
		auto nativeStream = stream->GetNativePointer();
		al_get_audio_stream_fragment(nativeStream);
	}

	void Al::SetDefaultVoice(AllegroVoice^ voice)
	{
		auto nativeVoice = voice->GetNativePointer();
		al_set_default_voice(nativeVoice);
	}

	void Al::StopSample(AllegroSampleId^ sampleId)
	{
		auto nativeSampleId = sampleId->GetNativePointer();
		al_stop_sample(nativeSampleId);
	}

	void Al::StopSamples()
	{
		al_stop_samples();
	}

	void Al::UninstallAudio()
	{
		al_uninstall_audio();
	}
}

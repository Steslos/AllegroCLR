#pragma once

namespace Steslos::AllegroClr
{
	using namespace System;

	ref class AllegroAudioStream;
	ref class AllegroBitmap;
	ref class AllegroColor;
	ref class AllegroConfig;
	ref class AllegroConfigEntry;
	ref class AllegroConfigSection;
	ref class AllegroDisplay;
	ref class AllegroDisplayMode;
	ref class AllegroEvent;
	ref class AllegroEventQueue;
	ref class AllegroEventSource;
	ref class AllegroFont;
	ref class AllegroJoystick;
	ref class AllegroJoystickState;
	ref class AllegroKeyboardState;
	ref class AllegroMixer;
	ref class AllegroMonitorInfo;
	ref class AllegroPath;
	ref class AllegroSample;
	ref class AllegroSampleId;
	ref class AllegroSampleInstance;
	ref class AllegroTimeout;
	ref class AllegroTimer;
	ref class AllegroUserEvent;
	ref class AllegroVoice;

	enum class AllegroAudioDepth;
	enum class AllegroAudioEventType;
	enum class AllegroBitmapFlags;
	enum class AllegroBitmapFlipFlags;
	enum class AllegroBitmapLoadFlags;
	enum class AllegroChannelConfiguration;
	enum class AllegroDisplayFlags;
	enum class AllegroDisplayOption;
	enum class AllegroDisplayOrientation;
	enum class AllegroDrawTextFlags;
	enum class AllegroEventType;
	enum class AllegroImportance;
	enum class AllegroJoyFlags;
	enum class AllegroKeyboardModifier;
	enum class AllegroKeyCode;
	enum class AllegroMixerQuality;
	enum class AllegroPixelFormat;
	enum class AllegroPlaymode;
	enum class AllegroStandardPath;
	enum class AllegroSystemId;
	enum class AllegroTtfFlags;

	public ref class Al
	{
	public:
		// Audio addon
		static AllegroAudioDepth GetAudioStreamDepth(AllegroAudioStream^ stream);
		static AllegroAudioDepth GetMixerDepth(AllegroMixer^ mixer);
		static AllegroAudioDepth GetSampleDepth(AllegroSample^ sample);
		static AllegroAudioDepth GetSampleInstanceDepth(AllegroSampleInstance^ sampleInstance);
		static AllegroAudioDepth GetVoiceDepth(AllegroVoice^ voice);
		static AllegroAudioStream^ CreateAudioStream(UInt64 bufferCount, UInt32 freqSamples, UInt32 freq, AllegroAudioDepth depth, AllegroChannelConfiguration chanConf);
		static AllegroAudioStream^ LoadAudioStream(String^ filename, UInt64 bufferCount, UInt32 samples);
		static AllegroChannelConfiguration GetAudioStreamChannels(AllegroAudioStream^ stream);
		static AllegroChannelConfiguration GetMixerChannels(AllegroMixer^ mixer);
		static AllegroChannelConfiguration GetSampleChannels(AllegroSample^ sample);
		static AllegroChannelConfiguration GetSampleInstanceChannels(AllegroSampleInstance^ sampleInstance);
		static AllegroChannelConfiguration GetVoiceChannels(AllegroVoice^ voice);
		static AllegroEventSource^ GetAudioStreamEventSource(AllegroAudioStream^ stream);
		static AllegroMixer^ CreateMixer(UInt32 freq, AllegroAudioDepth depth, AllegroChannelConfiguration channelConf);
		static AllegroMixer^ GetDefaultMixer();
		static AllegroMixerQuality GetMixerQuality(AllegroMixer^ mixer);
		static AllegroPlaymode GetAudioStreamPlaymode(AllegroAudioStream^ stream);
		static AllegroPlaymode GetSampleInstancePlaymode(AllegroSampleInstance^ sampleInstance);
		static AllegroSample^ GetSample(AllegroSampleInstance^ sampleInstance);
		static AllegroSample^ LoadSample(String^ filename);
		static AllegroSampleInstance^ CreateSampleInstance(AllegroSample^ sample);
		static AllegroVoice^ CreateVoice(UInt32 freq, AllegroAudioDepth depth, AllegroChannelConfiguration chanConf);
		static AllegroVoice^ GetDefaultVoice();
		static Boolean AttachAudioStreamToMixer(AllegroAudioStream^ stream, AllegroMixer^ mixer);
		static Boolean AttachAudioStreamToVoice(AllegroAudioStream^ stream, AllegroVoice^ voice);
		static Boolean AttachMixerToMixer(AllegroMixer^ stream, AllegroMixer^ mixer);
		static Boolean AttachMixerToVoice(AllegroMixer^ mixer, AllegroVoice^ voice);
		static Boolean AttachSampleInstanceToMixer(AllegroSampleInstance^ sampleInstance, AllegroMixer^ mixer);
		static Boolean AttachSampleInstanceToVoice(AllegroSampleInstance^ spl, AllegroVoice^ voice);
		static Boolean DetachAudioStream(AllegroAudioStream^ stream);
		static Boolean DetachMixer(AllegroMixer^ mixer);
		static Boolean DetachSampleInstance(AllegroSampleInstance^ sampleInstance);
		static Boolean GetAudioStreamAttached(AllegroAudioStream^ stream);
		static Boolean GetAudioStreamPlaying(AllegroAudioStream^ stream);
		static Boolean GetMixerAttached(AllegroMixer^ mixer);
		static Boolean GetMixerPlaying(AllegroMixer^ mixer);
		static Boolean GetSampleInstanceAttached(AllegroSampleInstance^ sampleInstance);
		static Boolean GetSampleInstancePlaying(AllegroSampleInstance^ sampleInstance);
		static Boolean GetVoicePlaying(AllegroVoice^ voice);
		static Boolean InstallAudio();
		static Boolean IsAudioInstalled();
		static Boolean PlaySample(AllegroSample^ sample, Single gain, Single pan, Single speed, AllegroPlaymode loop, AllegroSampleId^% retId);
		static Boolean PlaySampleInstance(AllegroSampleInstance^ sampleInstance);
		static Boolean ReserveSamples(Int32 reserveSamples);
		static Boolean RestoreDefaultMixer();
		static Boolean RewindAudioStream(AllegroAudioStream^ stream);
		static Boolean SaveSample(String^ filename, AllegroSample^ sample);
		static Boolean SeekAudioStreamSecs(AllegroAudioStream^ stream, Double time);
		static Boolean SetAudioStreamGain(AllegroAudioStream^ stream, Single val);
		static Boolean SetAudioStreamLoopSecs(AllegroAudioStream^ stream, Double start, Double end);
		static Boolean SetAudioStreamPan(AllegroAudioStream^ stream, Single val);
		static Boolean SetAudioStreamPlaying(AllegroAudioStream^ stream, Boolean val);
		static Boolean SetAudioStreamPlaymode(AllegroAudioStream^ stream, AllegroPlaymode val);
		static Boolean SetAudioStreamSpeed(AllegroAudioStream^ stream, Single val);
		static Boolean SetDefaultMixer(AllegroMixer^ mixer);
		static Boolean SetMixerFrequency(AllegroMixer^ mixer, UInt32 val);
		static Boolean SetMixerGain(AllegroMixer^ mixer, Single newGain);
		static Boolean SetMixerPlaying(AllegroMixer^ mixer, Boolean val);
		static Boolean SetMixerQuality(AllegroMixer^ mixer, AllegroMixerQuality newQuality);
		static Boolean SetSample(AllegroSampleInstance^ sampleInstance, AllegroSample^ sample);
		static Boolean SetSampleInstanceGain(AllegroSampleInstance^ sampleInstance, Single val);
		static Boolean SetSampleInstanceLength(AllegroSampleInstance^ sampleInstance, UInt32 val);
		static Boolean SetSampleInstancePan(AllegroSampleInstance^ sampleInstance, Single val);
		static Boolean SetSampleInstancePlaying(AllegroSampleInstance^ sampleInstance, Boolean val);
		static Boolean SetSampleInstancePlaymode(AllegroSampleInstance^ sampleInstance, AllegroPlaymode val);
		static Boolean SetSampleInstancePosition(AllegroSampleInstance^ sampleInstance, UInt32 val);
		static Boolean SetSampleInstanceSpeed(AllegroSampleInstance^ sampleInstance, Single val);
		static Boolean SetVoicePlaying(AllegroVoice^ voice, Boolean val);
		static Boolean SetVoicePosition(AllegroVoice^ voice, UInt32 val);
		static Boolean StopSampleInstance(AllegroSampleInstance^ sampleInstance);
		static Double GetAudioStreamLengthSecs(AllegroAudioStream^ stream);
		static Double GetAudioStreamPositionSecs(AllegroAudioStream^ stream);
		static Single GetAudioStreamGain(AllegroAudioStream^ stream);
		static Single GetAudioStreamPan(AllegroAudioStream^ stream);
		static Single GetAudioStreamSpeed(AllegroAudioStream^ stream);
		static Single GetMixerGain(AllegroMixer^ mixer);
		static Single GetSampleInstanceGain(AllegroSampleInstance^ sampleInstance);
		static Single GetSampleInstancePan(AllegroSampleInstance^ sampleInstance);
		static Single GetSampleInstanceSpeed(AllegroSampleInstance^ sampleInstance);
		static Single GetSampleInstanceTime(AllegroSampleInstance^ sampleInstance);
		static UInt32 GetAllegroAudioVersion();
		static UInt32 GetAudioStreamFragments(AllegroAudioStream^ stream);
		static UInt32 GetAudioStreamFrequency(AllegroAudioStream^ stream);
		static UInt32 GetAudioStreamLength(AllegroAudioStream^ stream);
		static UInt32 GetAvailableAudioStreamFragments(AllegroAudioStream^ stream);
		static UInt32 GetMixerFrequency(AllegroMixer^ mixer);
		static UInt32 GetSampleFrequency(AllegroSample^ sample);
		static UInt32 GetSampleInstanceFrequency(AllegroSampleInstance^ sampleInstance);
		static UInt32 GetSampleInstanceLength(AllegroSampleInstance^ sampleInstance);
		static UInt32 GetSampleInstancePosition(AllegroSampleInstance^ sampleInstance);
		static UInt32 GetSampleLength(AllegroSample^ sample);
		static UInt32 GetVoiceFrequency(AllegroVoice^ voice);
		static UInt32 GetVoicePosition(AllegroVoice^ voice);
		static UInt64 GetAudioDepthSize(AllegroAudioDepth depth);
		static UInt64 GetAudioStreamPlayedSamples(AllegroAudioStream^ stream);
		static UInt64 GetChannelCount(AllegroChannelConfiguration conf);
		static void DestroyAudioStream(AllegroAudioStream^ stream);
		static void DestroyMixer(AllegroMixer^ mixer);
		static void DestroySample(AllegroSample^ sample);
		static void DestroySampleInstance(AllegroSampleInstance^ sampleInstance);
		static void DestroyVoice(AllegroVoice^ voice);
		static void DetachVoice(AllegroVoice^ voice);
		static void DrainAudioStream(AllegroAudioStream^ stream);
		static void GetAudioStreamFragment(AllegroAudioStream^ stream);
		static void SetDefaultVoice(AllegroVoice^ voice);
		static void StopSample(AllegroSampleId^ sampleId);
		static void StopSamples();
		static void UninstallAudio();
		// static AllegroSample^ CreateSample(...);
		//static Byte^ GetSampleData(AllegroSample^ sample);
		// static void FillSilence(...);
		// static AllegroSample^ LoadSampleF(AllegroFile^ fp, String^ ident);
		// static Boolean SetAudioStreamFragment(AllegroAudioStream^ stream, ...);
		//static AllegroAudioStream^ LoadAudioStreamF(AllegroFile^ fp, String^ ident, UInt64 bufferCount, UInt32 samples);
		//static Boolean SaveSampleF(AllegroFile^ fp, String^ ident, AllegroSample^ sample);
		// static Boolean SetMixerPostprocessCallback(...);

		// Audio codecs addon
		static UInt32 GetAllegroACodecVersion();
		static Boolean InitACodecAddon();
		static Boolean IsACodecAddonInitialized();

		// Configuration files
		static AllegroConfig^ CreateConfig();
		static AllegroConfig^ LoadConfigFile(String^ filename);
		static AllegroConfig^ MergeConfig(AllegroConfig^ cfg1, AllegroConfig^ cfg2);
		static Boolean RemoveConfigKey(AllegroConfig^ config, String^ section, String^ key);
		static Boolean RemoveConfigSection(AllegroConfig^ config, String^ section);
		static Boolean SaveConfigFile(String^ filename, AllegroConfig^ config);
		static String^ GetConfigValue(AllegroConfig^ config, String^ section, String^ key);
		static String^ GetFirstConfigEntry(AllegroConfig^ config, String^ section, AllegroConfigEntry^% iterator);
		static String^ GetFirstConfigSection(AllegroConfig^ config, AllegroConfigSection^% iterator);
		static String^ GetNextConfigEntry(AllegroConfigEntry^ iterator);
		static String^ GetNextConfigSection(AllegroConfigSection^ iterator);
		static void AddConfigComment(AllegroConfig^ config, String^ section, String^ comment);
		static void AddConfigSection(AllegroConfig^ config, String^ name);
		static void DestroyConfig(AllegroConfig^ config);
		static void MergeConfigInto(AllegroConfig^ master, AllegroConfig^ add);
		static void SetConfigValue(AllegroConfig^ config, String^ section, String^ key, String^ value);
		// static AllegroConfig^ LoadConfigFileF(AllegroFile^ file);
		// static Boolean SaveConfigFileF(AllegroFile^ file, AllegroConfig^ config);

		// Display
		static void AcknowledgeDrawingHalt(AllegroDisplay^ display);
		static void AcknowledgeDrawingResume(AllegroDisplay^ display);
		static Boolean AcknowledgeResize(AllegroDisplay^ display);
		static void ApplyWindowConstraints(AllegroDisplay^ display, Boolean onOff);
		static Boolean ClipboardHasText(AllegroDisplay^ display);
		static AllegroDisplay^ CreateDisplay(Int32 w, Int32 h);
		static void DestroyDisplay(AllegroDisplay^ display);
		static void FlipDisplay();
		static AllegroBitmap^ GetBackbuffer(AllegroDisplay^ display);
		static String^ GetClipboardText(AllegroDisplay^ display);
		static AllegroEventSource^ GetDisplayEventSource(AllegroDisplay^ display);
		static AllegroDisplayFlags GetDisplayFlags(AllegroDisplay^ display);
		static AllegroPixelFormat GetDisplayFormat(AllegroDisplay^ display);
		static Int32 GetDisplayHeight(AllegroDisplay^ display);
		static Int32 GetDisplayOption(AllegroDisplay^ display, AllegroDisplayOption option);
		static AllegroDisplayOrientation GetDisplayOrientation(AllegroDisplay^ display);
		static Int32 GetDisplayRefreshRate(AllegroDisplay^ display);
		static Int32 GetDisplayWidth(AllegroDisplay^ display);
		static AllegroDisplayFlags GetNewDisplayFlags();
		static Int32 GetNewDisplayOption(AllegroDisplayOption option, AllegroImportance% importance);
		static Int32 GetNewDisplayRefreshRate();
		static void GetNewWindowPosition(Int32% x, Int32% y);
		static String^ GetNewWindowTitle();
		static Int32 GetNewWindowTitleMaxSize();
		static Boolean GetWindowConstraints(AllegroDisplay^ display, Int32% minWidth, Int32% minHeight, Int32% maxWidth, Int32% maxHeight);
		static void GetWindowPosition(AllegroDisplay^ display, Int32% x, Int32% y);
		static Boolean InhibitScreensaver(Boolean inhibit);
		static void ResetNewDisplayOptions();
		static void ResizeDisplay(AllegroDisplay^ display, Int32 width, Int32 height);
		static Boolean SetClipboardText(AllegroDisplay^ display, String^ text);
		static Boolean SetDisplayFlag(AllegroDisplay^ display, AllegroDisplayFlags flag, Boolean onOff);
		static void SetDisplayIcon(AllegroDisplay^ display, AllegroBitmap^ icon);
		static void SetDisplayIcons(AllegroDisplay^ display, Int32 numIcons, array<AllegroBitmap^>^ icons);
		static void SetDisplayOption(AllegroDisplay^ display, AllegroDisplayOption option, Int32 value);
		static void SetNewDisplayFlags(AllegroDisplayFlags flags);
		static void SetNewDisplayOption(AllegroDisplayOption option, Int32 value, AllegroImportance importance);
		static void SetNewDisplayRefreshRate(Int32 refreshRate);
		static void SetNewWindowPosition(Int32 x, Int32 y);
		static void SetNewWindowTitle(String^ title);
		static void SetWindowConstraints(AllegroDisplay^ display, Int32 minWidth, Int32 minHeight, Int32 maxWidth, Int32 maxHeight);
		static void SetWindowPosition(AllegroDisplay^ display, Int32 x, Int32 y);
		static void SetWindowTitle(AllegroDisplay^ display, String^ title);
		static void UpdateDisplayRegion(Int32 x, Int32 y, Int32 width, Int32 height);
		static void WaitForVsync();

		// Event system and events
		static AllegroEventQueue^ CreateEventQueue();
		static Boolean DropNextEvent(AllegroEventQueue^ queue);
		static Boolean EmitUserEvent(AllegroEventSource^ source, AllegroEvent^ allegroEvent, Action<AllegroUserEvent^>^ dtor);
		static Boolean GetNextEvent(AllegroEventQueue^ queue, AllegroEvent^ retEvent);
		static Boolean IsEventQueueEmpty(AllegroEventQueue^ queue);
		static Boolean IsEventQueuePaused(AllegroEventQueue^ queue);
		static Boolean IsEventSourceRegistered(AllegroEventQueue^ queue, AllegroEventSource^ source);
		static Boolean PeekNextEvent(AllegroEventQueue^ queue, AllegroEvent^ retEvent);
		static Boolean WaitForEventTimed(AllegroEventQueue^ queue, AllegroEvent^ retEvent, Single secs);
		static Boolean WaitForEventUntil(AllegroEventQueue^ queue, AllegroEvent^ retEvent, AllegroTimeout^ timeout);
		static Object^ GetEventSourceData(AllegroEventSource^ source);
		static void DestroyEventQueue(AllegroEventQueue^ queue);
		static void DestroyUserEventSource(AllegroEventSource^ source);
		static void FlushEventQueue(AllegroEventQueue^ queue);
		static void InitUserEventSource(AllegroEventSource^ source);
		static void PauseEventQueue(AllegroEventQueue^ queue, Boolean pause);
		static void RegisterEventSource(AllegroEventQueue^ queue, AllegroEventSource^ source);
		static void SetEventSourceData(AllegroEventSource^ source, Object^ data);
		static void UnrefUserEvent(AllegroUserEvent^ allegroEvent);
		static void UnregisterEventSource(AllegroEventQueue^ queue, AllegroEventSource^ source);
		static void WaitForEvent(AllegroEventQueue^ queue, AllegroEvent^ retEvent);

		// File system routines
		static Boolean MakeDirectory(String^ path);

		// Font routines
		static Boolean InitFontAddon();
		static Boolean IsFontAddonInitialized();
		static void ShutdownFontAddon();
		static AllegroFont^ LoadFont(String^ filename, Int32 size, AllegroBitmapFlags flags);
		static void DestroyFont(AllegroFont^ font);
		static Int32 GetFontLineHeight(AllegroFont^ font);
		static Int32 GetFontAscent(AllegroFont^ font);
		static Int32 GetFontDescent(AllegroFont^ font);
		static Int32 GetTextWidth(AllegroFont^ font, String^ text);
		static void DrawText(AllegroFont^ font, AllegroColor^ color, Single x, Single y, AllegroDrawTextFlags flags, String^ text);
		static void DrawJustifiedText(AllegroFont^ font, AllegroColor^ color, Single x1, Single x2, Single y, Single diff, AllegroDrawTextFlags flags, String^ text);
		// static void DrawTextF(AllegroFont^ font, AllegroColor^ color, Single x, Single y, AllegroDrawTextFlags flags, String^ format, ... array<String^>^ args);
		// static void DrawJustifiedTextF(AllegroFont^ font, AllegroColor^ color, Single x1, Single x2, Single y, Single diff, AllegroDrawTextFlags flags, String^ format, ... array<String^>^ args);
		static void GetTextDimensions(AllegroFont^ font, String^ text, Int32% bbx, Int32% bby, Int32% bbw, Int32% bbh);
		static Int32 GetAllegroFontVersion();
		// static Int32 GetFontRanges(AllegroFont^ font, Int32 rangesCount, array<Int32>^ ranges);
		static void SetFallbackFont(AllegroFont^ font, AllegroFont^ fallbackFont);
		static AllegroFont^ GetFallbackFont(AllegroFont^ font);
		// static Boolean RegisterFontLoader(String^ extension, Func<String^, AllegroBitmapFlags, AllegroFont^> loadFont);
		// static Int32 GetUStrWidth(AllegroFont^ font, String^ uText);
		// static void DrawUstr(AllegroFont^ font, AllegroColor^ color, Single x, Single y, AllegroDrawTextFlags flags, String^ text);
		// static void DrawJustifiedUStr(AllegroFont^ font, AllegroColor^ color, Single x1, Single x2, Single y, Single diff, AllegroDrawTextFlags flags, String^ text);
		// static void GetUStrDimensions(AllegroFont^ font, String^ text, Int32% bbx, Int32% bby, Int32% bbw, Int32% bbh);

		// Fullscreen modes
		static AllegroDisplayMode^ GetDisplayMode(Int32 index, AllegroDisplayMode^ mode);
		static Int32 GetNumDisplayModes();

		// Graphics routines
		static AllegroBitmap^ CloneBitmap(AllegroBitmap^ bitmap);
		static AllegroBitmap^ CreateBitmap(Int32 w, Int32 h);
		static AllegroBitmap^ CreateSubBitmap(AllegroBitmap^ parent, Int32 x, Int32 y, Int32 w, Int32 h);
		static AllegroBitmap^ GetParentBitmap(AllegroBitmap^ bitmap);
		static AllegroBitmap^ GetTargetBitmap();
		static AllegroBitmap^ LoadBitmapA(String^ filename);
		static AllegroBitmap^ LoadBitmapFlags(String^ filename, AllegroBitmapLoadFlags flags);
		static AllegroBitmapFlags GetBitmapFlags(AllegroBitmap^ bitmap);
		static AllegroBitmapFlags GetNewBitmapFlags();
		static AllegroColor^ GetBlendColor();
		static AllegroColor^ GetPixel(AllegroBitmap^ bitmap, Int32 x, Int32 y);
		static AllegroColor^ MapRgb(Byte r, Byte g, Byte b);
		static AllegroColor^ MapRgbA(Byte r, Byte g, Byte b, Byte a);
		static AllegroColor^ MapRgbAF(Single r, Single g, Single b, Single a);
		static AllegroColor^ MapRgbF(Single r, Single g, Single b);
		static AllegroColor^ PremulRgbA(Byte r, Byte g, Byte b, Byte a);
		static AllegroColor^ PreMulRgbAF(Single r, Single g, Single b, Single a);
		static AllegroDisplay^ GetCurrentDisplay();
		static AllegroPixelFormat GetBitmapFormat(AllegroBitmap^ bitmap);
		static AllegroPixelFormat GetNewBitmapFormat();
		static Boolean IsBitmapDrawingHeld();
		static Boolean IsBitmapLocked(AllegroBitmap^ bitmap);
		static Boolean IsCompatibleBitmap(AllegroBitmap^ bitmap);
		static Boolean IsSubBitmap(AllegroBitmap^ bitmap);
		static Boolean SaveBitmap(String^ filename, AllegroBitmap^ bitmap);
		static Int32 GetBitmapHeight(AllegroBitmap^ bitmap);
		static Int32 GetBitmapWidth(AllegroBitmap^ bitmap);
		static Int32 GetBitmapX(AllegroBitmap^ bitmap);
		static Int32 GetBitmapY(AllegroBitmap^ bitmap);
		static Int32 GetPixelBlockHeight(Int32 format);
		static Int32 GetPixelBlockSize(Int32 format);
		static Int32 GetPixelBlockWidth(Int32 format);
		static Int32 GetPixelFormatBits(Int32 format);
		static Int32 GetPixelSize(Int32 format);
		static String^ IdentifyBitmap(String^ filename);
		static void AddNewBitmapFlag(AllegroBitmapFlags flags);
		static void ClearDepthBuffer(Single z);
		static void ClearToColor(AllegroColor^ color);
		static void ConvertBitmap(AllegroBitmap^ bitmap);
		static void ConvertMaskToAlpha(AllegroBitmap^ bitmap, AllegroColor^ maskColor);
		static void ConvertMemoryBitmaps();
		static void DestroyBitmap(AllegroBitmap^ bitmap);
		static void DrawBitmap(AllegroBitmap^ bitmap, Single dx, Single dy, AllegroBitmapFlipFlags flags);
		static void DrawBitmapRegion(AllegroBitmap^ bitmap, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, AllegroBitmapFlipFlags flags);
		static void DrawPixel(Single x, Single y, AllegroColor^ color);
		static void DrawRotatedBitmap(AllegroBitmap^ bitmap, Single cx, Single cy, Single dx, Single dy, Single angle, AllegroBitmapFlipFlags flags);
		static void DrawScaledBitmap(AllegroBitmap^ bitmap, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, Single dw, Single dh, AllegroBitmapFlipFlags flags);
		static void DrawScaledRotatedBitmap(AllegroBitmap^ bitmap, Single cx, Single cy, Single dx, Single dy, Single xScale, Single yScale, Single angle, AllegroBitmapFlipFlags flags);
		static void DrawTintedBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single dx, Single dy, AllegroBitmapFlipFlags flags);
		static void DrawTintedBitmapRegion(AllegroBitmap^ bitmap, AllegroColor^ tint, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, AllegroBitmapFlipFlags flags);
		static void DrawTintedRotatedBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single cx, Single cy, Single dx, Single dy, Single angle, AllegroBitmapFlipFlags flags);
		static void DrawTintedScaledBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single sx, Single sy, Single sw, Single sh, Single dx, Single dy, Single dw, Single dh, AllegroBitmapFlipFlags flags);
		static void DrawTintedScaledRotatedBitmap(AllegroBitmap^ bitmap, AllegroColor^ tint, Single cx, Single cy, Single dx, Single dy, Single xScale, Single yScale, Single angle, AllegroBitmapFlipFlags flags);
		static void DrawTintedScaledRotatedBitmapRegion(AllegroBitmap^ bitmap, Single sx, Single sy, Single sw, Single sh, AllegroColor^ tint, Single cx, Single cy, Single dx, Single dy, Single xScale, Single yScale, Single angle, AllegroBitmapFlipFlags flags);
		static void GetBlender(Int32% op, Int32% src, Int32% dst);
		static void GetClippingRectangle(Int32% x, Int32% y, Int32% w, Int32% h);
		static void GetSeparateBlender(Int32% op, Int32% src, Int32% dst, Int32% alphaOp, Int32% alphaSrc, Int32% alphaDst);
		static void HoldBitmapDrawing(Boolean hold);
		static void PutBlendedPixel(Int32 x, Int32 y, AllegroColor^ color);
		static void PutPixel(Int32 x, Int32 y, AllegroColor^ color);
		static void ReparentBitmap(AllegroBitmap^ bitmap, AllegroBitmap^ parent, Int32 x, Int32 y, Int32 w, Int32 h);
		static void ResetClippingRectangle();
		static void SetBlendColor(AllegroColor^ color);
		static void SetBlender(Int32 op, Int32 src, Int32 dst);
		static void SetClippingRectangle(Int32 x, Int32 y, Int32 w, Int32 h);
		static void SetNewBitmapFlags(AllegroBitmapFlags flags);
		static void SetNewBitmapFormat(AllegroPixelFormat format);
		static void SetSeparateBlender(Int32 op, Int32 src, Int32 dst, Int32 alphaOp, Int32 alphaSrc, Int32 alphaDst);
		static void SetTargetBackbuffer(AllegroDisplay^ display);
		static void SetTargetBitmap(AllegroBitmap^ bitmap);
		static void UnlockBitmap(AllegroBitmap^ bitmap);
		static void UnmapRgb(AllegroColor^ color, Byte% r, Byte% g, Byte% b);
		static void UnmapRgbA(AllegroColor^ color, Byte% r, Byte% g, Byte% b, Byte% a);
		static void UnmapRgbAF(AllegroColor^ color, Single% r, Single% g, Single% b, Single% a);
		static void UnmapRgbF(AllegroColor^ color, Single% r, Single% g, Single% b);
		// static String^				IdentifyBitmapF(AllegroFile^ file);
		// static AllegroLockedRegion^ LockBitmap(AllegroBitmap^ bitmap, Int32 format, Int32 flags);
		// static AllegroLockedRegion^ LockBitmapRegion(AllegroBitmap^ bitmap, Int32 x, Int32, y, Int32 width, Int32 height, Int32 format, Int32 flags);
		// static AllegroBitmap^		LoadBitmapF(AllegroFile^ file, String^ ident);
		// static AllegroBitmap^		LoadBitmapFlagsF(AllegroFile^ file, String^ ident, AllegroBitmapLoadFlags flags);
		// static Boolean				SaveBitmapF(AllegroFile^ file, String^ ident, AllegroBitmap^ bitmap);
		// static AllegroLockedRegion^ LockBitmapBlocked(AllegroBitmap^ bitmap);
		// static AllegroLockedRegion^ LockBitmapRegionBlocked(AllegroBitmap^ bitmap, Int32 xBlock, Int32 yBlock, Int32 widthBlock, Int32 heightBlock, Int32 flags);

		// Image I/O addon
		static UInt32 GetAllegroImageVersion();
		static Boolean InitImageAddon();
		static Boolean IsImageAddonInitialized();
		static void ShutdownImageAddon();

		// Joystick routines
		static AllegroEventSource^ GetJoystickEventSource();
		static AllegroJoyFlags GetJoystickStickFlags(AllegroJoystick^ joy, Int32 stick);
		static AllegroJoystick^ GetJoystick(Int32 num);
		static Boolean GetJoystickActive(AllegroJoystick^ joy);
		static Boolean InstallJoystick();
		static Boolean IsJoystickInstalled();
		static Boolean ReconfigureJoysticks();
		static Int32 GetJoystickNumAxes(AllegroJoystick^ joy, Int32 stick);
		static Int32 GetJoystickNumButtons(AllegroJoystick^ joy);
		static Int32 GetJoystickNumSticks(AllegroJoystick^ joy);
		static Int32 GetNumJoysticks();
		static String^ GetJoystickAxisName(AllegroJoystick^ joy, Int32 stick, Int32 axis);
		static String^ GetJoystickButtonName(AllegroJoystick^ joy, Int32 button);
		static String^ GetJoystickName(AllegroJoystick^ joy);
		static String^ GetJoystickStickName(AllegroJoystick^ joy, Int32 stick);
		static void GetJoystickState(AllegroJoystick^ joy, AllegroJoystickState^ retState);
		static void ReleaseJoystick(AllegroJoystick^ joy);
		static void UninstallJoystick();

		// Keyboard routines
		static AllegroEventSource^ GetKeyboardEventSource();
		static Boolean InstallKeyboard();
		static Boolean IsKeyboardInstalled();
		static Boolean KeyDown(AllegroKeyboardState^ state, AllegroKeyCode keycode);
		static Boolean SetKeyboardLeds(AllegroKeyboardModifier leds);
		static String^ KeycodeToName(AllegroKeyCode keycode);
		static void GetKeyboardState(AllegroKeyboardState^ retState);
		static void UninstallKeyboard();

		// Monitors
		static Boolean GetMonitorInfo(Int32 adapter, AllegroMonitorInfo^ info);
		static Int32 GetMonitorDpi(Int32 adapter);
		static Int32 GetNumVideoAdapters();
		static void SetNewDisplayAdapter(Int32 adapter);

		// Multiline text drawing
		static void DrawMultilineText(AllegroFont^ font, AllegroColor^ color, Single x, Single y, Single maxWidth, Single maxHeight, AllegroDrawTextFlags flags, String^ text);
		// static void DrawMultilineTextF(AllegroFont^ font, AllegroColor^ color, Single x, Single y, Single maxWidth, Single maxHeight, AllegroDrawTextFlags flags, String^ text, ... array<String^>^ args);
		// static void DoMultilineText(AllegroFont^ font, Single maxWidth, String^ text, Func<Int32, String^, Int32, Object^, Boolean> cb, Object^ obj);
		// static void DoMultilineUStr(AllegroFont^ font, Single maxWidth, String^ text, Func<Int32, String^, Int32, Object^, Boolean> cb, Object^ obj);
		// static void DrawMultilineUStr(AllegroFont^ font, AllegroColor^ color, Single x, Single y, Single maxWidth, Single maxHeight, AllegroDrawTextFlags flags, String^ text);

		// Per glyph text handling
		static void DrawGlyph(AllegroFont^ font, AllegroColor^ color, Single x, Single y, Int32 codePoint);
		static Int32 GetGlyphWidth(AllegroFont^ font, Int32 codePoint);
		static Boolean GetGlyphDimensions(AllegroFont^ font, Int32 codePoint, Int32% bbx, Int32% bby, Int32% bbw, Int32% bbh);
		static Int32 GetGlyphAdvance(AllegroFont^ font, Int32 codePoint1, Int32 codePoint2);

		// System
		static UInt32 GetAllegroVersion();
		static String^ GetAppName();
		static Int32 GetCpuCount();
		static String^ GetOrgName();
		static Int32 GetRamSize();
		static AllegroPath^ GetStandardPath(AllegroStandardPath id);
		static AllegroConfig^ GetSystemConfig();
		static AllegroSystemId GetSystemId();
		static Boolean Init();
		static Boolean InstallSystem();
		static Boolean IsSystemInstalled();
		static void RegisterAssertHandler(Action<String^, String^, Int32, String^>^ handler);
		static void RegisterTraceHandler(Action<String^>^ handler);
		static void SetAppName(String^ appName);
		static void SetExeName(String^ exeName);
		static void SetOrgName(String^ orgName);
		static void UninstallSystem();

		// Time
		static Double GetTime();
		static void InitTimeout(AllegroTimeout^ timeout, Double seconds);
		static void Rest(Double seconds);

		// Timer
		static void AddTimerCount(AllegroTimer^ timer, Int64 diff);
		static AllegroTimer^ CreateTimer(Double speedSecs);
		static void DestroyTimer(AllegroTimer^ timer);
		static AllegroEventSource^ GetTimerEventSource(AllegroTimer^ timer);
		static Boolean GetTimerStarted(AllegroTimer^ timer);
		static Double GetTimerSpeed(AllegroTimer^ timer);
		static Int64 GetTimerCount(AllegroTimer^ timer);
		static void ResumeTimer(AllegroTimer^ timer);
		static void SetTimerCount(AllegroTimer^ timer, Int64 newCount);
		static void SetTimerSpeed(AllegroTimer^ timer, Double newSpeedSecs);
		static void StartTimer(AllegroTimer^ timer);
		static void StopTimer(AllegroTimer^ timer);

		// TTF fonts
		static Boolean InitTtfAddon();
		static Boolean IsTtfAddonInitialized();
		static void ShutdownTtfAddon();
		static AllegroFont^ LoadTtfFont(String^ filename, Int32 size, AllegroTtfFlags flags);
		static AllegroFont^ LoadTtfFontStretch(String^ filename, Int32 w, Int32 h, AllegroTtfFlags flags);
		static Int32 GetAllegroTtfVersion();

		// Wrapper
		static String^ GetAllegroCliBuild();
		static String^ GetAllegroCliVersion();
		static Double GetBpmToSecs(Double x);
		static Double GetBpsToSecs(Double x);
	};
}

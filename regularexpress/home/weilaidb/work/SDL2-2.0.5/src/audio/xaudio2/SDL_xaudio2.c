#if SDL_AUDIO_DRIVER_XAUDIO2
#  define SDL_XAUDIO2_HAS_SDK 1
#elif defined(__WINRT__)
#  define SDL_XAUDIO2_HAS_SDK
#if WINVER >= 0x0602
#define SDL_XAUDIO2_WIN8 1
#if !defined(_SDL_XAUDIO2_H)
#define INITGUID 1
#define _THIS   SDL_AudioDevice *this
#undef THIS
#define THIS    INTERFACE *p
#undef THIS_
#define THIS_   INTERFACE *p,
struct SDL_PrivateAudioData
;
static void
XAUDIO2_DetectDevices(void)
static void STDMETHODCALLTYPE
VoiceCBOnBufferEnd(THIS_ void *data)
static void STDMETHODCALLTYPE
VoiceCBOnVoiceError(THIS_ void *data, HRESULT Error)
static void STDMETHODCALLTYPE VoiceCBOnStreamEnd(THIS)
static void STDMETHODCALLTYPE VoiceCBOnVoiceProcessPassStart(THIS_ UINT32 b)
static void STDMETHODCALLTYPE VoiceCBOnVoiceProcessPassEnd(THIS)
static void STDMETHODCALLTYPE VoiceCBOnBufferStart(THIS_ void *data)
static void STDMETHODCALLTYPE VoiceCBOnLoopEnd(THIS_ void *data)
static Uint8 *
XAUDIO2_GetDeviceBuf(_THIS)
static void
XAUDIO2_PlayDevice(_THIS)
static void
XAUDIO2_WaitDevice(_THIS)
static void
XAUDIO2_PrepareToClose(_THIS)
static void
XAUDIO2_CloseDevice(_THIS)
static int
XAUDIO2_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
XAUDIO2_Deinitialize(void)
static int
XAUDIO2_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap XAUDIO2_bootstrap = ;

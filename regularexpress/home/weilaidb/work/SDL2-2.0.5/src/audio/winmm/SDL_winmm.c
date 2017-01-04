#if SDL_AUDIO_DRIVER_WINMM
#define WAVE_FORMAT_IEEE_FLOAT 0x0003
#define DETECT_DEV_IMPL(iscap, typ, capstyp) \
static void DetectWave##typ##Devs(void)
DETECT_DEV_IMPL(SDL_FALSE, Out, WAVEOUTCAPS)
DETECT_DEV_IMPL(SDL_TRUE, In, WAVEINCAPS)
static void
WINMM_DetectDevices(void)
static void CALLBACK
CaptureSound(HWAVEIN hwi, UINT uMsg, DWORD_PTR dwInstance,
DWORD_PTR dwParam1, DWORD_PTR dwParam2)
static void CALLBACK
FillSound(HWAVEOUT hwo, UINT uMsg, DWORD_PTR dwInstance,
DWORD_PTR dwParam1, DWORD_PTR dwParam2)
static int
SetMMerror(char *function, MMRESULT code)
static void
WINMM_WaitDevice(_THIS)
static Uint8 *
WINMM_GetDeviceBuf(_THIS)
static void
WINMM_PlayDevice(_THIS)
static int
WINMM_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
WINMM_FlushCapture(_THIS)
static void
WINMM_CloseDevice(_THIS)
static SDL_bool
PrepWaveFormat(_THIS, UINT devId, WAVEFORMATEX *pfmt, const int iscapture)
static int
WINMM_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static int
WINMM_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap WINMM_bootstrap = ;

#if SDL_AUDIO_DRIVER_DSOUND
#define WAVE_FORMAT_IEEE_FLOAT 0x0003
static void* DSoundDLL = NULL;
typedef HRESULT (WINAPI *fnDirectSoundCreate8)(LPGUID,LPDIRECTSOUND*,LPUNKNOWN);
typedef HRESULT (WINAPI *fnDirectSoundEnumerateW)(LPDSENUMCALLBACKW, LPVOID);
typedef HRESULT (WINAPI *fnDirectSoundCaptureCreate8)(LPCGUID,LPDIRECTSOUNDCAPTURE8 *,LPUNKNOWN);
typedef HRESULT (WINAPI *fnDirectSoundCaptureEnumerateW)(LPDSENUMCALLBACKW,LPVOID);
static fnDirectSoundCreate8 pDirectSoundCreate8 = NULL;
static fnDirectSoundEnumerateW pDirectSoundEnumerateW = NULL;
static fnDirectSoundCaptureCreate8 pDirectSoundCaptureCreate8 = NULL;
static fnDirectSoundCaptureEnumerateW pDirectSoundCaptureEnumerateW = NULL;
static void
DSOUND_Unload(void)
static int
DSOUND_Load(void)
static int
SetDSerror(const char *function, int code)
static void
DSOUND_FreeDeviceHandle(void *handle)
static BOOL CALLBACK
FindAllDevs(LPGUID guid, LPCWSTR desc, LPCWSTR module, LPVOID data)
static void
DSOUND_DetectDevices(void)
static void
DSOUND_WaitDevice(_THIS)
static void
DSOUND_PlayDevice(_THIS)
static Uint8 *
DSOUND_GetDeviceBuf(_THIS)
static int
DSOUND_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
DSOUND_FlushCapture(_THIS)
static void
DSOUND_CloseDevice(_THIS)
static int
CreateSecondary(_THIS, const DWORD bufsize, WAVEFORMATEX *wfmt)
static int
CreateCaptureBuffer(_THIS, const DWORD bufsize, WAVEFORMATEX *wfmt)
static int
DSOUND_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
DSOUND_Deinitialize(void)
static int
DSOUND_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap DSOUND_bootstrap = ;

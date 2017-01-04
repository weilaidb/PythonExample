#if SDL_AUDIO_DRIVER_ANDROID
static SDL_AudioDevice* audioDevice = NULL;
static SDL_AudioDevice* captureDevice = NULL;
static int
ANDROIDAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
ANDROIDAUDIO_PlayDevice(_THIS)
static Uint8 *
ANDROIDAUDIO_GetDeviceBuf(_THIS)
static int
ANDROIDAUDIO_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
ANDROIDAUDIO_FlushCapture(_THIS)
static void
ANDROIDAUDIO_CloseDevice(_THIS)
static int
ANDROIDAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap ANDROIDAUDIO_bootstrap = ;
void ANDROIDAUDIO_PauseDevices(void)
void ANDROIDAUDIO_ResumeDevices(void)

#if SDL_AUDIO_DRIVER_BSD
static void
BSDAUDIO_DetectDevices(void)
static void
BSDAUDIO_Status(_THIS)
static void
BSDAUDIO_WaitDevice(_THIS)
static void
BSDAUDIO_PlayDevice(_THIS)
static Uint8 *
BSDAUDIO_GetDeviceBuf(_THIS)
static int
BSDAUDIO_CaptureFromDevice(_THIS, void *_buffer, int buflen)
static void
BSDAUDIO_FlushCapture(_THIS)
static void
BSDAUDIO_CloseDevice(_THIS)
static int
BSDAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static int
BSDAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap BSD_AUDIO_bootstrap = ;

#if SDL_AUDIO_DRIVER_OSS
#if SDL_AUDIO_DRIVER_OSS_SOUNDCARD_H
static void
DSP_DetectDevices(void)
static void
DSP_CloseDevice(_THIS)
static int
DSP_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
DSP_PlayDevice(_THIS)
static Uint8 *
DSP_GetDeviceBuf(_THIS)
static int
DSP_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
DSP_FlushCapture(_THIS)
static int
DSP_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap DSP_bootstrap = ;

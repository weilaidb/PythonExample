#if SDL_AUDIO_DRIVER_SUNAUDIO
#if defined(AUDIO_GETINFO) && !defined(AUDIO_GETBUFINFO)
#define AUDIO_GETBUFINFO AUDIO_GETINFO
static Uint8 snd2au(int sample);
static void
SUNAUDIO_DetectDevices(void)
void
CheckUnderflow(_THIS)
static void
SUNAUDIO_WaitDevice(_THIS)
static void
SUNAUDIO_PlayDevice(_THIS)
static Uint8 *
SUNAUDIO_GetDeviceBuf(_THIS)
static void
SUNAUDIO_CloseDevice(_THIS)
static int
SUNAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static Uint8
snd2au(int sample)
static int
SUNAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap SUNAUDIO_bootstrap = ;

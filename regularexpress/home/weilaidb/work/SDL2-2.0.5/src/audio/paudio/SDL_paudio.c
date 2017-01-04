#if SDL_AUDIO_DRIVER_PAUDIO
#define DEBUG_AUDIO 0
#undef BIG_ENDIAN
#define OPEN_FLAGS  O_WRONLY
#define _PATH_DEV_DSP   "/dev/%caud%c/%c"
static char devsettings[][3] = ;
static int
OpenUserDefinedDevice(char *path, int maxlen, int flags)
static int
OpenAudioPath(char *path, int maxlen, int flags, int classic)
static void
PAUDIO_WaitDevice(_THIS)
static void
PAUDIO_PlayDevice(_THIS)
static Uint8 *
PAUDIO_GetDeviceBuf(_THIS)
static void
PAUDIO_CloseDevice(_THIS)
static int
PAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static int
PAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap PAUDIO_bootstrap = ;

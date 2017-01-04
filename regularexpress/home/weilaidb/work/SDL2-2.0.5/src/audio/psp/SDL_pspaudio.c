#if SDL_AUDIO_DRIVER_PSP
#define PSPAUDIO_DRIVER_NAME         "psp"
static int
PSPAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void PSPAUDIO_PlayDevice(_THIS)
static void PSPAUDIO_WaitDevice(_THIS)
static Uint8 *PSPAUDIO_GetDeviceBuf(_THIS)
static void PSPAUDIO_CloseDevice(_THIS)
static void PSPAUDIO_ThreadInit(_THIS)
static int
PSPAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap PSPAUDIO_bootstrap = ;

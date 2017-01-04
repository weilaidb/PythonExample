#if SDL_AUDIO_DRIVER_ESD
#define SDL_NAME(X) X
static const char *esd_library = SDL_AUDIO_DRIVER_ESD_DYNAMIC;
static void *esd_handle = NULL;
static int (*SDL_NAME(esd_open_sound)) (const char *host);
static int (*SDL_NAME(esd_close)) (int esd);
static int (*SDL_NAME(esd_play_stream)) (esd_format_t format, int rate,
const char *host, const char *name);
#define SDL_ESD_SYM(x)
static struct
const esd_functions[] = ;
#undef SDL_ESD_SYM
static void
UnloadESDLibrary()
static int
LoadESDLibrary(void)
static void
UnloadESDLibrary()
static int
LoadESDLibrary(void)
static void
ESD_WaitDevice(_THIS)
static void
ESD_PlayDevice(_THIS)
static Uint8 *
ESD_GetDeviceBuf(_THIS)
static void
ESD_CloseDevice(_THIS)
static char *
get_progname(void)
static int
ESD_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
ESD_Deinitialize(void)
static int
ESD_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap ESD_bootstrap = ;

#if SDL_AUDIO_DRIVER_ARTS
#define SDL_NAME(X)	X
static const char *arts_library = SDL_AUDIO_DRIVER_ARTS_DYNAMIC;
static void *arts_handle = NULL;
static int (*SDL_NAME(arts_init)) (void);
static void (*SDL_NAME(arts_free)) (void);
static arts_stream_t(*SDL_NAME(arts_play_stream)) (int rate, int bits,
int channels,
const char *name);
static int (*SDL_NAME(arts_stream_set)) (arts_stream_t s,
arts_parameter_t param, int value);
static int (*SDL_NAME(arts_stream_get)) (arts_stream_t s,
arts_parameter_t param);
static int (*SDL_NAME(arts_write)) (arts_stream_t s, const void *buffer,
int count);
static void (*SDL_NAME(arts_close_stream)) (arts_stream_t s);
static int (*SDL_NAME(arts_suspend))(void);
static int (*SDL_NAME(arts_suspended)) (void);
static const char *(*SDL_NAME(arts_error_text)) (int errorcode);
#define SDL_ARTS_SYM(x)
static struct
arts_functions[] = ;
#undef SDL_ARTS_SYM
static void
UnloadARTSLibrary()
static int
LoadARTSLibrary(void)
static void
UnloadARTSLibrary()
static int
LoadARTSLibrary(void)
static void
ARTS_WaitDevice(_THIS)
static void
ARTS_PlayDevice(_THIS)
static Uint8 *
ARTS_GetDeviceBuf(_THIS)
static void
ARTS_CloseDevice(_THIS)
static int
ARTS_Suspend(void)
static int
ARTS_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
ARTS_Deinitialize(void)
static int
ARTS_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap ARTS_bootstrap = ;

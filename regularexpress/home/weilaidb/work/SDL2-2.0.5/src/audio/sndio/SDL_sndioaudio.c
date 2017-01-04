#if SDL_AUDIO_DRIVER_SNDIO
#if HAVE_STDIO_H
static struct sio_hdl * (*SNDIO_sio_open)(const char *, unsigned int, int);
static void (*SNDIO_sio_close)(struct sio_hdl *);
static int (*SNDIO_sio_setpar)(struct sio_hdl *, struct sio_par *);
static int (*SNDIO_sio_getpar)(struct sio_hdl *, struct sio_par *);
static int (*SNDIO_sio_start)(struct sio_hdl *);
static int (*SNDIO_sio_stop)(struct sio_hdl *);
static size_t (*SNDIO_sio_read)(struct sio_hdl *, void *, size_t);
static size_t (*SNDIO_sio_write)(struct sio_hdl *, const void *, size_t);
static void (*SNDIO_sio_initpar)(struct sio_par *);
static const char *sndio_library = SDL_AUDIO_DRIVER_SNDIO_DYNAMIC;
static void *sndio_handle = NULL;
static int
load_sndio_sym(const char *fn, void **addr)
#define SDL_SNDIO_SYM(x) \
if (!load_sndio_sym(#x, (void **) (char *) &SNDIO_##x)) return -1
#define SDL_SNDIO_SYM(x) SNDIO_##x = x
static int
load_sndio_syms(void)
#undef SDL_SNDIO_SYM
static void
UnloadSNDIOLibrary(void)
static int
LoadSNDIOLibrary(void)
static void
UnloadSNDIOLibrary(void)
static int
LoadSNDIOLibrary(void)
static void
SNDIO_WaitDevice(_THIS)
static void
SNDIO_PlayDevice(_THIS)
static Uint8 *
SNDIO_GetDeviceBuf(_THIS)
static void
SNDIO_CloseDevice(_THIS)
static int
SNDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
SNDIO_Deinitialize(void)
static int
SNDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap SNDIO_bootstrap = ;

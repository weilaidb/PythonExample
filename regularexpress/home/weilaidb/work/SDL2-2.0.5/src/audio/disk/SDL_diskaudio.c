#if SDL_AUDIO_DRIVER_DISK
#if HAVE_STDIO_H
#define DISKENVR_OUTFILE         "SDL_DISKAUDIOFILE"
#define DISKDEFAULT_OUTFILE      "sdlaudio.raw"
#define DISKENVR_INFILE         "SDL_DISKAUDIOFILEIN"
#define DISKDEFAULT_INFILE      "sdlaudio-in.raw"
#define DISKENVR_IODELAY      "SDL_DISKAUDIODELAY"
static void
DISKAUDIO_WaitDevice(_THIS)
static void
DISKAUDIO_PlayDevice(_THIS)
static Uint8 *
DISKAUDIO_GetDeviceBuf(_THIS)
static int
DISKAUDIO_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
DISKAUDIO_FlushCapture(_THIS)
static void
DISKAUDIO_CloseDevice(_THIS)
static const char *
get_filename(const int iscapture, const char *devname)
static int
DISKAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
DISKAUDIO_DetectDevices(void)
static int
DISKAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap DISKAUDIO_bootstrap = ;

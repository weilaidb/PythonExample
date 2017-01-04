#if SDL_AUDIO_DRIVER_HAIKU
extern "C"
static void
FillSound(void *device, void *stream, size_t len,
const media_raw_audio_format & format)
static void
HAIKUAUDIO_CloseDevice(_THIS)
static const int sig_list[] = ;
static inline void
MaskSignals(sigset_t * omask)
static inline void
UnmaskSignals(sigset_t * omask)
static int
HAIKUAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
HAIKUAUDIO_Deinitialize(void)
static int
HAIKUAUDIO_Init(SDL_AudioDriverImpl * impl)
extern "C"
AudioBootStrap HAIKUAUDIO_bootstrap = ;

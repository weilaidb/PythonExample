#if SDL_AUDIO_DRIVER_EMSCRIPTEN
static int
copyData(_THIS)
static void
HandleAudioProcess(_THIS)
static void
HandleCaptureProcess(_THIS)
static void
EMSCRIPTENAUDIO_CloseDevice(_THIS)
static int
EMSCRIPTENAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static int
EMSCRIPTENAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap EMSCRIPTENAUDIO_bootstrap = ;

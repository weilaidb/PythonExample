#if SDL_AUDIO_DRIVER_BSD || SDL_AUDIO_DRIVER_OSS || SDL_AUDIO_DRIVER_SUNAUDIO
#if defined(__NETBSD__) || defined(__OPENBSD__)
#define _PATH_DEV_DSP  "/dev/audio"
#define _PATH_DEV_DSP  "/dev/dsp"
#define _PATH_DEV_DSP24 "/dev/sound/dsp"
#define _PATH_DEV_AUDIO "/dev/audio"
static void
test_device(const int iscapture, const char *fname, int flags, int (*test) (int fd))
static int
test_stub(int fd)
static void
SDL_EnumUnixAudioDevices_Internal(const int iscapture, const int classic, int (*test)(int))
void
SDL_EnumUnixAudioDevices(const int classic, int (*test)(int))

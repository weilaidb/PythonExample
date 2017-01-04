#define OPEN_FLAGS_OUTPUT O_WRONLY
#define OPEN_FLAGS_INPUT O_RDONLY
#define OPEN_FLAGS_OUTPUT (O_WRONLY|O_NONBLOCK)
#define OPEN_FLAGS_INPUT (O_RDONLY|O_NONBLOCK)
extern void SDL_EnumUnixAudioDevices(const int classic, int (*test)(int));

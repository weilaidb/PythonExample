#define _SDL_sysaudio_h
#define DEFAULT_OUTPUT_DEVNAME "System audio output device"
#define DEFAULT_INPUT_DEVNAME "System audio capture device"
typedef struct SDL_AudioDevice SDL_AudioDevice;
#define _THIS   SDL_AudioDevice *_this
extern void SDL_AddAudioDevice(const int iscapture, const char *name, void *handle);
extern void SDL_RemoveAudioDevice(const int iscapture, void *handle);
extern void SDL_OpenedAudioDeviceDisconnected(SDL_AudioDevice *device);
#define SDL_AUDIOBUFFERQUEUE_PACKETLEN (8 * 1024)
typedef struct SDL_AudioBufferQueue
SDL_AudioBufferQueue;
typedef struct SDL_AudioDriverImpl
SDL_AudioDriverImpl;
typedef struct SDL_AudioDeviceItem
SDL_AudioDeviceItem;
typedef struct SDL_AudioDriver
SDL_AudioDriver;
typedef struct
SDL_AudioStreamer;
struct SDL_AudioDevice
;
#undef _THIS
typedef struct AudioBootStrap
AudioBootStrap;

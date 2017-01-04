#define _THIS SDL_AudioDevice *_this
static SDL_AudioDriver current_audio;
static SDL_AudioDevice *open_devices[16];
extern AudioBootStrap PULSEAUDIO_bootstrap;
extern AudioBootStrap ALSA_bootstrap;
extern AudioBootStrap SNDIO_bootstrap;
extern AudioBootStrap BSD_AUDIO_bootstrap;
extern AudioBootStrap DSP_bootstrap;
extern AudioBootStrap QSAAUDIO_bootstrap;
extern AudioBootStrap SUNAUDIO_bootstrap;
extern AudioBootStrap ARTS_bootstrap;
extern AudioBootStrap ESD_bootstrap;
extern AudioBootStrap NACLAUDIO_bootstrap;
extern AudioBootStrap NAS_bootstrap;
extern AudioBootStrap XAUDIO2_bootstrap;
extern AudioBootStrap DSOUND_bootstrap;
extern AudioBootStrap WINMM_bootstrap;
extern AudioBootStrap PAUDIO_bootstrap;
extern AudioBootStrap HAIKUAUDIO_bootstrap;
extern AudioBootStrap COREAUDIO_bootstrap;
extern AudioBootStrap DISKAUDIO_bootstrap;
extern AudioBootStrap DUMMYAUDIO_bootstrap;
extern AudioBootStrap FUSIONSOUND_bootstrap;
extern AudioBootStrap ANDROIDAUDIO_bootstrap;
extern AudioBootStrap PSPAUDIO_bootstrap;
extern AudioBootStrap SNDIO_bootstrap;
extern AudioBootStrap EMSCRIPTENAUDIO_bootstrap;
static const AudioBootStrap *const bootstrap[] = ;
static SDL_AudioDevice *
get_audio_device(SDL_AudioDeviceID id)
static void
SDL_AudioDetectDevices_Default(void)
static void
SDL_AudioThreadInit_Default(_THIS)
static void
SDL_AudioWaitDevice_Default(_THIS)
static void
SDL_AudioPlayDevice_Default(_THIS)
static int
SDL_AudioGetPendingBytes_Default(_THIS)
static Uint8 *
SDL_AudioGetDeviceBuf_Default(_THIS)
static int
SDL_AudioCaptureFromDevice_Default(_THIS, void *buffer, int buflen)
static void
SDL_AudioFlushCapture_Default(_THIS)
static void
SDL_AudioPrepareToClose_Default(_THIS)
static void
SDL_AudioCloseDevice_Default(_THIS)
static void
SDL_AudioDeinitialize_Default(void)
static void
SDL_AudioFreeDeviceHandle_Default(void *handle)
static int
SDL_AudioOpenDevice_Default(_THIS, void *handle, const char *devname, int iscapture)
static SDL_INLINE SDL_bool
is_in_audio_device_thread(SDL_AudioDevice * device)
static void
SDL_AudioLockDevice_Default(SDL_AudioDevice * device)
static void
SDL_AudioUnlockDevice_Default(SDL_AudioDevice * device)
static void
SDL_AudioLockOrUnlockDeviceWithNoMixerLock(SDL_AudioDevice * device)
static void
finish_audio_entry_points_init(void)
static int
add_audio_device(const char *name, void *handle, SDL_AudioDeviceItem **devices, int *devCount)
static SDL_INLINE int
add_capture_device(const char *name, void *handle)
static SDL_INLINE int
add_output_device(const char *name, void *handle)
static void
free_device_list(SDL_AudioDeviceItem **devices, int *devCount)
void
SDL_AddAudioDevice(const int iscapture, const char *name, void *handle)
void SDL_OpenedAudioDeviceDisconnected(SDL_AudioDevice *device)
static void
mark_device_removed(void *handle, SDL_AudioDeviceItem *devices, SDL_bool *removedFlag)
void
SDL_RemoveAudioDevice(const int iscapture, void *handle)
static void
free_audio_queue(SDL_AudioBufferQueue *packet)
static int
queue_audio_to_device(SDL_AudioDevice *device, const Uint8 *data, Uint32 len)
static Uint32
dequeue_audio_from_device(SDL_AudioDevice *device, Uint8 *stream, Uint32 len)
static void SDLCALL
SDL_BufferQueueDrainCallback(void *userdata, Uint8 *stream, int len)
static void SDLCALL
SDL_BufferQueueFillCallback(void *userdata, Uint8 *stream, int len)
int
SDL_QueueAudio(SDL_AudioDeviceID devid, const void *data, Uint32 len)
Uint32
SDL_DequeueAudio(SDL_AudioDeviceID devid, void *data, Uint32 len)
Uint32
SDL_GetQueuedAudioSize(SDL_AudioDeviceID devid)
void
SDL_ClearQueuedAudio(SDL_AudioDeviceID devid)
static int SDLCALL
SDL_RunAudio(void *devicep)
static int SDLCALL
SDL_CaptureAudio(void *devicep)
static SDL_AudioFormat
SDL_ParseAudioFormat(const char *string)
int
SDL_GetNumAudioDrivers(void)
const char *
SDL_GetAudioDriver(int index)
int
SDL_AudioInit(const char *driver_name)
const char *
SDL_GetCurrentAudioDriver()
static void
clean_out_device_list(SDL_AudioDeviceItem **devices, int *devCount, SDL_bool *removedFlag)
int
SDL_GetNumAudioDevices(int iscapture)
const char *
SDL_GetAudioDeviceName(int index, int iscapture)
static void
close_audio_device(SDL_AudioDevice * device)
static int
prepare_audiospec(const SDL_AudioSpec * orig, SDL_AudioSpec * prepared)
static SDL_AudioDeviceID
open_audio_device(const char *devname, int iscapture,
const SDL_AudioSpec * desired, SDL_AudioSpec * obtained,
int allowed_changes, int min_id)
int
SDL_OpenAudio(SDL_AudioSpec * desired, SDL_AudioSpec * obtained)
SDL_AudioDeviceID
SDL_OpenAudioDevice(const char *device, int iscapture,
const SDL_AudioSpec * desired, SDL_AudioSpec * obtained,
int allowed_changes)
SDL_AudioStatus
SDL_GetAudioDeviceStatus(SDL_AudioDeviceID devid)
SDL_AudioStatus
SDL_GetAudioStatus(void)
void
SDL_PauseAudioDevice(SDL_AudioDeviceID devid, int pause_on)
void
SDL_PauseAudio(int pause_on)
void
SDL_LockAudioDevice(SDL_AudioDeviceID devid)
void
SDL_LockAudio(void)
void
SDL_UnlockAudioDevice(SDL_AudioDeviceID devid)
void
SDL_UnlockAudio(void)
void
SDL_CloseAudioDevice(SDL_AudioDeviceID devid)
void
SDL_CloseAudio(void)
void
SDL_AudioQuit(void)
#define NUM_FORMATS 10
static int format_idx;
static int format_idx_sub;
static SDL_AudioFormat format_list[NUM_FORMATS][NUM_FORMATS] = ;
SDL_AudioFormat
SDL_FirstAudioFormat(SDL_AudioFormat format)
SDL_AudioFormat
SDL_NextAudioFormat(void)
void
SDL_CalculateAudioSpec(SDL_AudioSpec * spec)
void
SDL_MixAudio(Uint8 * dst, const Uint8 * src, Uint32 len, int volume)

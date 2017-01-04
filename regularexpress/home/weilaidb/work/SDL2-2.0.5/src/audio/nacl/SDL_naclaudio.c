#if SDL_AUDIO_DRIVER_NACL
#define NACLAUDIO_DRIVER_NAME         "nacl"
#define SAMPLE_FRAME_COUNT 4096
static void nacl_audio_callback(void* samples, uint32_t buffer_size, PP_TimeDelta latency, void* data);
static void nacl_audio_callback(void* samples, uint32_t buffer_size, PP_TimeDelta latency, void* data)
static void NACLAUDIO_CloseDevice(SDL_AudioDevice *device)
static int
NACLAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static int
NACLAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap NACLAUDIO_bootstrap = ;

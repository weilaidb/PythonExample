#if SDL_AUDIO_DRIVER_ALSA
static int (*ALSA_snd_pcm_open)
(snd_pcm_t **, const char *, snd_pcm_stream_t, int);
static int (*ALSA_snd_pcm_close) (snd_pcm_t * pcm);
static snd_pcm_sframes_t (*ALSA_snd_pcm_writei)
(snd_pcm_t *, const void *, snd_pcm_uframes_t);
static snd_pcm_sframes_t (*ALSA_snd_pcm_readi)
(snd_pcm_t *, void *, snd_pcm_uframes_t);
static int (*ALSA_snd_pcm_recover) (snd_pcm_t *, int, int);
static int (*ALSA_snd_pcm_prepare) (snd_pcm_t *);
static int (*ALSA_snd_pcm_drain) (snd_pcm_t *);
static const char *(*ALSA_snd_strerror) (int);
static size_t(*ALSA_snd_pcm_hw_params_sizeof) (void);
static size_t(*ALSA_snd_pcm_sw_params_sizeof) (void);
static void (*ALSA_snd_pcm_hw_params_copy)
(snd_pcm_hw_params_t *, const snd_pcm_hw_params_t *);
static int (*ALSA_snd_pcm_hw_params_any) (snd_pcm_t *, snd_pcm_hw_params_t *);
static int (*ALSA_snd_pcm_hw_params_set_access)
(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_access_t);
static int (*ALSA_snd_pcm_hw_params_set_format)
(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_format_t);
static int (*ALSA_snd_pcm_hw_params_set_channels)
(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int);
static int (*ALSA_snd_pcm_hw_params_get_channels)
(const snd_pcm_hw_params_t *, unsigned int *);
static int (*ALSA_snd_pcm_hw_params_set_rate_near)
(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
static int (*ALSA_snd_pcm_hw_params_set_period_size_near)
(snd_pcm_t *, snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
static int (*ALSA_snd_pcm_hw_params_get_period_size)
(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *, int *);
static int (*ALSA_snd_pcm_hw_params_set_periods_near)
(snd_pcm_t *, snd_pcm_hw_params_t *, unsigned int *, int *);
static int (*ALSA_snd_pcm_hw_params_get_periods)
(const snd_pcm_hw_params_t *, unsigned int *, int *);
static int (*ALSA_snd_pcm_hw_params_set_buffer_size_near)
(snd_pcm_t *pcm, snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
static int (*ALSA_snd_pcm_hw_params_get_buffer_size)
(const snd_pcm_hw_params_t *, snd_pcm_uframes_t *);
static int (*ALSA_snd_pcm_hw_params) (snd_pcm_t *, snd_pcm_hw_params_t *);
static int (*ALSA_snd_pcm_sw_params_current) (snd_pcm_t *,
snd_pcm_sw_params_t *);
static int (*ALSA_snd_pcm_sw_params_set_start_threshold)
(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
static int (*ALSA_snd_pcm_sw_params) (snd_pcm_t *, snd_pcm_sw_params_t *);
static int (*ALSA_snd_pcm_nonblock) (snd_pcm_t *, int);
static int (*ALSA_snd_pcm_wait)(snd_pcm_t *, int);
static int (*ALSA_snd_pcm_sw_params_set_avail_min)
(snd_pcm_t *, snd_pcm_sw_params_t *, snd_pcm_uframes_t);
static int (*ALSA_snd_pcm_reset)(snd_pcm_t *);
static int (*ALSA_snd_device_name_hint) (int, const char *, void ***);
static char* (*ALSA_snd_device_name_get_hint) (const void *, const char *);
static int (*ALSA_snd_device_name_free_hint) (void **);
#define snd_pcm_hw_params_sizeof ALSA_snd_pcm_hw_params_sizeof
#define snd_pcm_sw_params_sizeof ALSA_snd_pcm_sw_params_sizeof
static const char *alsa_library = SDL_AUDIO_DRIVER_ALSA_DYNAMIC;
static void *alsa_handle = NULL;
static int
load_alsa_sym(const char *fn, void **addr)
#define SDL_ALSA_SYM(x) \
if (!load_alsa_sym(#x, (void **) (char *) &ALSA_##x)) return -1
#define SDL_ALSA_SYM(x) ALSA_##x = x
static int
load_alsa_syms(void)
#undef SDL_ALSA_SYM
static void
UnloadALSALibrary(void)
static int
LoadALSALibrary(void)
static void
UnloadALSALibrary(void)
static int
LoadALSALibrary(void)
static const char *
get_audio_device(void *handle, const int channels)
static void
ALSA_WaitDevice(_THIS)
#define SWIZ6(T, buf, numframes) \
T *ptr = (T *) buf; \
Uint32 i; \
for (i = 0; i < numframes; i++, ptr += 6)
static SDL_INLINE void
swizzle_alsa_channels_6_64bit(void *buffer, Uint32 bufferlen)
static SDL_INLINE void
swizzle_alsa_channels_6_32bit(void *buffer, Uint32 bufferlen)
static SDL_INLINE void
swizzle_alsa_channels_6_16bit(void *buffer, Uint32 bufferlen)
static SDL_INLINE void
swizzle_alsa_channels_6_8bit(void *buffer, Uint32 bufferlen)
#undef SWIZ6
static SDL_INLINE void
swizzle_alsa_channels(_THIS, void *buffer, Uint32 bufferlen)
static void
ALSA_PlayDevice(_THIS)
static Uint8 *
ALSA_GetDeviceBuf(_THIS)
static int
ALSA_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
ALSA_FlushCapture(_THIS)
static void
ALSA_CloseDevice(_THIS)
static int
ALSA_finalize_hardware(_THIS, snd_pcm_hw_params_t *hwparams, int override)
static int
ALSA_set_period_size(_THIS, snd_pcm_hw_params_t *params, int override)
static int
ALSA_set_buffer_size(_THIS, snd_pcm_hw_params_t *params, int override)
static int
ALSA_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
typedef struct ALSA_Device
ALSA_Device;
static void
add_device(const int iscapture, const char *name, void *hint, ALSA_Device **pSeen)
static SDL_atomic_t ALSA_hotplug_shutdown;
static SDL_Thread *ALSA_hotplug_thread;
static int SDLCALL
ALSA_HotplugThread(void *arg)
static void
ALSA_DetectDevices(void)
static void
ALSA_Deinitialize(void)
static int
ALSA_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap ALSA_bootstrap = ;

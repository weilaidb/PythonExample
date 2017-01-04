#if SDL_AUDIO_DRIVER_QSA
#define DEFAULT_CPARAMS_RATE   44100
#define DEFAULT_CPARAMS_VOICES 1
#define DEFAULT_CPARAMS_FRAG_SIZE 4096
#define DEFAULT_CPARAMS_FRAGS_MIN 1
#define DEFAULT_CPARAMS_FRAGS_MAX 1
#define QSA_NO_WORKAROUNDS  0x00000000
#define QSA_MMAP_WORKAROUND 0x00000001
struct BuggyCards
;
#define QSA_WA_CARDS             3
#define QSA_MAX_CARD_NAME_LENGTH 33
struct BuggyCards buggycards[QSA_WA_CARDS] = ;
#define QSA_MAX_DEVICES       32
#define QSA_MAX_NAME_LENGTH   81+16
typedef struct _QSA_Device
QSA_Device;
QSA_Device qsa_playback_device[QSA_MAX_DEVICES];
uint32_t qsa_playback_devices;
QSA_Device qsa_capture_device[QSA_MAX_DEVICES];
uint32_t qsa_capture_devices;
static SDL_INLINE int
QSA_SetError(const char *fn, int status)
static int
QSA_CheckBuggyCards(_THIS, unsigned long checkfor)
static void
QSA_ThreadInit(_THIS)
static void
QSA_InitAudioParams(snd_pcm_channel_params_t * cpars)
static void
QSA_WaitDevice(_THIS)
static void
QSA_PlayDevice(_THIS)
static Uint8 *
QSA_GetDeviceBuf(_THIS)
static void
QSA_CloseDevice(_THIS)
static int
QSA_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
QSA_DetectDevices(void)
static void
QSA_Deinitialize(void)
static int
QSA_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap QSAAUDIO_bootstrap = ;

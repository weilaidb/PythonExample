#if SDL_AUDIO_DRIVER_FUSIONSOUND
#define SDL_NAME(X) X
#if (FUSIONSOUND_MAJOR_VERSION == 1) && (FUSIONSOUND_MINOR_VERSION < 1)
typedef DFBResult DirectResult;
#define FUSION_BUFFERS              (2)
static const char *fs_library = SDL_AUDIO_DRIVER_FUSIONSOUND_DYNAMIC;
static void *fs_handle = NULL;
static DirectResult (*SDL_NAME(FusionSoundInit)) (int *argc, char *(*argv[]));
static DirectResult (*SDL_NAME(FusionSoundCreate)) (IFusionSound **
ret_interface);
#define SDL_FS_SYM(x)
static struct
fs_functions[] = ;
#undef SDL_FS_SYM
static void
UnloadFusionSoundLibrary()
static int
LoadFusionSoundLibrary(void)
static void
UnloadFusionSoundLibrary()
static int
LoadFusionSoundLibrary(void)
static void
SDL_FS_WaitDevice(_THIS)
static void
SDL_FS_PlayDevice(_THIS)
static Uint8 *
SDL_FS_GetDeviceBuf(_THIS)
static void
SDL_FS_CloseDevice(_THIS)
static int
SDL_FS_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
SDL_FS_Deinitialize(void)
static int
SDL_FS_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap FUSIONSOUND_bootstrap = ;

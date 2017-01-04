#if defined(__WIN32__)
#if !SDL_TIMERS_DISABLED
extern int SDL_TimerInit(void);
extern void SDL_TimerQuit(void);
extern void SDL_TicksInit(void);
extern void SDL_TicksQuit(void);
#if SDL_VIDEO_DRIVER_WINDOWS
extern int SDL_HelperWindowCreate(void);
extern int SDL_HelperWindowDestroy(void);
static SDL_bool SDL_MainIsReady = SDL_FALSE;
static SDL_bool SDL_MainIsReady = SDL_TRUE;
static SDL_bool SDL_bInMainQuit = SDL_FALSE;
static Uint8 SDL_SubsystemRefCount[ 32 ];
static void
SDL_PrivateSubsystemRefCountIncr(Uint32 subsystem)
static void
SDL_PrivateSubsystemRefCountDecr(Uint32 subsystem)
static SDL_bool
SDL_PrivateShouldInitSubsystem(Uint32 subsystem)
static SDL_bool
SDL_PrivateShouldQuitSubsystem(Uint32 subsystem)
void
SDL_SetMainReady(void)
int
SDL_InitSubSystem(Uint32 flags)
int
SDL_Init(Uint32 flags)
void
SDL_QuitSubSystem(Uint32 flags)
Uint32
SDL_WasInit(Uint32 flags)
void
SDL_Quit(void)
void
SDL_GetVersion(SDL_version * ver)
const char *
SDL_GetRevision(void)
int
SDL_GetRevisionNumber(void)
const char *
SDL_GetPlatform()
#if defined(__WIN32__)
#if !defined(HAVE_LIBC) || (defined(__WATCOMC__) && defined(BUILD_DLL))
BOOL APIENTRY
_DllMainCRTStartup(HANDLE hModule,
DWORD ul_reason_for_call, LPVOID lpReserved)

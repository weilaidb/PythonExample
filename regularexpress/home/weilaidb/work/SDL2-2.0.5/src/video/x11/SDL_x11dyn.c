#if SDL_VIDEO_DRIVER_X11
#define DEBUG_DYNAMIC_X11 0
#if DEBUG_DYNAMIC_X11
typedef struct
x11dynlib;
#define SDL_VIDEO_DRIVER_X11_DYNAMIC NULL
#define SDL_VIDEO_DRIVER_X11_DYNAMIC_XEXT NULL
#define SDL_VIDEO_DRIVER_X11_DYNAMIC_XCURSOR NULL
#define SDL_VIDEO_DRIVER_X11_DYNAMIC_XINERAMA NULL
#define SDL_VIDEO_DRIVER_X11_DYNAMIC_XINPUT2 NULL
#define SDL_VIDEO_DRIVER_X11_DYNAMIC_XRANDR NULL
#define SDL_VIDEO_DRIVER_X11_DYNAMIC_XSS NULL
#define SDL_VIDEO_DRIVER_X11_DYNAMIC_XVIDMODE NULL
static x11dynlib x11libs[] = ;
static void *
X11_GetSym(const char *fnname, int *pHasModule)
#define SDL_X11_SYM(rc,fn,params,args,ret) SDL_DYNX11FN_##fn X11_##fn = NULL;
SDL_DYNX11FN_XCreateIC X11_XCreateIC = NULL;
SDL_DYNX11FN_XGetICValues X11_XGetICValues = NULL;
#define SDL_X11_MODULE(modname) int SDL_X11_HAVE_##modname = 0;
static int x11_load_refcount = 0;
void
SDL_X11_UnloadSymbols(void)
int
SDL_X11_LoadSymbols(void)

#if SDL_VIDEO_DRIVER_WAYLAND
#define DEBUG_DYNAMIC_WAYLAND 0
#if DEBUG_DYNAMIC_WAYLAND
typedef struct
waylanddynlib;
#define SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC NULL
#define SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC_EGL NULL
#define SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC_CURSOR NULL
#define SDL_VIDEO_DRIVER_WAYLAND_DYNAMIC_XKBCOMMON NULL
static waylanddynlib waylandlibs[] = ;
static void *
WAYLAND_GetSym(const char *fnname, int *pHasModule)
#define SDL_WAYLAND_MODULE(modname) int SDL_WAYLAND_HAVE_##modname = 0;
#define SDL_WAYLAND_SYM(rc,fn,params) SDL_DYNWAYLANDFN_##fn WAYLAND_##fn = NULL;
#define SDL_WAYLAND_INTERFACE(iface) const struct wl_interface *WAYLAND_##iface = NULL;
static int wayland_load_refcount = 0;
void
SDL_WAYLAND_UnloadSymbols(void)
int
SDL_WAYLAND_LoadSymbols(void)

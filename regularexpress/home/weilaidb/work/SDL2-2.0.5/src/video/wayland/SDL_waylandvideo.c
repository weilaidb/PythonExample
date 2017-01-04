#if SDL_VIDEO_DRIVER_WAYLAND
#define WAYLANDVID_DRIVER_NAME "wayland"
static int
Wayland_VideoInit(_THIS);
static void
Wayland_GetDisplayModes(_THIS, SDL_VideoDisplay *sdl_display);
static int
Wayland_SetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode);
static void
Wayland_VideoQuit(_THIS);
static char *
get_classname()
static int
Wayland_Available(void)
static void
Wayland_DeleteDevice(SDL_VideoDevice *device)
static SDL_VideoDevice *
Wayland_CreateDevice(int devindex)
VideoBootStrap Wayland_bootstrap = ;
static void
display_handle_geometry(void *data,
struct wl_output *output,
int x, int y,
int physical_width,
int physical_height,
int subpixel,
const char *make,
const char *model,
int transform)
static void
display_handle_mode(void *data,
struct wl_output *output,
uint32_t flags,
int width,
int height,
int refresh)
static void
display_handle_done(void *data,
struct wl_output *output)
static void
display_handle_scale(void *data,
struct wl_output *output,
int32_t factor)
static const struct wl_output_listener output_listener = ;
static void
Wayland_add_display(SDL_VideoData *d, uint32_t id)
static void
windowmanager_hints(void *data, struct qt_windowmanager *qt_windowmanager,
int32_t show_is_fullscreen)
static void
windowmanager_quit(void *data, struct qt_windowmanager *qt_windowmanager)
static const struct qt_windowmanager_listener windowmanager_listener = ;
static void
display_handle_global(void *data, struct wl_registry *registry, uint32_t id,
const char *interface, uint32_t version)
static const struct wl_registry_listener registry_listener = ;
int
Wayland_VideoInit(_THIS)
static void
Wayland_GetDisplayModes(_THIS, SDL_VideoDisplay *sdl_display)
static int
Wayland_SetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)
void
Wayland_VideoQuit(_THIS)

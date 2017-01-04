#if SDL_VIDEO_DRIVER_WAYLAND && SDL_VIDEO_OPENGL_EGL
static void
handle_ping(void *data, struct wl_shell_surface *shell_surface,
uint32_t serial)
static void
handle_configure(void *data, struct wl_shell_surface *shell_surface,
uint32_t edges, int32_t width, int32_t height)
static void
handle_popup_done(void *data, struct wl_shell_surface *shell_surface)
static const struct wl_shell_surface_listener shell_surface_listener = ;
static void
handle_onscreen_visibility(void *data,
struct qt_extended_surface *qt_extended_surface, int32_t visible)
static void
handle_set_generic_property(void *data,
struct qt_extended_surface *qt_extended_surface, const char *name,
struct wl_array *value)
static void
handle_close(void *data, struct qt_extended_surface *qt_extended_surface)
static const struct qt_extended_surface_listener extended_surface_listener = ;
SDL_bool
Wayland_GetWindowWMInfo(_THIS, SDL_Window * window, SDL_SysWMinfo * info)
int
Wayland_SetWindowHitTest(SDL_Window *window, SDL_bool enabled)
void Wayland_ShowWindow(_THIS, SDL_Window *window)
void
Wayland_SetWindowFullscreen(_THIS, SDL_Window * window,
SDL_VideoDisplay * _display, SDL_bool fullscreen)
void
Wayland_RestoreWindow(_THIS, SDL_Window * window)
void
Wayland_MaximizeWindow(_THIS, SDL_Window * window)
int Wayland_CreateWindow(_THIS, SDL_Window *window)
void Wayland_SetWindowSize(_THIS, SDL_Window * window)
void Wayland_SetWindowTitle(_THIS, SDL_Window * window)
void Wayland_DestroyWindow(_THIS, SDL_Window *window)

struct SDL_WaylandTouch ;
enum QtWaylandTouchPointState ;
static void
touch_handle_touch(void *data,
struct qt_touch_extension *qt_touch_extension,
uint32_t time,
uint32_t id,
uint32_t state,
int32_t x,
int32_t y,
int32_t normalized_x,
int32_t normalized_y,
int32_t width,
int32_t height,
uint32_t pressure,
int32_t velocity_x,
int32_t velocity_y,
uint32_t flags,
struct wl_array *rawdata)
static void
touch_handle_configure(void *data,
struct qt_touch_extension *qt_touch_extension,
uint32_t flags)
static const struct qt_touch_extension_listener touch_listener = ;
static const struct wl_interface *qt_touch_extension_types[] = ;
static const struct wl_message qt_touch_extension_requests[] = ;
static const struct wl_message qt_touch_extension_events[] = ;
WL_EXPORT const struct wl_interface qt_touch_extension_interface = ;
static const struct wl_interface *qt_windowmanager_types[] = ;
static const struct wl_message qt_windowmanager_requests[] = ;
static const struct wl_message qt_windowmanager_events[] = ;
WL_EXPORT const struct wl_interface qt_windowmanager_interface = ;
extern const struct wl_interface qt_extended_surface_interface;
extern const struct wl_interface wl_surface_interface;
static const struct wl_interface *qt_surface_extension_types[] = ;
static const struct wl_message qt_surface_extension_requests[] = ;
WL_EXPORT const struct wl_interface qt_surface_extension_interface = ;
static const struct wl_message qt_extended_surface_requests[] = ;
static const struct wl_message qt_extended_surface_events[] = ;
WL_EXPORT const struct wl_interface qt_extended_surface_interface = ;
void
Wayland_touch_create(SDL_VideoData *data, uint32_t id)
void
Wayland_touch_destroy(SDL_VideoData *data)

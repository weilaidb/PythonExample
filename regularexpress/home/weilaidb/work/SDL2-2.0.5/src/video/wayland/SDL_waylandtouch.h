#define _SDL_waylandtouch_h
void Wayland_touch_create(SDL_VideoData *data, uint32_t id);
void Wayland_touch_destroy(SDL_VideoData *data);
struct qt_touch_extension;
struct wl_client;
struct wl_resource;
struct qt_surface_extension;
struct qt_extended_surface;
extern const struct wl_interface qt_surface_extension_interface;
extern const struct wl_interface qt_extended_surface_interface;
#define QT_SURFACE_EXTENSION_GET_EXTENDED_SURFACE   0
static inline void
qt_surface_extension_set_user_data(struct qt_surface_extension *qt_surface_extension, void *user_data)
static inline void *
qt_surface_extension_get_user_data(struct qt_surface_extension *qt_surface_extension)
static inline void
qt_surface_extension_destroy(struct qt_surface_extension *qt_surface_extension)
static inline struct qt_extended_surface *
qt_surface_extension_get_extended_surface(struct qt_surface_extension *qt_surface_extension, struct wl_surface *surface)
#define QT_EXTENDED_SURFACE_ORIENTATION_ENUM
enum qt_extended_surface_orientation ;
#define QT_EXTENDED_SURFACE_WINDOWFLAG_ENUM
enum qt_extended_surface_windowflag ;
struct qt_extended_surface_listener ;
static inline int
qt_extended_surface_add_listener(struct qt_extended_surface *qt_extended_surface,
const struct qt_extended_surface_listener *listener, void *data)
#define QT_EXTENDED_SURFACE_UPDATE_GENERIC_PROPERTY 0
#define QT_EXTENDED_SURFACE_SET_CONTENT_ORIENTATION 1
#define QT_EXTENDED_SURFACE_SET_WINDOW_FLAGS    2
static inline void
qt_extended_surface_set_user_data(struct qt_extended_surface *qt_extended_surface, void *user_data)
static inline void *
qt_extended_surface_get_user_data(struct qt_extended_surface *qt_extended_surface)
static inline void
qt_extended_surface_destroy(struct qt_extended_surface *qt_extended_surface)
static inline void
qt_extended_surface_update_generic_property(struct qt_extended_surface *qt_extended_surface, const char *name, struct wl_array *value)
static inline void
qt_extended_surface_set_content_orientation(struct qt_extended_surface *qt_extended_surface, int32_t orientation)
static inline void
qt_extended_surface_set_window_flags(struct qt_extended_surface *qt_extended_surface, int32_t flags)
extern const struct wl_interface qt_touch_extension_interface;
#define QT_TOUCH_EXTENSION_FLAGS_ENUM
enum qt_touch_extension_flags ;
struct qt_touch_extension_listener ;
static inline int
qt_touch_extension_add_listener(struct qt_touch_extension *qt_touch_extension,
const struct qt_touch_extension_listener *listener, void *data)
#define QT_TOUCH_EXTENSION_DUMMY    0
static inline void
qt_touch_extension_set_user_data(struct qt_touch_extension *qt_touch_extension, void *user_data)
static inline void *
qt_touch_extension_get_user_data(struct qt_touch_extension *qt_touch_extension)
static inline void
qt_touch_extension_destroy(struct qt_touch_extension *qt_touch_extension)
static inline void
qt_touch_extension_dummy(struct qt_touch_extension *qt_touch_extension)
extern const struct wl_interface qt_windowmanager_interface;
struct qt_windowmanager_listener ;
static inline int
qt_windowmanager_add_listener(struct qt_windowmanager *qt_windowmanager,
const struct qt_windowmanager_listener *listener, void *data)
#define QT_WINDOWMANAGER_OPEN_URL   0
static inline void
qt_windowmanager_set_user_data(struct qt_windowmanager *qt_windowmanager, void *user_data)
static inline void *
qt_windowmanager_get_user_data(struct qt_windowmanager *qt_windowmanager)
static inline void
qt_windowmanager_destroy(struct qt_windowmanager *qt_windowmanager)
static inline void
qt_windowmanager_open_url(struct qt_windowmanager *qt_windowmanager, uint32_t remaining, const char *url)

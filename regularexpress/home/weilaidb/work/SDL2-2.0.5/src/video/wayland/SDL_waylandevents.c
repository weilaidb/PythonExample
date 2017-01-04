#if SDL_VIDEO_DRIVER_WAYLAND
struct SDL_WaylandInput ;
void
Wayland_PumpEvents(_THIS)
static void
pointer_handle_enter(void *data, struct wl_pointer *pointer,
uint32_t serial, struct wl_surface *surface,
wl_fixed_t sx_w, wl_fixed_t sy_w)
static void
pointer_handle_leave(void *data, struct wl_pointer *pointer,
uint32_t serial, struct wl_surface *surface)
static void
pointer_handle_motion(void *data, struct wl_pointer *pointer,
uint32_t time, wl_fixed_t sx_w, wl_fixed_t sy_w)
static SDL_bool
ProcessHitTest(struct SDL_WaylandInput *input, uint32_t serial)
static void
pointer_handle_button_common(struct SDL_WaylandInput *input, uint32_t serial,
uint32_t time, uint32_t button, uint32_t state_w)
static void
pointer_handle_button(void *data, struct wl_pointer *pointer, uint32_t serial,
uint32_t time, uint32_t button, uint32_t state_w)
static void
pointer_handle_axis_common(struct SDL_WaylandInput *input,
uint32_t time, uint32_t axis, wl_fixed_t value)
static void
pointer_handle_axis(void *data, struct wl_pointer *pointer,
uint32_t time, uint32_t axis, wl_fixed_t value)
static const struct wl_pointer_listener pointer_listener = ;
static void
keyboard_handle_keymap(void *data, struct wl_keyboard *keyboard,
uint32_t format, int fd, uint32_t size)
static void
keyboard_handle_enter(void *data, struct wl_keyboard *keyboard,
uint32_t serial, struct wl_surface *surface,
struct wl_array *keys)
static void
keyboard_handle_leave(void *data, struct wl_keyboard *keyboard,
uint32_t serial, struct wl_surface *surface)
static void
keyboard_handle_key(void *data, struct wl_keyboard *keyboard,
uint32_t serial, uint32_t time, uint32_t key,
uint32_t state_w)
static void
keyboard_handle_modifiers(void *data, struct wl_keyboard *keyboard,
uint32_t serial, uint32_t mods_depressed,
uint32_t mods_latched, uint32_t mods_locked,
uint32_t group)
static const struct wl_keyboard_listener keyboard_listener = ;
static void
seat_handle_capabilities(void *data, struct wl_seat *seat,
enum wl_seat_capability caps)
static const struct wl_seat_listener seat_listener = ;
void
Wayland_display_add_input(SDL_VideoData *d, uint32_t id)
void Wayland_display_destroy_input(SDL_VideoData *d)
void Wayland_display_add_relative_pointer_manager(SDL_VideoData *d, uint32_t id)
void Wayland_display_destroy_relative_pointer_manager(SDL_VideoData *d)
void Wayland_display_add_pointer_constraints(SDL_VideoData *d, uint32_t id)
void Wayland_display_destroy_pointer_constraints(SDL_VideoData *d)
static void
relative_pointer_handle_relative_motion(void *data,
struct zwp_relative_pointer_v1 *pointer,
uint32_t time_hi,
uint32_t time_lo,
wl_fixed_t dx_w,
wl_fixed_t dy_w,
wl_fixed_t dx_unaccel_w,
wl_fixed_t dy_unaccel_w)
static const struct zwp_relative_pointer_v1_listener relative_pointer_listener = ;
static void
locked_pointer_locked(void *data,
struct zwp_locked_pointer_v1 *locked_pointer)
static void
locked_pointer_unlocked(void *data,
struct zwp_locked_pointer_v1 *locked_pointer)
static const struct zwp_locked_pointer_v1_listener locked_pointer_listener = ;
static void
lock_pointer_to_window(SDL_Window *window,
struct SDL_WaylandInput *input)
int Wayland_input_lock_pointer(struct SDL_WaylandInput *input)
int Wayland_input_unlock_pointer(struct SDL_WaylandInput *input)

#define _SDL_waylanddyn_h
struct wl_interface;
struct wl_proxy;
struct wl_event_queue;
struct wl_display;
struct wl_surface;
struct wl_shm;
int SDL_WAYLAND_LoadSymbols(void);
void SDL_WAYLAND_UnloadSymbols(void);
#define SDL_WAYLAND_MODULE(modname) extern int SDL_WAYLAND_HAVE_##modname;
#define SDL_WAYLAND_SYM(rc,fn,params) \
typedef rc (*SDL_DYNWAYLANDFN_##fn) params; \
extern SDL_DYNWAYLANDFN_##fn WAYLAND_##fn;
#define SDL_WAYLAND_INTERFACE(iface) extern const struct wl_interface *WAYLAND_##iface;
#error Do not include wayland-client ahead of SDL_waylanddyn.h in dynamic loading mode
#define wl_proxy_create (*WAYLAND_wl_proxy_create)
#define wl_proxy_destroy (*WAYLAND_wl_proxy_destroy)
#define wl_proxy_marshal (*WAYLAND_wl_proxy_marshal)
#define wl_proxy_set_user_data (*WAYLAND_wl_proxy_set_user_data)
#define wl_proxy_get_user_data (*WAYLAND_wl_proxy_get_user_data)
#define wl_proxy_add_listener (*WAYLAND_wl_proxy_add_listener)
#define wl_proxy_marshal_constructor (*WAYLAND_wl_proxy_marshal_constructor)
#define wl_proxy_marshal_constructor_versioned (*WAYLAND_wl_proxy_marshal_constructor_versioned)
#define wl_seat_interface (*WAYLAND_wl_seat_interface)
#define wl_surface_interface (*WAYLAND_wl_surface_interface)
#define wl_shm_pool_interface (*WAYLAND_wl_shm_pool_interface)
#define wl_buffer_interface (*WAYLAND_wl_buffer_interface)
#define wl_registry_interface (*WAYLAND_wl_registry_interface)
#define wl_shell_surface_interface (*WAYLAND_wl_shell_surface_interface)
#define wl_region_interface (*WAYLAND_wl_region_interface)
#define wl_pointer_interface (*WAYLAND_wl_pointer_interface)
#define wl_keyboard_interface (*WAYLAND_wl_keyboard_interface)
#define wl_compositor_interface (*WAYLAND_wl_compositor_interface)
#define wl_output_interface (*WAYLAND_wl_output_interface)
#define wl_shell_interface (*WAYLAND_wl_shell_interface)
#define wl_shm_interface (*WAYLAND_wl_shm_interface)

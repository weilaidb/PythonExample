#define _SDL_waylandevents_h
extern void Wayland_PumpEvents(_THIS);
extern void Wayland_display_add_input(SDL_VideoData *d, uint32_t id);
extern void Wayland_display_destroy_input(SDL_VideoData *d);
extern void Wayland_display_add_pointer_constraints(SDL_VideoData *d, uint32_t id);
extern void Wayland_display_destroy_pointer_constraints(SDL_VideoData *d);
extern int Wayland_input_lock_pointer(struct SDL_WaylandInput *input);
extern int Wayland_input_unlock_pointer(struct SDL_WaylandInput *input);
extern void Wayland_display_add_relative_pointer_manager(SDL_VideoData *d, uint32_t id);
extern void Wayland_display_destroy_relative_pointer_manager(SDL_VideoData *d);

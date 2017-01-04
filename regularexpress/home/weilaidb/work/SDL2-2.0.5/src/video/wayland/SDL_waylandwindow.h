#define _SDL_waylandwindow_h
struct SDL_WaylandInput;
typedef struct  SDL_WindowData;
extern void Wayland_ShowWindow(_THIS, SDL_Window *window);
extern void Wayland_SetWindowFullscreen(_THIS, SDL_Window * window,
SDL_VideoDisplay * _display,
SDL_bool fullscreen);
extern void Wayland_MaximizeWindow(_THIS, SDL_Window * window);
extern void Wayland_RestoreWindow(_THIS, SDL_Window * window);
extern int Wayland_CreateWindow(_THIS, SDL_Window *window);
extern void Wayland_SetWindowSize(_THIS, SDL_Window * window);
extern void Wayland_SetWindowTitle(_THIS, SDL_Window * window);
extern void Wayland_DestroyWindow(_THIS, SDL_Window *window);
extern SDL_bool
Wayland_GetWindowWMInfo(_THIS, SDL_Window * window, SDL_SysWMinfo * info);
extern int Wayland_SetWindowHitTest(SDL_Window *window, SDL_bool enabled);

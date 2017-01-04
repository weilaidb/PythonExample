#define _SDL_windowswindow_h
#if SDL_VIDEO_OPENGL_EGL
typedef struct
SDL_WindowData;
extern int WIN_CreateWindow(_THIS, SDL_Window * window);
extern int WIN_CreateWindowFrom(_THIS, SDL_Window * window, const void *data);
extern void WIN_SetWindowTitle(_THIS, SDL_Window * window);
extern void WIN_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon);
extern void WIN_SetWindowPosition(_THIS, SDL_Window * window);
extern void WIN_SetWindowSize(_THIS, SDL_Window * window);
extern int WIN_SetWindowOpacity(_THIS, SDL_Window * window, float opacity);
extern void WIN_ShowWindow(_THIS, SDL_Window * window);
extern void WIN_HideWindow(_THIS, SDL_Window * window);
extern void WIN_RaiseWindow(_THIS, SDL_Window * window);
extern void WIN_MaximizeWindow(_THIS, SDL_Window * window);
extern void WIN_MinimizeWindow(_THIS, SDL_Window * window);
extern void WIN_RestoreWindow(_THIS, SDL_Window * window);
extern void WIN_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered);
extern void WIN_SetWindowResizable(_THIS, SDL_Window * window, SDL_bool resizable);
extern void WIN_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen);
extern int WIN_SetWindowGammaRamp(_THIS, SDL_Window * window, const Uint16 * ramp);
extern int WIN_GetWindowGammaRamp(_THIS, SDL_Window * window, Uint16 * ramp);
extern void WIN_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed);
extern void WIN_DestroyWindow(_THIS, SDL_Window * window);
extern SDL_bool WIN_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info);
extern void WIN_OnWindowEnter(_THIS, SDL_Window * window);
extern void WIN_UpdateClipCursor(SDL_Window *window);
extern int WIN_SetWindowHitTest(SDL_Window *window, SDL_bool enabled);

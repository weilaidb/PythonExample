#define SDL_BWINDOW_H
extern int BE_CreateWindow(_THIS, SDL_Window *window);
extern int BE_CreateWindowFrom(_THIS, SDL_Window * window, const void *data);
extern void BE_SetWindowTitle(_THIS, SDL_Window * window);
extern void BE_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon);
extern void BE_SetWindowPosition(_THIS, SDL_Window * window);
extern void BE_SetWindowSize(_THIS, SDL_Window * window);
extern void BE_ShowWindow(_THIS, SDL_Window * window);
extern void BE_HideWindow(_THIS, SDL_Window * window);
extern void BE_RaiseWindow(_THIS, SDL_Window * window);
extern void BE_MaximizeWindow(_THIS, SDL_Window * window);
extern void BE_MinimizeWindow(_THIS, SDL_Window * window);
extern void BE_RestoreWindow(_THIS, SDL_Window * window);
extern void BE_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered);
extern void BE_SetWindowResizable(_THIS, SDL_Window * window, SDL_bool resizable);
extern void BE_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen);
extern int BE_SetWindowGammaRamp(_THIS, SDL_Window * window, const Uint16 * ramp);
extern int BE_GetWindowGammaRamp(_THIS, SDL_Window * window, Uint16 * ramp);
extern void BE_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed);
extern void BE_DestroyWindow(_THIS, SDL_Window * window);
extern SDL_bool BE_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info);

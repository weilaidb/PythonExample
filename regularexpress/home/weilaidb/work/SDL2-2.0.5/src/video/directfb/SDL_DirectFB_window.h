#define _SDL_directfb_window_h
#define SDL_DFB_WINDOWDATA(win)  DFB_WindowData *windata = ((win) ? (DFB_WindowData *) ((win)->driverdata) : NULL)
typedef struct _DFB_WindowData DFB_WindowData;
struct _DFB_WindowData
;
extern int DirectFB_CreateWindow(_THIS, SDL_Window * window);
extern int DirectFB_CreateWindowFrom(_THIS, SDL_Window * window,
const void *data);
extern void DirectFB_SetWindowTitle(_THIS, SDL_Window * window);
extern void DirectFB_SetWindowIcon(_THIS, SDL_Window * window,
SDL_Surface * icon);
extern void DirectFB_SetWindowPosition(_THIS, SDL_Window * window);
extern void DirectFB_SetWindowSize(_THIS, SDL_Window * window);
extern void DirectFB_ShowWindow(_THIS, SDL_Window * window);
extern void DirectFB_HideWindow(_THIS, SDL_Window * window);
extern void DirectFB_RaiseWindow(_THIS, SDL_Window * window);
extern void DirectFB_MaximizeWindow(_THIS, SDL_Window * window);
extern void DirectFB_MinimizeWindow(_THIS, SDL_Window * window);
extern void DirectFB_RestoreWindow(_THIS, SDL_Window * window);
extern void DirectFB_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed);
extern void DirectFB_DestroyWindow(_THIS, SDL_Window * window);
extern SDL_bool DirectFB_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info);
extern void DirectFB_AdjustWindowSurface(SDL_Window * window);
extern int DirectFB_SetWindowOpacity(_THIS, SDL_Window * window, float opacity);

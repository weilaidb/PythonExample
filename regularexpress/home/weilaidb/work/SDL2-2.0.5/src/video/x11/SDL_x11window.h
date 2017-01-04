#define _SDL_x11window_h
#define PENDING_FOCUS_TIME   200
#if SDL_VIDEO_OPENGL_EGL
typedef enum
PendingFocusEnum;
typedef struct
SDL_WindowData;
extern void X11_SetNetWMState(_THIS, Window xwindow, Uint32 flags);
extern Uint32 X11_GetNetWMState(_THIS, Window xwindow);
extern int X11_CreateWindow(_THIS, SDL_Window * window);
extern int X11_CreateWindowFrom(_THIS, SDL_Window * window, const void *data);
extern char *X11_GetWindowTitle(_THIS, Window xwindow);
extern void X11_SetWindowTitle(_THIS, SDL_Window * window);
extern void X11_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon);
extern void X11_SetWindowPosition(_THIS, SDL_Window * window);
extern void X11_SetWindowMinimumSize(_THIS, SDL_Window * window);
extern void X11_SetWindowMaximumSize(_THIS, SDL_Window * window);
extern int X11_GetWindowBordersSize(_THIS, SDL_Window * window, int *top, int *left, int *bottom, int *right);
extern int X11_SetWindowOpacity(_THIS, SDL_Window * window, float opacity);
extern int X11_SetWindowModalFor(_THIS, SDL_Window * modal_window, SDL_Window * parent_window);
extern int X11_SetWindowInputFocus(_THIS, SDL_Window * window);
extern void X11_SetWindowSize(_THIS, SDL_Window * window);
extern void X11_ShowWindow(_THIS, SDL_Window * window);
extern void X11_HideWindow(_THIS, SDL_Window * window);
extern void X11_RaiseWindow(_THIS, SDL_Window * window);
extern void X11_MaximizeWindow(_THIS, SDL_Window * window);
extern void X11_MinimizeWindow(_THIS, SDL_Window * window);
extern void X11_RestoreWindow(_THIS, SDL_Window * window);
extern void X11_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered);
extern void X11_SetWindowResizable(_THIS, SDL_Window * window, SDL_bool resizable);
extern void X11_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen);
extern int X11_SetWindowGammaRamp(_THIS, SDL_Window * window, const Uint16 * ramp);
extern void X11_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed);
extern void X11_DestroyWindow(_THIS, SDL_Window * window);
extern SDL_bool X11_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info);
extern int X11_SetWindowHitTest(SDL_Window *window, SDL_bool enabled);

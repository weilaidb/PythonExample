#if SDL_VIDEO_DRIVER_X11
#if SDL_VIDEO_OPENGL_EGL
#define _NET_WM_STATE_REMOVE    0l
#define _NET_WM_STATE_ADD       1l
#define _NET_WM_STATE_TOGGLE    2l
static Bool isMapNotify(Display *dpy, XEvent *ev, XPointer win)
static Bool isUnmapNotify(Display *dpy, XEvent *ev, XPointer win)
static SDL_bool
X11_IsWindowLegacyFullscreen(_THIS, SDL_Window * window)
static SDL_bool
X11_IsWindowMapped(_THIS, SDL_Window * window)
void
X11_SetNetWMState(_THIS, Window xwindow, Uint32 flags)
Uint32
X11_GetNetWMState(_THIS, Window xwindow)
static int
SetupWindowData(_THIS, SDL_Window * window, Window w, BOOL created)
static void
SetWindowBordered(Display *display, int screen, Window window, SDL_bool border)
int
X11_CreateWindow(_THIS, SDL_Window * window)
int
X11_CreateWindowFrom(_THIS, SDL_Window * window, const void *data)
char *
X11_GetWindowTitle(_THIS, Window xwindow)
void
X11_SetWindowTitle(_THIS, SDL_Window * window)
void
X11_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon)
void
X11_SetWindowPosition(_THIS, SDL_Window * window)
void
X11_SetWindowMinimumSize(_THIS, SDL_Window * window)
void
X11_SetWindowMaximumSize(_THIS, SDL_Window * window)
void
X11_SetWindowSize(_THIS, SDL_Window * window)
int
X11_GetWindowBordersSize(_THIS, SDL_Window * window, int *top, int *left, int *bottom, int *right)
int
X11_SetWindowOpacity(_THIS, SDL_Window * window, float opacity)
int
X11_SetWindowModalFor(_THIS, SDL_Window * modal_window, SDL_Window * parent_window)
int
X11_SetWindowInputFocus(_THIS, SDL_Window * window)
void
X11_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered)
void
X11_SetWindowResizable(_THIS, SDL_Window * window, SDL_bool resizable)
void
X11_ShowWindow(_THIS, SDL_Window * window)
void
X11_HideWindow(_THIS, SDL_Window * window)
static void
SetWindowActive(_THIS, SDL_Window * window)
void
X11_RaiseWindow(_THIS, SDL_Window * window)
static void
SetWindowMaximized(_THIS, SDL_Window * window, SDL_bool maximized)
void
X11_MaximizeWindow(_THIS, SDL_Window * window)
void
X11_MinimizeWindow(_THIS, SDL_Window * window)
void
X11_RestoreWindow(_THIS, SDL_Window * window)
static void
X11_SetWindowFullscreenViaWM(_THIS, SDL_Window * window, SDL_VideoDisplay * _display, SDL_bool fullscreen)
static void
X11_BeginWindowFullscreenLegacy(_THIS, SDL_Window * window, SDL_VideoDisplay * _display)
static void
X11_EndWindowFullscreenLegacy(_THIS, SDL_Window * window, SDL_VideoDisplay * _display)
void
X11_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * _display, SDL_bool fullscreen)
int
X11_SetWindowGammaRamp(_THIS, SDL_Window * window, const Uint16 * ramp)
void
X11_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed)
void
X11_DestroyWindow(_THIS, SDL_Window * window)
SDL_bool
X11_GetWindowWMInfo(_THIS, SDL_Window * window, SDL_SysWMinfo * info)
int
X11_SetWindowHitTest(SDL_Window *window, SDL_bool enabled)

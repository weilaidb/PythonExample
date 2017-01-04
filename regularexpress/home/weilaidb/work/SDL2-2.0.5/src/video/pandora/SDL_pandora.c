#if SDL_VIDEO_DRIVER_PANDORA
static NativeWindowType hNativeWnd = 0;
static int
PND_available(void)
static void
PND_destroy(SDL_VideoDevice * device)
static SDL_VideoDevice *
PND_create()
VideoBootStrap PND_bootstrap = ;
int
PND_videoinit(_THIS)
void
PND_videoquit(_THIS)
void
PND_getdisplaymodes(_THIS, SDL_VideoDisplay * display)
int
PND_setdisplaymode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
int
PND_createwindow(_THIS, SDL_Window * window)
int
PND_createwindowfrom(_THIS, SDL_Window * window, const void *data)
void
PND_setwindowtitle(_THIS, SDL_Window * window)
void
PND_setwindowicon(_THIS, SDL_Window * window, SDL_Surface * icon)
void
PND_setwindowposition(_THIS, SDL_Window * window)
void
PND_setwindowsize(_THIS, SDL_Window * window)
void
PND_showwindow(_THIS, SDL_Window * window)
void
PND_hidewindow(_THIS, SDL_Window * window)
void
PND_raisewindow(_THIS, SDL_Window * window)
void
PND_maximizewindow(_THIS, SDL_Window * window)
void
PND_minimizewindow(_THIS, SDL_Window * window)
void
PND_restorewindow(_THIS, SDL_Window * window)
void
PND_setwindowgrab(_THIS, SDL_Window * window, SDL_bool grabbed)
void
PND_destroywindow(_THIS, SDL_Window * window)
SDL_bool
PND_getwindowwminfo(_THIS, SDL_Window * window, struct SDL_SysWMinfo *info)
int
PND_gl_loadlibrary(_THIS, const char *path)
void *
PND_gl_getprocaddres(_THIS, const char *proc)
void
PND_gl_unloadlibrary(_THIS)
SDL_GLContext
PND_gl_createcontext(_THIS, SDL_Window * window)
int
PND_gl_makecurrent(_THIS, SDL_Window * window, SDL_GLContext context)
int
PND_gl_setswapinterval(_THIS, int interval)
int
PND_gl_getswapinterval(_THIS)
void
PND_gl_swapwindow(_THIS, SDL_Window * window)
void
PND_gl_deletecontext(_THIS, SDL_GLContext context)

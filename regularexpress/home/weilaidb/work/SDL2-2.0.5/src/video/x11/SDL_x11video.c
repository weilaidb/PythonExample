#if SDL_VIDEO_DRIVER_X11
#if SDL_VIDEO_OPENGL_EGL
static int X11_VideoInit(_THIS);
static void X11_VideoQuit(_THIS);
static char *
get_classname()
static int
X11_Available(void)
static void
X11_DeleteDevice(SDL_VideoDevice * device)
static SDL_bool safety_net_triggered = SDL_FALSE;
static int (*orig_x11_errhandler) (Display *, XErrorEvent *) = NULL;
static int
X11_SafetyNetErrHandler(Display * d, XErrorEvent * e)
static SDL_VideoDevice *
X11_CreateDevice(int devindex)
VideoBootStrap X11_bootstrap = ;
static int (*handler) (Display *, XErrorEvent *) = NULL;
static int
X11_CheckWindowManagerErrorHandler(Display * d, XErrorEvent * e)
static void
X11_CheckWindowManager(_THIS)
int
X11_VideoInit(_THIS)
void
X11_VideoQuit(_THIS)
SDL_bool
X11_UseDirectColorVisuals(void)

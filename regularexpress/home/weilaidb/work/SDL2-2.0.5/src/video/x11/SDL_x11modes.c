#if SDL_VIDEO_DRIVER_X11
static int
get_visualinfo(Display * display, int screen, XVisualInfo * vinfo)
int
X11_GetVisualInfoFromVisual(Display * display, Visual * visual, XVisualInfo * vinfo)
Uint32
X11_GetPixelFormatFromVisualInfo(Display * display, XVisualInfo * vinfo)
int vm_event, vm_error = -1;
#if SDL_VIDEO_DRIVER_X11_XINERAMA
static SDL_bool
CheckXinerama(Display * display, int *major, int *minor)
static SDL_bool xinerama_triggered_error = SDL_FALSE;
static int
X11_XineramaFailed(Display * d, XErrorEvent * e)
#if SDL_VIDEO_DRIVER_X11_XRANDR
static SDL_bool
CheckXRandR(Display * display, int *major, int *minor)
#define XRANDR_ROTATION_LEFT    (1 << 1)
#define XRANDR_ROTATION_RIGHT   (1 << 3)
static int
CalculateXRandRRefreshRate(const XRRModeInfo *info)
static SDL_bool
SetXRandRModeInfo(Display *display, XRRScreenResources *res, RRCrtc crtc,
RRMode modeID, SDL_DisplayMode *mode)
static void
SetXRandRDisplayName(Display *dpy, Atom EDID, char *name, const size_t namelen, RROutput output, const unsigned long widthmm, const unsigned long heightmm)
int
X11_InitModes_XRandR(_THIS)
#if SDL_VIDEO_DRIVER_X11_XVIDMODE
static SDL_bool
CheckVidMode(Display * display, int *major, int *minor)
static
Bool XF86VidModeGetModeInfo(Display * dpy, int scr,
XF86VidModeModeInfo* info)
static int
CalculateXVidModeRefreshRate(const XF86VidModeModeInfo * info)
SDL_bool
SetXVidModeModeInfo(const XF86VidModeModeInfo *info, SDL_DisplayMode *mode)
int
X11_InitModes(_THIS)
void
X11_GetDisplayModes(_THIS, SDL_VideoDisplay * sdl_display)
int
X11_SetDisplayMode(_THIS, SDL_VideoDisplay * sdl_display, SDL_DisplayMode * mode)
void
X11_QuitModes(_THIS)
int
X11_GetDisplayBounds(_THIS, SDL_VideoDisplay * sdl_display, SDL_Rect * rect)
int
X11_GetDisplayDPI(_THIS, SDL_VideoDisplay * sdl_display, float * ddpi, float * hdpi, float * vdpi)
int
X11_GetDisplayUsableBounds(_THIS, SDL_VideoDisplay * sdl_display, SDL_Rect * rect)

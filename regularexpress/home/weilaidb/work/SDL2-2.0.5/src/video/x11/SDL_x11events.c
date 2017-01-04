#if SDL_VIDEO_DRIVER_X11
#define _NET_WM_MOVERESIZE_SIZE_TOPLEFT      0
#define _NET_WM_MOVERESIZE_SIZE_TOP          1
#define _NET_WM_MOVERESIZE_SIZE_TOPRIGHT     2
#define _NET_WM_MOVERESIZE_SIZE_RIGHT        3
#define _NET_WM_MOVERESIZE_SIZE_BOTTOMRIGHT  4
#define _NET_WM_MOVERESIZE_SIZE_BOTTOM       5
#define _NET_WM_MOVERESIZE_SIZE_BOTTOMLEFT   6
#define _NET_WM_MOVERESIZE_SIZE_LEFT         7
#define _NET_WM_MOVERESIZE_MOVE              8
typedef struct  SDL_x11Prop;
static void X11_ReadProperty(SDL_x11Prop *p, Display *disp, Window w, Atom prop)
static Atom X11_PickTarget(Display *disp, Atom list[], int list_count)
static Atom X11_PickTargetFromAtoms(Display *disp, Atom a0, Atom a1, Atom a2)
struct KeyRepeatCheckData
;
static Bool X11_KeyRepeatCheckIfEvent(Display *display, XEvent *chkev,
XPointer arg)
static SDL_bool X11_KeyRepeat(Display *display, XEvent *event)
static SDL_bool
X11_IsWheelEvent(Display * display,XEvent * event,int * xticks,int * yticks)
int X11_URIDecode(char *buf, int len)
static char* X11_URIToLocal(char* uri)
#if SDL_VIDEO_DRIVER_X11_SUPPORTS_GENERIC_EVENTS
static void X11_HandleGenericEvent(SDL_VideoData *videodata,XEvent event)
static unsigned
X11_GetNumLockModifierMask(_THIS)
static void
X11_ReconcileKeyboardState(_THIS)
static void
X11_DispatchFocusIn(_THIS, SDL_WindowData *data)
static void
X11_DispatchFocusOut(_THIS, SDL_WindowData *data)
static void
X11_DispatchMapNotify(SDL_WindowData *data)
static void
X11_DispatchUnmapNotify(SDL_WindowData *data)
static void
InitiateWindowMove(_THIS, const SDL_WindowData *data, const SDL_Point *point)
static void
InitiateWindowResize(_THIS, const SDL_WindowData *data, const SDL_Point *point, int direction)
static SDL_bool
ProcessHitTest(_THIS, const SDL_WindowData *data, const XEvent *xev)
static void
X11_UpdateUserTime(SDL_WindowData *data, const unsigned long latest)
static void
X11_DispatchEvent(_THIS)
static void
X11_HandleFocusChanges(_THIS)
static int
X11_Pending(Display * display)
void
X11_PumpEvents(_THIS)
void
X11_SuspendScreenSaver(_THIS)

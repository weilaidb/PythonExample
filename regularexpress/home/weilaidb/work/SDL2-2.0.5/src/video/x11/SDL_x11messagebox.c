#if SDL_VIDEO_DRIVER_X11
#define SDL_FORK_MESSAGEBOX 1
#define SDL_SET_LOCALE      1
#if SDL_FORK_MESSAGEBOX
#define MAX_BUTTONS             8
#define MAX_TEXT_LINES          32
#define MIN_BUTTON_WIDTH        64
#define MIN_DIALOG_WIDTH        200
#define MIN_DIALOG_HEIGHT       100
static const char g_MessageBoxFontLatin1[] = "-*-*-medium-r-normal--0-120-*-*-p-0-iso8859-1";
static const char g_MessageBoxFont[] = "-*-*-*-*-*-*-*-120-*-*-*-*-*-*";
static const SDL_MessageBoxColor g_default_colors[ SDL_MESSAGEBOX_COLOR_MAX ] = ;
#define SDL_MAKE_RGB( _r, _g, _b )  ( ( ( Uint32 )( _r ) << 16 ) | \
( ( Uint32 )( _g ) << 8 ) |  \
( ( Uint32 )( _b ) ) )
typedef struct SDL_MessageBoxButtonDataX11  SDL_MessageBoxButtonDataX11;
typedef struct TextLineData  TextLineData;
typedef struct SDL_MessageBoxDataX11
SDL_MessageBoxDataX11;
static SDL_INLINE int
IntMax( int a, int b )
static void
GetTextWidthHeight( SDL_MessageBoxDataX11 *data, const char *str, int nbytes, int *pwidth, int *pheight )
static int
GetHitButtonIndex( SDL_MessageBoxDataX11 *data, int x, int y )
static int
X11_MessageBoxInit( SDL_MessageBoxDataX11 *data, const SDL_MessageBoxData * messageboxdata, int * pbuttonid )
static int
X11_MessageBoxInitPositions( SDL_MessageBoxDataX11 *data )
static void
X11_MessageBoxShutdown( SDL_MessageBoxDataX11 *data )
static int
X11_MessageBoxCreateWindow( SDL_MessageBoxDataX11 *data )
{
int x, y;
XSizeHints *sizehints;
XSetWindowAttributes wnd_attr;
Atom _NET_WM_WINDOW_TYPE, _NET_WM_WINDOW_TYPE_DIALOG, _NET_WM_NAME, UTF8_STRING;
Display *display = data->display;
SDL_WindowData *windowdata = NULL;
const SDL_MessageBoxData *messageboxdata = data->messageboxdata;
if ( messageboxdata->window )  else
data->event_mask = ExposureMask |
ButtonPressMask | ButtonReleaseMask | KeyPressMask | KeyReleaseMask |
StructureNotifyMask | FocusChangeMask | PointerMotionMask;
wnd_attr.event_mask = data->event_mask;
data->window = X11_XCreateWindow(
display, RootWindow(display, data->screen),
0, 0,
data->dialog_width, data->dialog_height,
0, CopyFromParent, InputOutput, CopyFromParent,
CWEventMask, &wnd_attr );
if ( data->window == None )
if ( windowdata )
static void
X11_MessageBoxDraw( SDL_MessageBoxDataX11 *data, GC ctx )
static Bool
X11_MessageBoxEventTest(Display *display, XEvent *event, XPointer arg)
static int
X11_MessageBoxLoop( SDL_MessageBoxDataX11 *data )
static int
X11_ShowMessageBoxImpl(const SDL_MessageBoxData *messageboxdata, int *buttonid)
int
X11_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid)

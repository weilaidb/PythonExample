#if SDL_VIDEO_DRIVER_WINDOWS
#define SWP_NOCOPYBITS 0
HWND SDL_HelperWindow = NULL;
static WCHAR *SDL_HelperWindowClassName = TEXT("SDLHelperWindowInputCatcher");
static WCHAR *SDL_HelperWindowName = TEXT("SDLHelperWindowInputMsgWindow");
static ATOM SDL_HelperWindowClass = 0;
#define STYLE_BASIC         (WS_CLIPSIBLINGS | WS_CLIPCHILDREN)
#define STYLE_FULLSCREEN    (WS_POPUP)
#define STYLE_BORDERLESS    (WS_POPUP)
#define STYLE_NORMAL        (WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX)
#define STYLE_RESIZABLE     (WS_THICKFRAME | WS_MAXIMIZEBOX)
#define STYLE_MASK          (STYLE_FULLSCREEN | STYLE_BORDERLESS | STYLE_NORMAL | STYLE_RESIZABLE)
static DWORD
GetWindowStyle(SDL_Window * window)
static void
WIN_SetWindowPositionInternal(_THIS, SDL_Window * window, UINT flags)
static int
SetupWindowData(_THIS, SDL_Window * window, HWND hwnd, SDL_bool created)
int
WIN_CreateWindow(_THIS, SDL_Window * window)
int
WIN_CreateWindowFrom(_THIS, SDL_Window * window, const void *data)
void
WIN_SetWindowTitle(_THIS, SDL_Window * window)
void
WIN_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon)
void
WIN_SetWindowPosition(_THIS, SDL_Window * window)
void
WIN_SetWindowSize(_THIS, SDL_Window * window)
void
WIN_ShowWindow(_THIS, SDL_Window * window)
void
WIN_HideWindow(_THIS, SDL_Window * window)
void
WIN_RaiseWindow(_THIS, SDL_Window * window)
void
WIN_MaximizeWindow(_THIS, SDL_Window * window)
void
WIN_MinimizeWindow(_THIS, SDL_Window * window)
void
WIN_SetWindowBordered(_THIS, SDL_Window * window, SDL_bool bordered)
void
WIN_SetWindowResizable(_THIS, SDL_Window * window, SDL_bool resizable)
void
WIN_RestoreWindow(_THIS, SDL_Window * window)
void
WIN_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen)
int
WIN_SetWindowGammaRamp(_THIS, SDL_Window * window, const Uint16 * ramp)
int
WIN_GetWindowGammaRamp(_THIS, SDL_Window * window, Uint16 * ramp)
void
WIN_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed)
void
WIN_DestroyWindow(_THIS, SDL_Window * window)
SDL_bool
WIN_GetWindowWMInfo(_THIS, SDL_Window * window, SDL_SysWMinfo * info)
int
SDL_HelperWindowCreate(void)
void
SDL_HelperWindowDestroy(void)
void WIN_OnWindowEnter(_THIS, SDL_Window * window)
void
WIN_UpdateClipCursor(SDL_Window *window)
int
WIN_SetWindowHitTest(SDL_Window *window, SDL_bool enabled)
int
WIN_SetWindowOpacity(_THIS, SDL_Window * window, float opacity)

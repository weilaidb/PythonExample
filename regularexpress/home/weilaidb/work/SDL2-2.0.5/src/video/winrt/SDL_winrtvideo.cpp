#if SDL_VIDEO_DRIVER_WINRT
using namespace Windows::ApplicationModel::Core;
using namespace Windows::Foundation;
using namespace Windows::Graphics::Display;
using namespace Windows::UI::Core;
using namespace Windows::UI::ViewManagement;
static const GUID IID_IDisplayRequest   = ;
static const GUID IID_IDXGIFactory2     = ;
extern "C"
static int WINRT_VideoInit(_THIS);
static int WINRT_InitModes(_THIS);
static int WINRT_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
static void WINRT_VideoQuit(_THIS);
static int WINRT_CreateWindow(_THIS, SDL_Window * window);
static void WINRT_SetWindowSize(_THIS, SDL_Window * window);
static void WINRT_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen);
static void WINRT_DestroyWindow(_THIS, SDL_Window * window);
static SDL_bool WINRT_GetWindowWMInfo(_THIS, SDL_Window * window, SDL_SysWMinfo * info);
static ABI::Windows::System::Display::IDisplayRequest * WINRT_CreateDisplayRequest(_THIS);
extern void WINRT_SuspendScreenSaver(_THIS);
SDL_Window * WINRT_GlobalSDLWindow = NULL;
static int
WINRT_Available(void)
static void
WINRT_DeleteDevice(SDL_VideoDevice * device)
static SDL_VideoDevice *
WINRT_CreateDevice(int devindex)
#define WINRTVID_DRIVER_NAME "winrt"
VideoBootStrap WINRT_bootstrap = ;
int
WINRT_VideoInit(_THIS)
extern "C"
Uint32 D3D11_DXGIFormatToSDLPixelFormat(DXGI_FORMAT dxgiFormat);
static void
WINRT_DXGIModeToSDLDisplayMode(const DXGI_MODE_DESC * dxgiMode, SDL_DisplayMode * sdlMode)
static int
WINRT_AddDisplaysForOutput (_THIS, IDXGIAdapter1 * dxgiAdapter1, int outputIndex)
static int
WINRT_AddDisplaysForAdapter (_THIS, IDXGIFactory2 * dxgiFactory2, int adapterIndex)
int
WINRT_InitModes(_THIS)
static int
WINRT_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
void
WINRT_VideoQuit(_THIS)
static const Uint32 WINRT_DetectableFlags =
SDL_WINDOW_MAXIMIZED |
SDL_WINDOW_FULLSCREEN_DESKTOP |
SDL_WINDOW_SHOWN |
SDL_WINDOW_HIDDEN |
SDL_WINDOW_MOUSE_FOCUS;
extern "C" Uint32
WINRT_DetectWindowFlags(SDL_Window * window)
void
WINRT_UpdateWindowFlags(SDL_Window * window, Uint32 mask)
static bool
WINRT_IsCoreWindowActive(CoreWindow ^ coreWindow)
int
WINRT_CreateWindow(_THIS, SDL_Window * window)
void
WINRT_SetWindowSize(_THIS, SDL_Window * window)
void
WINRT_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen)
void
WINRT_DestroyWindow(_THIS, SDL_Window * window)
SDL_bool
WINRT_GetWindowWMInfo(_THIS, SDL_Window * window, SDL_SysWMinfo * info)
static ABI::Windows::System::Display::IDisplayRequest *
WINRT_CreateDisplayRequest(_THIS)
void
WINRT_SuspendScreenSaver(_THIS)

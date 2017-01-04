#if SDL_VIDEO_DRIVER_WINDOWS
static int WIN_VideoInit(_THIS);
static void WIN_VideoQuit(_THIS);
SDL_bool g_WindowsEnableMessageLoop = SDL_TRUE;
SDL_bool g_WindowFrameUsableWhileCursorHidden = SDL_TRUE;
static void UpdateWindowsEnableMessageLoop(void *userdata, const char *name, const char *oldValue, const char *newValue)
static void UpdateWindowFrameUsableWhileCursorHidden(void *userdata, const char *name, const char *oldValue, const char *newValue)
static int
WIN_Available(void)
static void
WIN_DeleteDevice(SDL_VideoDevice * device)
static SDL_VideoDevice *
WIN_CreateDevice(int devindex)
VideoBootStrap WINDOWS_bootstrap = ;
int
WIN_VideoInit(_THIS)
void
WIN_VideoQuit(_THIS)
#define D3D_DEBUG_INFO
SDL_bool
D3D_LoadDLL(void **pD3DDLL, IDirect3D9 **pDirect3D9Interface)
int
SDL_Direct3D9GetAdapterIndex(int displayIndex)
#if HAVE_DXGI_H
#define CINTERFACE
#define COBJMACROS
static SDL_bool
DXGI_LoadDLL(void **pDXGIDLL, IDXGIFactory **pDXGIFactory)
SDL_bool
SDL_DXGIGetOutputInfo(int displayIndex, int *adapterIndex, int *outputIndex)

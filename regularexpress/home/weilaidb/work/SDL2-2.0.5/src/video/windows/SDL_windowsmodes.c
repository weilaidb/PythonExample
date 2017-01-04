#if SDL_VIDEO_DRIVER_WINDOWS
#define CDS_FULLSCREEN 0
typedef struct _WIN_GetMonitorDPIData  WIN_GetMonitorDPIData;
static BOOL CALLBACK
WIN_GetMonitorDPI(HMONITOR hMonitor,
HDC      hdcMonitor,
LPRECT   lprcMonitor,
LPARAM   dwData)
static void
WIN_UpdateDisplayMode(_THIS, LPCTSTR deviceName, DWORD index, SDL_DisplayMode * mode)
static SDL_bool
WIN_GetDisplayMode(_THIS, LPCTSTR deviceName, DWORD index, SDL_DisplayMode * mode)
static SDL_bool
WIN_AddDisplay(_THIS, LPTSTR DeviceName)
int
WIN_InitModes(_THIS)
int
WIN_GetDisplayBounds(_THIS, SDL_VideoDisplay * display, SDL_Rect * rect)
int
WIN_GetDisplayDPI(_THIS, SDL_VideoDisplay * display, float * ddpi, float * hdpi, float * vdpi)
int
WIN_GetDisplayUsableBounds(_THIS, SDL_VideoDisplay * display, SDL_Rect * rect)
void
WIN_GetDisplayModes(_THIS, SDL_VideoDisplay * display)
int
WIN_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
void
WIN_QuitModes(_THIS)

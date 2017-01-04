#if SDL_VIDEO_DRIVER_WINRT
using namespace Windows::UI::Core;
using Windows::UI::Core::CoreCursor;
extern "C"
extern "C" SDL_bool WINRT_UsingRelativeMouseMode = SDL_FALSE;
static SDL_Cursor *
WINRT_CreateSystemCursor(SDL_SystemCursor id)
static SDL_Cursor *
WINRT_CreateDefaultCursor()
static void
WINRT_FreeCursor(SDL_Cursor * cursor)
static int
WINRT_ShowCursor(SDL_Cursor * cursor)
static int
WINRT_SetRelativeMouseMode(SDL_bool enabled)
void
WINRT_InitMouse(_THIS)
void
WINRT_QuitMouse(_THIS)

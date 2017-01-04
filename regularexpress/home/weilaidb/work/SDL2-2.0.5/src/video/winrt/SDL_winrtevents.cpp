#if SDL_VIDEO_DRIVER_WINRT
using namespace Windows::UI::Core;
using Windows::UI::Core::CoreCursor;
extern "C"
static void WINRT_YieldXAMLThread();
void
WINRT_PumpEvents(_THIS)
enum SDL_XAMLAppThreadState
;
static SDL_XAMLAppThreadState _threadState = ThreadState_NotLaunched;
static SDL_Thread * _XAMLThread = nullptr;
static SDL_mutex * _mutex = nullptr;
static SDL_cond * _cond = nullptr;
static void
WINRT_YieldXAMLThread()
static int
WINRT_XAMLThreadMain(void * userdata)
void
WINRT_CycleXAMLThread()

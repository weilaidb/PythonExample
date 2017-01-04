#if SDL_VIDEO_DRIVER_WINRT
extern "C"
static Platform::WeakReference WINRT_MainThreadDispatcher;
MIDL_INTERFACE("1DB9A292-CC78-4173-BE45-B61E67283EA7")
IGameBarStatics_ : public IInspectable
;
static GUID IID_IGameBarStatics_ = ;
static IGameBarStatics_ *
WINRT_GetGameBar()
static void
WINRT_HandleGameBarIsInputRedirected_MainThread()
static void
WINRT_HandleGameBarIsInputRedirected_NonMainThread(Platform::Object ^ o1, Platform::Object ^o2)
void
WINRT_InitGameBar(_THIS)
void
WINRT_QuitGameBar(_THIS)

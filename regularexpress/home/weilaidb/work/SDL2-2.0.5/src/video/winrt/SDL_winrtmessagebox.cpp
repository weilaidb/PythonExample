#if SDL_VIDEO_DRIVER_WINRT
extern "C"
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::UI::Popups;
static String ^
WINRT_UTF8ToPlatformString(const char * str)
extern "C" int
WINRT_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid)

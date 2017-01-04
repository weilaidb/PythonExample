extern "C"
using namespace std;
using namespace Windows::Storage;
extern "C" const wchar_t *
SDL_WinRTGetFSPathUNICODE(SDL_WinRT_Path pathType)
extern "C" const char *
SDL_WinRTGetFSPathUTF8(SDL_WinRT_Path pathType)
extern "C" char *
SDL_GetBasePath(void)
extern "C" char *
SDL_GetPrefPath(const char *org, const char *app)

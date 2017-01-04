#define _INCLUDED_WINDOWS_H
#if defined(__WIN32__)
#define WIN32_LEAN_AND_MEAN
#define STRICT
#define UNICODE 1
#undef _WIN32_WINNT
#define _WIN32_WINNT  0x501
#if UNICODE
#define WIN_StringToUTF8(S) SDL_iconv_string("UTF-8", "UTF-16LE", (char *)(S), (SDL_wcslen(S)+1)*sizeof(WCHAR))
#define WIN_UTF8ToString(S) (WCHAR *)SDL_iconv_string("UTF-16LE", "UTF-8", (char *)(S), SDL_strlen(S)+1)
#define WIN_StringToUTF8(S) SDL_iconv_string("UTF-8", "ASCII", (char *)(S), (SDL_strlen(S)+1))
#define WIN_UTF8ToString(S) SDL_iconv_string("ASCII", "UTF-8", (char *)(S), SDL_strlen(S)+1)
extern int WIN_SetErrorFromHRESULT(const char *prefix, HRESULT hr);
extern int WIN_SetError(const char *prefix);
extern HRESULT WIN_CoInitialize(void);
extern void WIN_CoUninitialize(void);
extern BOOL WIN_IsWindowsVistaOrGreater();
extern char *WIN_LookupAudioDeviceName(const WCHAR *name, const GUID *guid);

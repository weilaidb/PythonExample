#if defined(__WIN32__) || defined(__WINRT__)
#define _WIN32_WINNT_VISTA  0x0600
int
WIN_SetErrorFromHRESULT(const char *prefix, HRESULT hr)
int
WIN_SetError(const char *prefix)
HRESULT
WIN_CoInitialize(void)
void
WIN_CoUninitialize(void)
static BOOL
IsWindowsVersionOrGreater(WORD wMajorVersion, WORD wMinorVersion, WORD wServicePackMajor)
BOOL WIN_IsWindowsVistaOrGreater()
char *
WIN_LookupAudioDeviceName(const WCHAR *name, const GUID *guid)

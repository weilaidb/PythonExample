#if SDL_VIDEO_DRIVER_WINDOWS
#define MOUSEEVENTF_FROMTOUCH 0xFF515700
#define REPEATED_KEYMASK    (1<<30)
#define EXTENDED_KEYMASK    (1<<24)
#define VK_ENTER    10
#define VK_OEM_NEC_EQUAL 0x92
#define WM_XBUTTONDOWN 0x020B
#define WM_XBUTTONUP 0x020C
#define GET_XBUTTON_WPARAM(w) (HIWORD(w))
#define WM_INPUT 0x00ff
#define WM_TOUCH 0x0240
#define WM_MOUSEHWHEEL 0x020E
#define WM_UNICHAR 0x0109
static SDL_Scancode
WindowsScanCodeToSDLScanCode(LPARAM lParam, WPARAM wParam)
static SDL_bool
WIN_ShouldIgnoreFocusClick()
void
WIN_CheckWParamMouseButton(SDL_bool bwParamMousePressed, SDL_bool bSDLMousePressed, SDL_WindowData *data, Uint8 button, SDL_MouseID mouseID)
void
WIN_CheckWParamMouseButtons(WPARAM wParam, SDL_WindowData *data, SDL_MouseID mouseID)
void
WIN_CheckRawMouseButtons(ULONG rawButtons, SDL_WindowData *data)
void
WIN_CheckAsyncMouseRelease(SDL_WindowData *data)
BOOL
WIN_ConvertUTF32toUTF8(UINT32 codepoint, char * text)
static SDL_bool
ShouldGenerateWindowCloseOnAltF4(void)
LRESULT CALLBACK
WIN_WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
static SDL_WindowsMessageHook g_WindowsMessageHook = NULL;
static void *g_WindowsMessageHookData = NULL;
void SDL_SetWindowsMessageHook(SDL_WindowsMessageHook callback, void *userdata)
void
WIN_PumpEvents(_THIS)
static int app_registered = 0;
LPTSTR SDL_Appname = NULL;
Uint32 SDL_Appstyle = 0;
HINSTANCE SDL_Instance = NULL;
int
SDL_RegisterApp(char *name, Uint32 style, void *hInst)
void
SDL_UnregisterApp()

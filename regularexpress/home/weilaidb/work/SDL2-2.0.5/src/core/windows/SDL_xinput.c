XInputGetState_t SDL_XInputGetState = NULL;
XInputSetState_t SDL_XInputSetState = NULL;
XInputGetCapabilities_t SDL_XInputGetCapabilities = NULL;
XInputGetBatteryInformation_t SDL_XInputGetBatteryInformation = NULL;
DWORD SDL_XInputVersion = 0;
static HANDLE s_pXInputDLL = 0;
static int s_XInputDLLRefCount = 0;
int
WIN_LoadXInputDLL(void)
void
WIN_UnloadXInputDLL(void)
int
WIN_LoadXInputDLL(void)
void
WIN_UnloadXInputDLL(void)

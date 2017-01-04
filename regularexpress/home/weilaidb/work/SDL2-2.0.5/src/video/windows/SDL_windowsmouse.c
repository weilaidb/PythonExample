#if SDL_VIDEO_DRIVER_WINDOWS
HCURSOR SDL_cursor = NULL;
static int rawInputEnableCount = 0;
static int
ToggleRawInput(SDL_bool enabled)
static SDL_Cursor *
WIN_CreateDefaultCursor()
static SDL_Cursor *
WIN_CreateCursor(SDL_Surface * surface, int hot_x, int hot_y)
static SDL_Cursor *
WIN_CreateSystemCursor(SDL_SystemCursor id)
static void
WIN_FreeCursor(SDL_Cursor * cursor)
static int
WIN_ShowCursor(SDL_Cursor * cursor)
static void
WIN_WarpMouse(SDL_Window * window, int x, int y)
static int
WIN_WarpMouseGlobal(int x, int y)
static int
WIN_SetRelativeMouseMode(SDL_bool enabled)
static int
WIN_CaptureMouse(SDL_Window *window)
static Uint32
WIN_GetGlobalMouseState(int *x, int *y)
void
WIN_InitMouse(_THIS)
void
WIN_QuitMouse(_THIS)

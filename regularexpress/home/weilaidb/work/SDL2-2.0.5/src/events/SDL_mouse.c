static SDL_Mouse SDL_mouse;
static Uint32 SDL_double_click_time = 500;
static int SDL_double_click_radius = 1;
static int
SDL_PrivateSendMouseMotion(SDL_Window * window, SDL_MouseID mouseID, int relative, int x, int y);
int
SDL_MouseInit(void)
void
SDL_SetDefaultCursor(SDL_Cursor * cursor)
SDL_Mouse *
SDL_GetMouse(void)
void
SDL_SetDoubleClickTime(Uint32 interval)
SDL_Window *
SDL_GetMouseFocus(void)
void
SDL_ResetMouse(void)
void
SDL_SetMouseFocus(SDL_Window * window)
static SDL_bool
SDL_UpdateMouseFocus(SDL_Window * window, int x, int y, Uint32 buttonstate)
{
SDL_Mouse *mouse = SDL_GetMouse();
SDL_bool inWindow = SDL_TRUE;
if (window && ((window->flags & SDL_WINDOW_MOUSE_CAPTURE) == 0))
if (!inWindow && !buttonstate)
int
SDL_SendMouseMotion(SDL_Window * window, SDL_MouseID mouseID, int relative, int x, int y)
static int
SDL_PrivateSendMouseMotion(SDL_Window * window, SDL_MouseID mouseID, int relative, int x, int y)
static SDL_MouseClickState *GetMouseClickState(SDL_Mouse *mouse, Uint8 button)
static int
SDL_PrivateSendMouseButton(SDL_Window * window, SDL_MouseID mouseID, Uint8 state, Uint8 button, int clicks)
int
SDL_SendMouseButtonClicks(SDL_Window * window, SDL_MouseID mouseID, Uint8 state, Uint8 button, int clicks)
int
SDL_SendMouseButton(SDL_Window * window, SDL_MouseID mouseID, Uint8 state, Uint8 button)
int
SDL_SendMouseWheel(SDL_Window * window, SDL_MouseID mouseID, int x, int y, SDL_MouseWheelDirection direction)
void
SDL_MouseQuit(void)
Uint32
SDL_GetMouseState(int *x, int *y)
Uint32
SDL_GetRelativeMouseState(int *x, int *y)
Uint32
SDL_GetGlobalMouseState(int *x, int *y)
void
SDL_WarpMouseInWindow(SDL_Window * window, int x, int y)
int
SDL_WarpMouseGlobal(int x, int y)
static SDL_bool
ShouldUseRelativeModeWarp(SDL_Mouse *mouse)
int
SDL_SetRelativeMouseMode(SDL_bool enabled)
SDL_bool
SDL_GetRelativeMouseMode()
int
SDL_CaptureMouse(SDL_bool enabled)
SDL_Cursor *
SDL_CreateCursor(const Uint8 * data, const Uint8 * mask,
int w, int h, int hot_x, int hot_y)
SDL_Cursor *
SDL_CreateColorCursor(SDL_Surface *surface, int hot_x, int hot_y)
SDL_Cursor *
SDL_CreateSystemCursor(SDL_SystemCursor id)
void
SDL_SetCursor(SDL_Cursor * cursor)
SDL_Cursor *
SDL_GetCursor(void)
SDL_Cursor *
SDL_GetDefaultCursor(void)
void
SDL_FreeCursor(SDL_Cursor * cursor)
int
SDL_ShowCursor(int toggle)

#if SDL_VIDEO_DRIVER_X11
static Cursor x11_empty_cursor = None;
static Display *
GetDisplay(void)
static Cursor
X11_CreateEmptyCursor()
static void
X11_DestroyEmptyCursor(void)
static SDL_Cursor *
X11_CreateDefaultCursor()
#if SDL_VIDEO_DRIVER_X11_XCURSOR
static Cursor
X11_CreateXCursorCursor(SDL_Surface * surface, int hot_x, int hot_y)
static Cursor
X11_CreatePixmapCursor(SDL_Surface * surface, int hot_x, int hot_y)
static SDL_Cursor *
X11_CreateCursor(SDL_Surface * surface, int hot_x, int hot_y)
static SDL_Cursor *
X11_CreateSystemCursor(SDL_SystemCursor id)
{
SDL_Cursor *cursor;
unsigned int shape;
switch(id)
static void
X11_WarpMouse(SDL_Window * window, int x, int y)
static int
X11_WarpMouseGlobal(int x, int y)
static int
X11_SetRelativeMouseMode(SDL_bool enabled)
static int
X11_CaptureMouse(SDL_Window *window)
static Uint32
X11_GetGlobalMouseState(int *x, int *y)
void
X11_InitMouse(_THIS)
void
X11_QuitMouse(_THIS)

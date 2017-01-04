#if SDL_VIDEO_DRIVER_EMSCRIPTEN
static SDL_Cursor*
Emscripten_CreateDefaultCursor()
static SDL_Cursor*
Emscripten_CreateSystemCursor(SDL_SystemCursor id)
static void
Emscripten_FreeCursor(SDL_Cursor* cursor)
static int
Emscripten_ShowCursor(SDL_Cursor* cursor)
static void
Emscripten_WarpMouse(SDL_Window* window, int x, int y)
static int
Emscripten_SetRelativeMouseMode(SDL_bool enabled)
void
Emscripten_InitMouse()
void
Emscripten_FiniMouse()

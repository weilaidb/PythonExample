#if SDL_VIDEO_DRIVER_MIR
typedef struct
MIR_Cursor;
static SDL_Cursor*
MIR_CreateDefaultCursor()
static void
CopySurfacePixelsToMirStream(SDL_Surface* surface, MirBufferStream* stream)
static SDL_Cursor*
MIR_CreateCursor(SDL_Surface* surface, int hot_x, int hot_y)
static SDL_Cursor*
MIR_CreateSystemCursor(SDL_SystemCursor id)
static void
MIR_FreeCursor(SDL_Cursor* cursor)
static int
MIR_ShowCursor(SDL_Cursor* cursor)
static void
MIR_WarpMouse(SDL_Window* window, int x, int y)
static int
MIR_WarpMouseGlobal(int x, int y)
static int
MIR_SetRelativeMouseMode(SDL_bool enabled)
void
MIR_InitMouse()
void
MIR_FiniMouse()

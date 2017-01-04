#if SDL_VIDEO_DRIVER_DIRECTFB
static SDL_Cursor *DirectFB_CreateDefaultCursor(void);
static SDL_Cursor *DirectFB_CreateCursor(SDL_Surface * surface,
int hot_x, int hot_y);
static int DirectFB_ShowCursor(SDL_Cursor * cursor);
static void DirectFB_MoveCursor(SDL_Cursor * cursor);
static void DirectFB_FreeCursor(SDL_Cursor * cursor);
static void DirectFB_WarpMouse(SDL_Window * window, int x, int y);
static void DirectFB_FreeMouse(SDL_Mouse * mouse);
static const char *arrow[] = ;
static SDL_Cursor *
DirectFB_CreateDefaultCursor(void)
static SDL_Cursor *
DirectFB_CreateCursor(SDL_Surface * surface, int hot_x, int hot_y)
static int
DirectFB_ShowCursor(SDL_Cursor * cursor)
static void
DirectFB_FreeCursor(SDL_Cursor * cursor)
static void
DirectFB_WarpMouse(SDL_Window * window, int x, int y)
#if USE_MULTI_API
static void DirectFB_WarpMouse(SDL_Mouse * mouse, SDL_Window * window,
int x, int y);
static int id_mask;
static DFBEnumerationResult
EnumMice(DFBInputDeviceID device_id, DFBInputDeviceDescription desc,
void *callbackdata)
void
DirectFB_InitMouse(_THIS)
void
DirectFB_QuitMouse(_THIS)
static void
DirectFB_MoveCursor(SDL_Cursor * cursor)
static void
DirectFB_WarpMouse(SDL_Mouse * mouse, SDL_Window * window, int x, int y)
static void
DirectFB_FreeMouse(SDL_Mouse * mouse)
void
DirectFB_InitMouse(_THIS)
void
DirectFB_QuitMouse(_THIS)

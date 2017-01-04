#if SDL_VIDEO_DRIVER_RPI
#define ELEMENT_CHANGE_LAYER          (1<<0)
#define ELEMENT_CHANGE_OPACITY        (1<<1)
#define ELEMENT_CHANGE_DEST_RECT      (1<<2)
#define ELEMENT_CHANGE_SRC_RECT       (1<<3)
#define ELEMENT_CHANGE_MASK_RESOURCE  (1<<4)
#define ELEMENT_CHANGE_TRANSFORM      (1<<5)
static SDL_Cursor *RPI_CreateDefaultCursor(void);
static SDL_Cursor *RPI_CreateCursor(SDL_Surface * surface, int hot_x, int hot_y);
static int RPI_ShowCursor(SDL_Cursor * cursor);
static void RPI_MoveCursor(SDL_Cursor * cursor);
static void RPI_FreeCursor(SDL_Cursor * cursor);
static void RPI_WarpMouse(SDL_Window * window, int x, int y);
static int RPI_WarpMouseGlobal(int x, int y);
static SDL_Cursor *
RPI_CreateDefaultCursor(void)
static SDL_Cursor *
RPI_CreateCursor(SDL_Surface * surface, int hot_x, int hot_y)
static int
RPI_ShowCursor(SDL_Cursor * cursor)
static void
RPI_FreeCursor(SDL_Cursor * cursor)
static void
RPI_WarpMouse(SDL_Window * window, int x, int y)
static int
RPI_WarpMouseGlobal(int x, int y)
void
RPI_InitMouse(_THIS)
void
RPI_QuitMouse(_THIS)
static void
RPI_MoveCursor(SDL_Cursor * cursor)

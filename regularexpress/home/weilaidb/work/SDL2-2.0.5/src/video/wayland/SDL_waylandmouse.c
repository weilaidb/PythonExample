#if SDL_VIDEO_DRIVER_WAYLAND
#define _GNU_SOURCE
typedef struct  Wayland_CursorData;
static int
wayland_create_tmp_file(off_t size)
static void
mouse_buffer_release(void *data, struct wl_buffer *buffer)
static const struct wl_buffer_listener mouse_buffer_listener = ;
static int
create_buffer_from_shm(Wayland_CursorData *d,
int width,
int height,
uint32_t format)
static SDL_Cursor *
Wayland_CreateCursor(SDL_Surface *surface, int hot_x, int hot_y)
static SDL_Cursor *
CreateCursorFromWlCursor(SDL_VideoData *d, struct wl_cursor *wlcursor)
static SDL_Cursor *
Wayland_CreateDefaultCursor()
static SDL_Cursor *
Wayland_CreateSystemCursor(SDL_SystemCursor id)
static void
Wayland_FreeCursor(SDL_Cursor *cursor)
static int
Wayland_ShowCursor(SDL_Cursor *cursor)
static void
Wayland_WarpMouse(SDL_Window *window, int x, int y)
static int
Wayland_WarpMouseGlobal(int x, int y)
static int
Wayland_SetRelativeMouseMode(SDL_bool enabled)
void
Wayland_InitMouse(void)
void
Wayland_FiniMouse(void)

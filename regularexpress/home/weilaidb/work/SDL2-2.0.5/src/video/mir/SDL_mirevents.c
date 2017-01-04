#if SDL_VIDEO_DRIVER_MIR
static void
HandleKeyText(int32_t key_code)
static void
HandleKeyEvent(MirKeyboardEvent const* key_event, SDL_Window* window)
static void
HandleMouseButton(SDL_Window* sdl_window, Uint8 state, MirPointerEvent const* pointer)
static void
HandleMouseMotion(SDL_Window* sdl_window, int x, int y)
static void
HandleTouchPress(int device_id, int source_id, SDL_bool down, float x, float y, float pressure)
static void
HandleTouchMotion(int device_id, int source_id, float x, float y, float pressure)
static void
HandleMouseScroll(SDL_Window* sdl_window, int hscroll, int vscroll)
static void
AddTouchDevice(int device_id)
static void
HandleTouchEvent(MirTouchEvent const* touch, int device_id, SDL_Window* sdl_window)
static void
HandleMouseEvent(MirPointerEvent const* pointer, SDL_Window* sdl_window)
static void
MIR_HandleInput(MirInputEvent const* input_event, SDL_Window* window)
static void
MIR_HandleResize(MirResizeEvent const* resize_event, SDL_Window* window)
static void
MIR_HandleSurface(MirSurfaceEvent const* surface_event, SDL_Window* window)
void
MIR_HandleEvent(MirSurface* surface, MirEvent const* ev, void* context)

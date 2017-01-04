#if SDL_VIDEO_DRIVER_MIR
#define MIR_DRIVER_NAME "mir"
static const Uint32 mir_pixel_format_to_sdl_format[] = ;
Uint32
MIR_GetSDLPixelFormat(MirPixelFormat format)
static int
MIR_VideoInit(_THIS);
static void
MIR_VideoQuit(_THIS);
static int
MIR_GetDisplayBounds(_THIS, SDL_VideoDisplay* display, SDL_Rect* rect);
static void
MIR_GetDisplayModes(_THIS, SDL_VideoDisplay* sdl_display);
static int
MIR_SetDisplayMode(_THIS, SDL_VideoDisplay* sdl_display, SDL_DisplayMode* mode);
static SDL_WindowShaper*
MIR_CreateShaper(SDL_Window* window)
static int
MIR_SetWindowShape(SDL_WindowShaper* shaper, SDL_Surface* shape, SDL_WindowShapeMode* shape_mode)
static int
MIR_ResizeWindowShape(SDL_Window* window)
static int
MIR_Available()
static void
MIR_DeleteDevice(SDL_VideoDevice* device)
static void
MIR_PumpEvents(_THIS)
static SDL_VideoDevice*
MIR_CreateDevice(int device_index)
VideoBootStrap MIR_bootstrap = ;
static SDL_DisplayMode
MIR_ConvertModeToSDLMode(MirOutputMode const* mode, MirPixelFormat format)
static void
MIR_AddModeToDisplay(SDL_VideoDisplay* display, MirOutputMode const* mode, MirPixelFormat format)
static void
MIR_InitDisplayFromOutput(_THIS, MirOutput* output)
static void
MIR_InitDisplays(_THIS)
static int
MIR_VideoInit(_THIS)
static void
MIR_CleanUpDisplayConfig(_THIS)
static void
MIR_VideoQuit(_THIS)
static int
MIR_GetDisplayBounds(_THIS, SDL_VideoDisplay* display, SDL_Rect* rect)
static void
MIR_GetDisplayModes(_THIS, SDL_VideoDisplay* display)
static int
MIR_SetDisplayMode(_THIS, SDL_VideoDisplay* display, SDL_DisplayMode* mode)

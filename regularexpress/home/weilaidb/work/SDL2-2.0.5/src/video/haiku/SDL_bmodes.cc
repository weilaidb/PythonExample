#if SDL_VIDEO_DRIVER_HAIKU
#if SDL_VIDEO_OPENGL
#define WRAP_BMODE 1
#if WRAP_BMODE
typedef struct SDL_DisplayModeData ;
static SDL_INLINE SDL_BWin *_ToBeWin(SDL_Window *window)
static SDL_INLINE SDL_BApp *_GetBeApp()
static SDL_INLINE display_mode * _ExtractBMode(SDL_DisplayMode *mode)
static float get_refresh_rate(display_mode &mode)
int32 BE_ColorSpaceToBitsPerPixel(uint32 colorspace)
int32 BE_BPPToSDLPxFormat(int32 bpp)
static void _BDisplayModeToSdlDisplayMode(display_mode *bmode,
SDL_DisplayMode *mode)
static void _AddDisplay(BScreen *screen)
int BE_InitModes(_THIS)
int BE_QuitModes(_THIS)
int BE_GetDisplayBounds(_THIS, SDL_VideoDisplay *display, SDL_Rect *rect)
void BE_GetDisplayModes(_THIS, SDL_VideoDisplay *display)
int BE_SetDisplayMode(_THIS, SDL_VideoDisplay *display, SDL_DisplayMode *mode)

#if SDL_VIDEO_DRIVER_DIRECTFB
#define DFB_MAX_MODES 200
struct screen_callback_t
;
struct modes_callback_t
;
static DFBEnumerationResult
EnumModesCallback(int width, int height, int bpp, void *data)
static DFBEnumerationResult
EnumScreensCallback(DFBScreenID screen_id, DFBScreenDescription desc,
void *callbackdata)
static DFBEnumerationResult
EnumLayersCallback(DFBDisplayLayerID layer_id, DFBDisplayLayerDescription desc,
void *callbackdata)
static void
CheckSetDisplayMode(_THIS, SDL_VideoDisplay * display, DFB_DisplayData * data, SDL_DisplayMode * mode)
void
DirectFB_SetContext(_THIS, SDL_Window *window)
void
DirectFB_InitModes(_THIS)
void
DirectFB_GetDisplayModes(_THIS, SDL_VideoDisplay * display)
int
DirectFB_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
void
DirectFB_QuitModes(_THIS)

#if SDL_VIDEO_DRIVER_NACL
#define NACLVID_DRIVER_NAME "nacl"
static SDL_VideoData nacl = ;
void
NACL_SetScreenResolution(int width, int height, Uint32 format)
static int NACL_VideoInit(_THIS);
static void NACL_VideoQuit(_THIS);
static int NACL_Available(void)
static void NACL_DeleteDevice(SDL_VideoDevice *device)
static int
NACL_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
static SDL_VideoDevice *NACL_CreateDevice(int devindex)
VideoBootStrap NACL_bootstrap = ;
int NACL_VideoInit(_THIS)
void NACL_VideoQuit(_THIS)

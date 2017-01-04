#if SDL_VIDEO_DRIVER_DUMMY
#define DUMMYVID_DRIVER_NAME "dummy"
static int DUMMY_VideoInit(_THIS);
static int DUMMY_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
static void DUMMY_VideoQuit(_THIS);
static int
DUMMY_Available(void)
static void
DUMMY_DeleteDevice(SDL_VideoDevice * device)
static SDL_VideoDevice *
DUMMY_CreateDevice(int devindex)
VideoBootStrap DUMMY_bootstrap = ;
int
DUMMY_VideoInit(_THIS)
static int
DUMMY_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
void
DUMMY_VideoQuit(_THIS)

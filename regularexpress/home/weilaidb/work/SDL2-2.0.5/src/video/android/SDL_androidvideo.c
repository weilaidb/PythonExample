#if SDL_VIDEO_DRIVER_ANDROID
#define ANDROID_VID_DRIVER_NAME "Android"
static int Android_VideoInit(_THIS);
static void Android_VideoQuit(_THIS);
extern SDL_GLContext Android_GLES_CreateContext(_THIS, SDL_Window * window);
extern int Android_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
extern void Android_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int Android_GLES_LoadLibrary(_THIS, const char *path);
#define Android_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define Android_GLES_UnloadLibrary SDL_EGL_UnloadLibrary
#define Android_GLES_SetSwapInterval SDL_EGL_SetSwapInterval
#define Android_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
#define Android_GLES_DeleteContext SDL_EGL_DeleteContext
int Android_ScreenWidth = 0;
int Android_ScreenHeight = 0;
Uint32 Android_ScreenFormat = SDL_PIXELFORMAT_UNKNOWN;
int Android_ScreenRate = 0;
SDL_sem *Android_PauseSem = NULL, *Android_ResumeSem = NULL;
SDL_Window *Android_Window = NULL;
static int
Android_Available(void)
static void
Android_SuspendScreenSaver(_THIS)
static void
Android_DeleteDevice(SDL_VideoDevice * device)
static SDL_VideoDevice *
Android_CreateDevice(int devindex)
VideoBootStrap Android_bootstrap = ;
int
Android_VideoInit(_THIS)
void
Android_VideoQuit(_THIS)
void
Android_SetScreenResolution(int width, int height, Uint32 format, float rate)

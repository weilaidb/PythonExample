#if SDL_VIDEO_DRIVER_EMSCRIPTEN
#define EMSCRIPTENVID_DRIVER_NAME "emscripten"
static int Emscripten_VideoInit(_THIS);
static int Emscripten_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
static void Emscripten_VideoQuit(_THIS);
static int Emscripten_CreateWindow(_THIS, SDL_Window * window);
static void Emscripten_SetWindowSize(_THIS, SDL_Window * window);
static void Emscripten_DestroyWindow(_THIS, SDL_Window * window);
static void Emscripten_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen);
static void Emscripten_PumpEvents(_THIS);
static void Emscripten_SetWindowTitle(_THIS, SDL_Window * window);
static int
Emscripten_Available(void)
static void
Emscripten_DeleteDevice(SDL_VideoDevice * device)
static SDL_VideoDevice *
Emscripten_CreateDevice(int devindex)
VideoBootStrap Emscripten_bootstrap = ;
int
Emscripten_VideoInit(_THIS)
static int
Emscripten_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
static void
Emscripten_VideoQuit(_THIS)
static void
Emscripten_PumpEvents(_THIS)
static int
Emscripten_CreateWindow(_THIS, SDL_Window * window)
static void Emscripten_SetWindowSize(_THIS, SDL_Window * window)
static void
Emscripten_DestroyWindow(_THIS, SDL_Window * window)
static void
Emscripten_SetWindowFullscreen(_THIS, SDL_Window * window, SDL_VideoDisplay * display, SDL_bool fullscreen)
static void
Emscripten_SetWindowTitle(_THIS, SDL_Window * window)

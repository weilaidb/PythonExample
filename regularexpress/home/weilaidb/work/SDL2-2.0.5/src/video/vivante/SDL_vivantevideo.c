#if SDL_VIDEO_DRIVER_VIVANTE
static int
VIVANTE_Available(void)
static void
VIVANTE_Destroy(SDL_VideoDevice * device)
static SDL_VideoDevice *
VIVANTE_Create()
VideoBootStrap VIVANTE_bootstrap = ;
static int
VIVANTE_AddVideoDisplays(_THIS)
int
VIVANTE_VideoInit(_THIS)
void
VIVANTE_VideoQuit(_THIS)
void
VIVANTE_GetDisplayModes(_THIS, SDL_VideoDisplay * display)
int
VIVANTE_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
int
VIVANTE_CreateWindow(_THIS, SDL_Window * window)
void
VIVANTE_DestroyWindow(_THIS, SDL_Window * window)
void
VIVANTE_SetWindowTitle(_THIS, SDL_Window * window)
void
VIVANTE_SetWindowPosition(_THIS, SDL_Window * window)
void
VIVANTE_SetWindowSize(_THIS, SDL_Window * window)
void
VIVANTE_ShowWindow(_THIS, SDL_Window * window)
void
VIVANTE_HideWindow(_THIS, SDL_Window * window)
SDL_bool
VIVANTE_GetWindowWMInfo(_THIS, SDL_Window * window, struct SDL_SysWMinfo *info)
void VIVANTE_PumpEvents(_THIS)

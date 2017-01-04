#if SDL_VIDEO_DRIVER_RPI
static int
RPI_Available(void)
static void
RPI_Destroy(SDL_VideoDevice * device)
static SDL_VideoDevice *
RPI_Create()
VideoBootStrap RPI_bootstrap = ;
int
RPI_VideoInit(_THIS)
void
RPI_VideoQuit(_THIS)
void
RPI_GetDisplayModes(_THIS, SDL_VideoDisplay * display)
int
RPI_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
int
RPI_CreateWindow(_THIS, SDL_Window * window)
void
RPI_DestroyWindow(_THIS, SDL_Window * window)
int
RPI_CreateWindowFrom(_THIS, SDL_Window * window, const void *data)
void
RPI_SetWindowTitle(_THIS, SDL_Window * window)
void
RPI_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon)
void
RPI_SetWindowPosition(_THIS, SDL_Window * window)
void
RPI_SetWindowSize(_THIS, SDL_Window * window)
void
RPI_ShowWindow(_THIS, SDL_Window * window)
void
RPI_HideWindow(_THIS, SDL_Window * window)
void
RPI_RaiseWindow(_THIS, SDL_Window * window)
void
RPI_MaximizeWindow(_THIS, SDL_Window * window)
void
RPI_MinimizeWindow(_THIS, SDL_Window * window)
void
RPI_RestoreWindow(_THIS, SDL_Window * window)
void
RPI_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed)
SDL_bool
RPI_GetWindowWMInfo(_THIS, SDL_Window * window, struct SDL_SysWMinfo *info)

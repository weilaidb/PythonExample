#if SDL_VIDEO_DRIVER_DIRECTFB
#if SDL_DIRECTFB_OPENGL
int
DirectFB_CreateWindow(_THIS, SDL_Window * window)
int
DirectFB_CreateWindowFrom(_THIS, SDL_Window * window, const void *data)
void
DirectFB_SetWindowTitle(_THIS, SDL_Window * window)
void
DirectFB_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon)
void
DirectFB_SetWindowPosition(_THIS, SDL_Window * window)
void
DirectFB_SetWindowSize(_THIS, SDL_Window * window)
void
DirectFB_ShowWindow(_THIS, SDL_Window * window)
void
DirectFB_HideWindow(_THIS, SDL_Window * window)
void
DirectFB_RaiseWindow(_THIS, SDL_Window * window)
void
DirectFB_MaximizeWindow(_THIS, SDL_Window * window)
void
DirectFB_MinimizeWindow(_THIS, SDL_Window * window)
void
DirectFB_RestoreWindow(_THIS, SDL_Window * window)
void
DirectFB_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed)
void
DirectFB_DestroyWindow(_THIS, SDL_Window * window)
SDL_bool
DirectFB_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo * info)
void
DirectFB_AdjustWindowSurface(SDL_Window * window)
int
DirectFB_SetWindowOpacity(_THIS, SDL_Window * window, float opacity)

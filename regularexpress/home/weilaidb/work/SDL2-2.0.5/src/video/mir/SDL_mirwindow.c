#if SDL_VIDEO_DRIVER_MIR
int
IsSurfaceValid(MIR_Window* mir_window)
MirPixelFormat
FindValidPixelFormat(MIR_Data* mir_data)
int
MIR_CreateWindow(_THIS, SDL_Window* window)
void
MIR_DestroyWindow(_THIS, SDL_Window* window)
SDL_bool
MIR_GetWindowWMInfo(_THIS, SDL_Window* window, SDL_SysWMinfo* info)
void
MIR_SetWindowFullscreen(_THIS, SDL_Window* window,
SDL_VideoDisplay* display,
SDL_bool fullscreen)
void
MIR_MaximizeWindow(_THIS, SDL_Window* window)
void
MIR_MinimizeWindow(_THIS, SDL_Window* window)
void
MIR_RestoreWindow(_THIS, SDL_Window * window)
void
MIR_HideWindow(_THIS, SDL_Window* window)
void
MIR_SetWindowSize(_THIS, SDL_Window* window)
void
MIR_SetWindowMinimumSize(_THIS, SDL_Window* window)
void
MIR_SetWindowMaximumSize(_THIS, SDL_Window* window)
void
MIR_SetWindowTitle(_THIS, SDL_Window* window)
void
MIR_SetWindowGrab(_THIS, SDL_Window* window, SDL_bool grabbed)
int
MIR_SetWindowGammaRamp(_THIS, SDL_Window* window, Uint16 const* ramp)
int
MIR_GetWindowGammaRamp(_THIS, SDL_Window* window, Uint16* ramp)

#define _SDL_mirwindow_h
struct MIR_Window ;
extern int
MIR_CreateWindow(_THIS, SDL_Window* window);
extern void
MIR_DestroyWindow(_THIS, SDL_Window* window);
extern void
MIR_SetWindowFullscreen(_THIS, SDL_Window* window,
SDL_VideoDisplay* display,
SDL_bool fullscreen);
extern void
MIR_MaximizeWindow(_THIS, SDL_Window* window);
extern void
MIR_MinimizeWindow(_THIS, SDL_Window* window);
extern void
MIR_RestoreWindow(_THIS, SDL_Window* window);
extern void
MIR_HideWindow(_THIS, SDL_Window* window);
extern SDL_bool
MIR_GetWindowWMInfo(_THIS, SDL_Window* window, SDL_SysWMinfo* info);
extern void
MIR_SetWindowSize(_THIS, SDL_Window* window);
extern void
MIR_SetWindowMinimumSize(_THIS, SDL_Window* window);
extern void
MIR_SetWindowMaximumSize(_THIS, SDL_Window* window);
extern void
MIR_SetWindowTitle(_THIS, SDL_Window* window);
extern void
MIR_SetWindowGrab(_THIS, SDL_Window* window, SDL_bool grabbed);
extern int
MIR_SetWindowGammaRamp(_THIS, SDL_Window* window, Uint16 const* ramp);
extern int
MIR_GetWindowGammaRamp(_THIS, SDL_Window* window, Uint16* ramp);

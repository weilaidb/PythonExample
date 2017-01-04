#if SDL_VIDEO_DRIVER_PSP
static int
PSP_Available(void)
static void
PSP_Destroy(SDL_VideoDevice * device)
static SDL_VideoDevice *
PSP_Create()
VideoBootStrap PSP_bootstrap = ;
int
PSP_VideoInit(_THIS)
void
PSP_VideoQuit(_THIS)
void
PSP_GetDisplayModes(_THIS, SDL_VideoDisplay * display)
int
PSP_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode)
#define EGLCHK(stmt)                            \
do  while (0)
int
PSP_CreateWindow(_THIS, SDL_Window * window)
int
PSP_CreateWindowFrom(_THIS, SDL_Window * window, const void *data)
void
PSP_SetWindowTitle(_THIS, SDL_Window * window)
void
PSP_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon)
void
PSP_SetWindowPosition(_THIS, SDL_Window * window)
void
PSP_SetWindowSize(_THIS, SDL_Window * window)
void
PSP_ShowWindow(_THIS, SDL_Window * window)
void
PSP_HideWindow(_THIS, SDL_Window * window)
void
PSP_RaiseWindow(_THIS, SDL_Window * window)
void
PSP_MaximizeWindow(_THIS, SDL_Window * window)
void
PSP_MinimizeWindow(_THIS, SDL_Window * window)
void
PSP_RestoreWindow(_THIS, SDL_Window * window)
void
PSP_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed)
void
PSP_DestroyWindow(_THIS, SDL_Window * window)
SDL_bool
PSP_GetWindowWMInfo(_THIS, SDL_Window * window, struct SDL_SysWMinfo *info)
SDL_bool PSP_HasScreenKeyboardSupport(_THIS)
void PSP_ShowScreenKeyboard(_THIS, SDL_Window *window)
void PSP_HideScreenKeyboard(_THIS, SDL_Window *window)
SDL_bool PSP_IsScreenKeyboardShown(_THIS, SDL_Window *window)

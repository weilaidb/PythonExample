#define _SDL_pspvideo_h
typedef struct SDL_VideoData
SDL_VideoData;
typedef struct SDL_DisplayData
SDL_DisplayData;
typedef struct SDL_WindowData
SDL_WindowData;
int PSP_VideoInit(_THIS);
void PSP_VideoQuit(_THIS);
void PSP_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
int PSP_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
int PSP_CreateWindow(_THIS, SDL_Window * window);
int PSP_CreateWindowFrom(_THIS, SDL_Window * window, const void *data);
void PSP_SetWindowTitle(_THIS, SDL_Window * window);
void PSP_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon);
void PSP_SetWindowPosition(_THIS, SDL_Window * window);
void PSP_SetWindowSize(_THIS, SDL_Window * window);
void PSP_ShowWindow(_THIS, SDL_Window * window);
void PSP_HideWindow(_THIS, SDL_Window * window);
void PSP_RaiseWindow(_THIS, SDL_Window * window);
void PSP_MaximizeWindow(_THIS, SDL_Window * window);
void PSP_MinimizeWindow(_THIS, SDL_Window * window);
void PSP_RestoreWindow(_THIS, SDL_Window * window);
void PSP_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed);
void PSP_DestroyWindow(_THIS, SDL_Window * window);
SDL_bool PSP_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info);
int PSP_GL_LoadLibrary(_THIS, const char *path);
void *PSP_GL_GetProcAddress(_THIS, const char *proc);
void PSP_GL_UnloadLibrary(_THIS);
SDL_GLContext PSP_GL_CreateContext(_THIS, SDL_Window * window);
int PSP_GL_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
int PSP_GL_SetSwapInterval(_THIS, int interval);
int PSP_GL_GetSwapInterval(_THIS);
void PSP_GL_SwapWindow(_THIS, SDL_Window * window);
void PSP_GL_DeleteContext(_THIS, SDL_GLContext context);
SDL_bool PSP_HasScreenKeyboardSupport(_THIS);
void PSP_ShowScreenKeyboard(_THIS, SDL_Window *window);
void PSP_HideScreenKeyboard(_THIS, SDL_Window *window);
SDL_bool PSP_IsScreenKeyboardShown(_THIS, SDL_Window *window);

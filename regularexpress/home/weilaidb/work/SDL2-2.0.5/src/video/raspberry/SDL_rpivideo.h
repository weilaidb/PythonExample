#define __SDL_RPIVIDEO_H__
typedef struct SDL_VideoData
SDL_VideoData;
typedef struct SDL_DisplayData
SDL_DisplayData;
typedef struct SDL_WindowData
SDL_WindowData;
#define SDL_RPI_VIDEOLAYER 10000
#define SDL_RPI_MOUSELAYER SDL_RPI_VIDEOLAYER + 1
int RPI_VideoInit(_THIS);
void RPI_VideoQuit(_THIS);
void RPI_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
int RPI_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
int RPI_CreateWindow(_THIS, SDL_Window * window);
int RPI_CreateWindowFrom(_THIS, SDL_Window * window, const void *data);
void RPI_SetWindowTitle(_THIS, SDL_Window * window);
void RPI_SetWindowIcon(_THIS, SDL_Window * window, SDL_Surface * icon);
void RPI_SetWindowPosition(_THIS, SDL_Window * window);
void RPI_SetWindowSize(_THIS, SDL_Window * window);
void RPI_ShowWindow(_THIS, SDL_Window * window);
void RPI_HideWindow(_THIS, SDL_Window * window);
void RPI_RaiseWindow(_THIS, SDL_Window * window);
void RPI_MaximizeWindow(_THIS, SDL_Window * window);
void RPI_MinimizeWindow(_THIS, SDL_Window * window);
void RPI_RestoreWindow(_THIS, SDL_Window * window);
void RPI_SetWindowGrab(_THIS, SDL_Window * window, SDL_bool grabbed);
void RPI_DestroyWindow(_THIS, SDL_Window * window);
SDL_bool RPI_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info);
int RPI_GLES_LoadLibrary(_THIS, const char *path);
void *RPI_GLES_GetProcAddress(_THIS, const char *proc);
void RPI_GLES_UnloadLibrary(_THIS);
SDL_GLContext RPI_GLES_CreateContext(_THIS, SDL_Window * window);
int RPI_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
int RPI_GLES_SetSwapInterval(_THIS, int interval);
int RPI_GLES_GetSwapInterval(_THIS);
void RPI_GLES_SwapWindow(_THIS, SDL_Window * window);
void RPI_GLES_DeleteContext(_THIS, SDL_GLContext context);

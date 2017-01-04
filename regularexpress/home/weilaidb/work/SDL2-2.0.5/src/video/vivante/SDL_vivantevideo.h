#define _SDL_vivantevideo_h
#if SDL_VIDEO_DRIVER_VIVANTE_VDK
typedef struct SDL_VideoData
SDL_VideoData;
typedef struct SDL_DisplayData
SDL_DisplayData;
typedef struct SDL_WindowData
SDL_WindowData;
int VIVANTE_VideoInit(_THIS);
void VIVANTE_VideoQuit(_THIS);
void VIVANTE_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
int VIVANTE_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
int VIVANTE_CreateWindow(_THIS, SDL_Window * window);
void VIVANTE_SetWindowTitle(_THIS, SDL_Window * window);
void VIVANTE_SetWindowPosition(_THIS, SDL_Window * window);
void VIVANTE_SetWindowSize(_THIS, SDL_Window * window);
void VIVANTE_ShowWindow(_THIS, SDL_Window * window);
void VIVANTE_HideWindow(_THIS, SDL_Window * window);
void VIVANTE_DestroyWindow(_THIS, SDL_Window * window);
SDL_bool VIVANTE_GetWindowWMInfo(_THIS, SDL_Window * window,
struct SDL_SysWMinfo *info);
void VIVANTE_PumpEvents(_THIS);

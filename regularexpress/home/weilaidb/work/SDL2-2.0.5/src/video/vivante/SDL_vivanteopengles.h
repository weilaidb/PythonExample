#define _SDL_vivanteopengles_h
#if SDL_VIDEO_DRIVER_VIVANTE && SDL_VIDEO_OPENGL_EGL
#define VIVANTE_GLES_GetAttribute SDL_EGL_GetAttribute
#define VIVANTE_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define VIVANTE_GLES_UnloadLibrary SDL_EGL_UnloadLibrary
#define VIVANTE_GLES_SetSwapInterval SDL_EGL_SetSwapInterval
#define VIVANTE_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
#define VIVANTE_GLES_DeleteContext SDL_EGL_DeleteContext
extern int VIVANTE_GLES_LoadLibrary(_THIS, const char *path);
extern SDL_GLContext VIVANTE_GLES_CreateContext(_THIS, SDL_Window * window);
extern void VIVANTE_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int VIVANTE_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);

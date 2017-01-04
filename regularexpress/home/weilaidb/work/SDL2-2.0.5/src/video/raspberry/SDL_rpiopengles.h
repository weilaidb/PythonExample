#define _SDL_rpiopengles_h
#if SDL_VIDEO_DRIVER_RPI && SDL_VIDEO_OPENGL_EGL
#define RPI_GLES_GetAttribute SDL_EGL_GetAttribute
#define RPI_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define RPI_GLES_UnloadLibrary SDL_EGL_UnloadLibrary
#define RPI_GLES_SetSwapInterval SDL_EGL_SetSwapInterval
#define RPI_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
#define RPI_GLES_DeleteContext SDL_EGL_DeleteContext
extern int RPI_GLES_LoadLibrary(_THIS, const char *path);
extern SDL_GLContext RPI_GLES_CreateContext(_THIS, SDL_Window * window);
extern void RPI_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int RPI_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);

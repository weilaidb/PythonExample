#define _SDL_winopengles_h
#if SDL_VIDEO_OPENGL_EGL
#define WIN_GLES_GetAttribute SDL_EGL_GetAttribute
#define WIN_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define WIN_GLES_UnloadLibrary SDL_EGL_UnloadLibrary
#define WIN_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
extern int WIN_GLES_SetSwapInterval(_THIS, int interval);
extern int WIN_GLES_LoadLibrary(_THIS, const char *path);
extern SDL_GLContext WIN_GLES_CreateContext(_THIS, SDL_Window * window);
extern void WIN_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int WIN_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
extern void WIN_GLES_DeleteContext(_THIS, SDL_GLContext context);
extern int WIN_GLES_SetupWindow(_THIS, SDL_Window * window);

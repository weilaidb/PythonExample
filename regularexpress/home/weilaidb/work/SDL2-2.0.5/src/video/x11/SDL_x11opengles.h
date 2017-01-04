#define _SDL_x11opengles_h
#if SDL_VIDEO_OPENGL_EGL
typedef struct SDL_PrivateGLESData
SDL_PrivateGLESData;
#define X11_GLES_GetAttribute SDL_EGL_GetAttribute
#define X11_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define X11_GLES_UnloadLibrary SDL_EGL_UnloadLibrary
#define X11_GLES_SetSwapInterval SDL_EGL_SetSwapInterval
#define X11_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
#define X11_GLES_DeleteContext SDL_EGL_DeleteContext
extern int X11_GLES_LoadLibrary(_THIS, const char *path);
extern XVisualInfo *X11_GLES_GetVisual(_THIS, Display * display, int screen);
extern SDL_GLContext X11_GLES_CreateContext(_THIS, SDL_Window * window);
extern void X11_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int X11_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);

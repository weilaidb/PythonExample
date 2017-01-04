#define _SDL_winrtopengles_h
#if SDL_VIDEO_DRIVER_WINRT && SDL_VIDEO_OPENGL_EGL
#define WINRT_GLES_GetAttribute SDL_EGL_GetAttribute
#define WINRT_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define WINRT_GLES_SetSwapInterval SDL_EGL_SetSwapInterval
#define WINRT_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
#define WINRT_GLES_DeleteContext SDL_EGL_DeleteContext
extern int WINRT_GLES_LoadLibrary(_THIS, const char *path);
extern void WINRT_GLES_UnloadLibrary(_THIS);
extern SDL_GLContext WINRT_GLES_CreateContext(_THIS, SDL_Window * window);
extern void WINRT_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int WINRT_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
typedef EGLDisplay (EGLAPIENTRY *eglGetPlatformDisplayEXT_Function)(EGLenum, void *, const EGLint *);

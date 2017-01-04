#define _SDL_waylandopengles_h
typedef struct SDL_PrivateGLESData
SDL_PrivateGLESData;
#define Wayland_GLES_GetAttribute SDL_EGL_GetAttribute
#define Wayland_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define Wayland_GLES_UnloadLibrary SDL_EGL_UnloadLibrary
#define Wayland_GLES_SetSwapInterval SDL_EGL_SetSwapInterval
#define Wayland_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
extern int Wayland_GLES_LoadLibrary(_THIS, const char *path);
extern SDL_GLContext Wayland_GLES_CreateContext(_THIS, SDL_Window * window);
extern void Wayland_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int Wayland_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
extern void Wayland_GLES_DeleteContext(_THIS, SDL_GLContext context);

#define _SDL_egl_h
#if SDL_VIDEO_OPENGL_EGL
typedef struct SDL_EGL_VideoData
SDL_EGL_VideoData;
extern int SDL_EGL_GetAttribute(_THIS, SDL_GLattr attrib, int *value);
extern int SDL_EGL_LoadLibrary(_THIS, const char *path, NativeDisplayType native_display);
extern void *SDL_EGL_GetProcAddress(_THIS, const char *proc);
extern void SDL_EGL_UnloadLibrary(_THIS);
extern int SDL_EGL_ChooseConfig(_THIS);
extern int SDL_EGL_SetSwapInterval(_THIS, int interval);
extern int SDL_EGL_GetSwapInterval(_THIS);
extern void SDL_EGL_DeleteContext(_THIS, SDL_GLContext context);
extern EGLSurface *SDL_EGL_CreateSurface(_THIS, NativeWindowType nw);
extern void SDL_EGL_DestroySurface(_THIS, EGLSurface egl_surface);
extern SDL_GLContext SDL_EGL_CreateContext(_THIS, EGLSurface egl_surface);
extern int SDL_EGL_MakeCurrent(_THIS, EGLSurface egl_surface, SDL_GLContext context);
extern void SDL_EGL_SwapBuffers(_THIS, EGLSurface egl_surface);
#define SDL_EGL_SwapWindow_impl(BACKEND) void \
BACKEND ## _GLES_SwapWindow(_THIS, SDL_Window * window) \
#define SDL_EGL_MakeCurrent_impl(BACKEND) int \
BACKEND ## _GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context) \
#define SDL_EGL_CreateContext_impl(BACKEND) SDL_GLContext \
BACKEND ## _GLES_CreateContext(_THIS, SDL_Window * window) \

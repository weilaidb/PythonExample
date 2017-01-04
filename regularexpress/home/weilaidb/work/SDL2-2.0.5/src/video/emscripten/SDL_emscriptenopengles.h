#define _SDL_emscriptenopengles_h
#if SDL_VIDEO_DRIVER_EMSCRIPTEN && SDL_VIDEO_OPENGL_EGL
#define Emscripten_GLES_GetAttribute SDL_EGL_GetAttribute
#define Emscripten_GLES_GetProcAddress SDL_EGL_GetProcAddress
#define Emscripten_GLES_UnloadLibrary SDL_EGL_UnloadLibrary
#define Emscripten_GLES_SetSwapInterval SDL_EGL_SetSwapInterval
#define Emscripten_GLES_GetSwapInterval SDL_EGL_GetSwapInterval
extern int Emscripten_GLES_LoadLibrary(_THIS, const char *path);
extern void Emscripten_GLES_DeleteContext(_THIS, SDL_GLContext context);
extern SDL_GLContext Emscripten_GLES_CreateContext(_THIS, SDL_Window * window);
extern void Emscripten_GLES_SwapWindow(_THIS, SDL_Window * window);
extern int Emscripten_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
extern void Emscripten_GLES_GetDrawableSize(_THIS, SDL_Window * window, int * w, int * h);

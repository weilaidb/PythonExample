#define _SDL_miropengl_h
#define MIR_GL_DeleteContext   SDL_EGL_DeleteContext
#define MIR_GL_GetSwapInterval SDL_EGL_GetSwapInterval
#define MIR_GL_SetSwapInterval SDL_EGL_SetSwapInterval
extern void
MIR_GL_SwapWindow(_THIS, SDL_Window* window);
extern int
MIR_GL_MakeCurrent(_THIS, SDL_Window* window, SDL_GLContext context);
extern SDL_GLContext
MIR_GL_CreateContext(_THIS, SDL_Window* window);
extern int
MIR_GL_LoadLibrary(_THIS, const char* path);
extern void
MIR_GL_UnloadLibrary(_THIS);
extern void*
MIR_GL_GetProcAddress(_THIS, const char* proc);

#define SDL_BOPENGL_H
extern int BE_GL_LoadLibrary(_THIS, const char *path);
extern void *BE_GL_GetProcAddress(_THIS, const char *proc);
extern void BE_GL_UnloadLibrary(_THIS);
extern int BE_GL_MakeCurrent(_THIS, SDL_Window * window,
SDL_GLContext context);
extern int BE_GL_SetSwapInterval(_THIS, int interval);
extern int BE_GL_GetSwapInterval(_THIS);
extern void BE_GL_SwapWindow(_THIS, SDL_Window * window);
extern SDL_GLContext BE_GL_CreateContext(_THIS, SDL_Window * window);
extern void BE_GL_DeleteContext(_THIS, SDL_GLContext context);
extern void BE_GL_RebootContexts(_THIS);

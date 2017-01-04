#if SDL_VIDEO_DRIVER_HAIKU
#define BGL_FLAGS BGL_RGB | BGL_DOUBLE
static SDL_INLINE SDL_BWin *_ToBeWin(SDL_Window *window)
static SDL_INLINE SDL_BApp *_GetBeApp()
int BE_GL_LoadLibrary(_THIS, const char *path)
void *BE_GL_GetProcAddress(_THIS, const char *proc)
void BE_GL_SwapWindow(_THIS, SDL_Window * window)
int BE_GL_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context)
SDL_GLContext BE_GL_CreateContext(_THIS, SDL_Window * window)
void BE_GL_DeleteContext(_THIS, SDL_GLContext context)
int BE_GL_SetSwapInterval(_THIS, int interval)
int BE_GL_GetSwapInterval(_THIS)
void BE_GL_UnloadLibrary(_THIS)
void BE_GL_RebootContexts(_THIS)

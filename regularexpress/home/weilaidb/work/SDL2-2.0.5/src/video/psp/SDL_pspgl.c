#if SDL_VIDEO_DRIVER_PSP
#define EGLCHK(stmt)                            \
do  while (0)
int
PSP_GL_LoadLibrary(_THIS, const char *path)
void *
PSP_GL_GetProcAddress(_THIS, const char *proc)
void
PSP_GL_UnloadLibrary(_THIS)
static EGLint width = 480;
static EGLint height = 272;
SDL_GLContext
PSP_GL_CreateContext(_THIS, SDL_Window * window)
int
PSP_GL_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context)
int
PSP_GL_SetSwapInterval(_THIS, int interval)
int
PSP_GL_GetSwapInterval(_THIS)
void
PSP_GL_SwapWindow(_THIS, SDL_Window * window)
void
PSP_GL_DeleteContext(_THIS, SDL_GLContext context)

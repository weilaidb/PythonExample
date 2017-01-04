#if SDL_VIDEO_DRIVER_DIRECTFB
#if SDL_DIRECTFB_OPENGL
#if SDL_DIRECTFB_OPENGL
struct SDL_GLDriverData
;
#define OPENGL_REQUIRS_DLOPEN
#if defined(OPENGL_REQUIRS_DLOPEN) && defined(SDL_LOADSO_DLOPEN)
#define GL_LoadObject(X)    dlopen(X, (RTLD_NOW|RTLD_GLOBAL))
#define GL_LoadFunction     dlsym
#define GL_UnloadObject     dlclose
#define GL_LoadObject   SDL_LoadObject
#define GL_LoadFunction SDL_LoadFunction
#define GL_UnloadObject SDL_UnloadObject
static void DirectFB_GL_UnloadLibrary(_THIS);
int
DirectFB_GL_Initialize(_THIS)
void
DirectFB_GL_Shutdown(_THIS)
int
DirectFB_GL_LoadLibrary(_THIS, const char *path)
static void
DirectFB_GL_UnloadLibrary(_THIS)
void *
DirectFB_GL_GetProcAddress(_THIS, const char *proc)
SDL_GLContext
DirectFB_GL_CreateContext(_THIS, SDL_Window * window)
int
DirectFB_GL_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context)
int
DirectFB_GL_SetSwapInterval(_THIS, int interval)
int
DirectFB_GL_GetSwapInterval(_THIS)
void
DirectFB_GL_SwapWindow(_THIS, SDL_Window * window)
void
DirectFB_GL_DeleteContext(_THIS, SDL_GLContext context)
void
DirectFB_GL_FreeWindowContexts(_THIS, SDL_Window * window)
void
DirectFB_GL_ReAllocWindowContexts(_THIS, SDL_Window * window)
void
DirectFB_GL_DestroyWindowContexts(_THIS, SDL_Window * window)

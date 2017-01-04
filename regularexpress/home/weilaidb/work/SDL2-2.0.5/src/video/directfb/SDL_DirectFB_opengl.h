#define _SDL_directfb_opengl_h
#if SDL_DIRECTFB_OPENGL
typedef struct _DirectFB_GLContext DirectFB_GLContext;
struct _DirectFB_GLContext
;
extern int DirectFB_GL_Initialize(_THIS);
extern void DirectFB_GL_Shutdown(_THIS);
extern int DirectFB_GL_LoadLibrary(_THIS, const char *path);
extern void *DirectFB_GL_GetProcAddress(_THIS, const char *proc);
extern SDL_GLContext DirectFB_GL_CreateContext(_THIS, SDL_Window * window);
extern int DirectFB_GL_MakeCurrent(_THIS, SDL_Window * window,
SDL_GLContext context);
extern int DirectFB_GL_SetSwapInterval(_THIS, int interval);
extern int DirectFB_GL_GetSwapInterval(_THIS);
extern void DirectFB_GL_SwapWindow(_THIS, SDL_Window * window);
extern void DirectFB_GL_DeleteContext(_THIS, SDL_GLContext context);
extern void DirectFB_GL_FreeWindowContexts(_THIS, SDL_Window * window);
extern void DirectFB_GL_ReAllocWindowContexts(_THIS, SDL_Window * window);
extern void DirectFB_GL_DestroyWindowContexts(_THIS, SDL_Window * window);

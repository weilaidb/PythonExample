#define _SDL_pspgl_c_h
typedef struct SDL_GLDriverData SDL_GLDriverData;
extern void * PSP_GL_GetProcAddress(_THIS, const char *proc);
extern int PSP_GL_MakeCurrent(_THIS,SDL_Window * window, SDL_GLContext context);
extern void PSP_GL_SwapBuffers(_THIS);
extern void PSP_GL_SwapWindow(_THIS, SDL_Window * window);
extern SDL_GLContext PSP_GL_CreateContext(_THIS, SDL_Window * window);
extern int PSP_GL_LoadLibrary(_THIS, const char *path);
extern void PSP_GL_UnloadLibrary(_THIS);
extern int PSP_GL_SetSwapInterval(_THIS, int interval);
extern int PSP_GL_GetSwapInterval(_THIS);

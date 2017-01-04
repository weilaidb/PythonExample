#define _SDL_naclgl_h
extern int NACL_GLES_LoadLibrary(_THIS, const char *path);
extern void *NACL_GLES_GetProcAddress(_THIS, const char *proc);
extern void NACL_GLES_UnloadLibrary(_THIS);
extern SDL_GLContext NACL_GLES_CreateContext(_THIS, SDL_Window * window);
extern int NACL_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context);
extern int NACL_GLES_SetSwapInterval(_THIS, int interval);
extern int NACL_GLES_GetSwapInterval(_THIS);
extern void NACL_GLES_SwapWindow(_THIS, SDL_Window * window);
extern void NACL_GLES_DeleteContext(_THIS, SDL_GLContext context);

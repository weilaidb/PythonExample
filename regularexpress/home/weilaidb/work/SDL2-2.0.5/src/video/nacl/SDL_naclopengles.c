#if SDL_VIDEO_DRIVER_NACL
#if SDL_LOADSO_DLOPEN
int
NACL_GLES_LoadLibrary(_THIS, const char *path)
void *
NACL_GLES_GetProcAddress(_THIS, const char *proc)
void
NACL_GLES_UnloadLibrary(_THIS)
int
NACL_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext sdl_context)
SDL_GLContext
NACL_GLES_CreateContext(_THIS, SDL_Window * window)
int
NACL_GLES_SetSwapInterval(_THIS, int interval)
int
NACL_GLES_GetSwapInterval(_THIS)
void
NACL_GLES_SwapWindow(_THIS, SDL_Window * window)
void
NACL_GLES_DeleteContext(_THIS, SDL_GLContext context)

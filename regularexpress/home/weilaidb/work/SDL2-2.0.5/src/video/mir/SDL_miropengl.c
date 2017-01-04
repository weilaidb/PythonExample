#if SDL_VIDEO_DRIVER_MIR
void
MIR_GL_SwapWindow(_THIS, SDL_Window* window)
int
MIR_GL_MakeCurrent(_THIS, SDL_Window* window, SDL_GLContext context)
SDL_GLContext
MIR_GL_CreateContext(_THIS, SDL_Window* window)
int
MIR_GL_LoadLibrary(_THIS, const char* path)
void
MIR_GL_UnloadLibrary(_THIS)
void*
MIR_GL_GetProcAddress(_THIS, const char* proc)

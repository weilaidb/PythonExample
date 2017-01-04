#if SDL_VIDEO_DRIVER_WINDOWS && SDL_VIDEO_OPENGL_EGL
int
WIN_GLES_LoadLibrary(_THIS, const char *path)
SDL_GLContext
WIN_GLES_CreateContext(_THIS, SDL_Window * window)
void
WIN_GLES_DeleteContext(_THIS, SDL_GLContext context)
SDL_EGL_SwapWindow_impl(WIN)
SDL_EGL_MakeCurrent_impl(WIN)
int
WIN_GLES_SetupWindow(_THIS, SDL_Window * window)
int
WIN_GLES_SetSwapInterval(_THIS, int interval)

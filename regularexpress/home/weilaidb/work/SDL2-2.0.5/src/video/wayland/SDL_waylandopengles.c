#if SDL_VIDEO_DRIVER_WAYLAND && SDL_VIDEO_OPENGL_EGL
int
Wayland_GLES_LoadLibrary(_THIS, const char *path)
SDL_GLContext
Wayland_GLES_CreateContext(_THIS, SDL_Window * window)
void
Wayland_GLES_SwapWindow(_THIS, SDL_Window *window)
int
Wayland_GLES_MakeCurrent(_THIS, SDL_Window * window, SDL_GLContext context)
void
Wayland_GLES_DeleteContext(_THIS, SDL_GLContext context)

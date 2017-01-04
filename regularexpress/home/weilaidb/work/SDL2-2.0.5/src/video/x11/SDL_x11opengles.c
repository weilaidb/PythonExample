#if SDL_VIDEO_DRIVER_X11 && SDL_VIDEO_OPENGL_EGL
int
X11_GLES_LoadLibrary(_THIS, const char *path)
XVisualInfo *
X11_GLES_GetVisual(_THIS, Display * display, int screen)
SDL_GLContext
X11_GLES_CreateContext(_THIS, SDL_Window * window)
SDL_EGL_SwapWindow_impl(X11)
SDL_EGL_MakeCurrent_impl(X11)

#define _SDL_x11opengl_h
#if SDL_VIDEO_OPENGL_GLX
struct SDL_GLDriverData
;
extern int X11_GL_LoadLibrary(_THIS, const char *path);
extern void *X11_GL_GetProcAddress(_THIS, const char *proc);
extern void X11_GL_UnloadLibrary(_THIS);
extern XVisualInfo *X11_GL_GetVisual(_THIS, Display * display, int screen);
extern SDL_GLContext X11_GL_CreateContext(_THIS, SDL_Window * window);
extern int X11_GL_MakeCurrent(_THIS, SDL_Window * window,
SDL_GLContext context);
extern int X11_GL_SetSwapInterval(_THIS, int interval);
extern int X11_GL_GetSwapInterval(_THIS);
extern void X11_GL_SwapWindow(_THIS, SDL_Window * window);
extern void X11_GL_DeleteContext(_THIS, SDL_GLContext context);

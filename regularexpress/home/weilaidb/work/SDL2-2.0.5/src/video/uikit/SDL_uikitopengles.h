#define _SDL_uikitopengles
extern int UIKit_GL_MakeCurrent(_THIS, SDL_Window * window,
SDL_GLContext context);
extern void UIKit_GL_GetDrawableSize(_THIS, SDL_Window * window,
int * w, int * h);
extern void UIKit_GL_SwapWindow(_THIS, SDL_Window * window);
extern SDL_GLContext UIKit_GL_CreateContext(_THIS, SDL_Window * window);
extern void UIKit_GL_DeleteContext(_THIS, SDL_GLContext context);
extern void *UIKit_GL_GetProcAddress(_THIS, const char *proc);
extern int UIKit_GL_LoadLibrary(_THIS, const char *path);
extern void UIKit_GL_RestoreCurrentContext();

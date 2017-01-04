#define _SDL_cocoaopengl_h
#if SDL_VIDEO_OPENGL_CGL
#import <Cocoa/Cocoa.h>
struct SDL_GLDriverData
;
@interface SDLOpenGLContext : NSOpenGLContext
- (id)initWithFormat:(NSOpenGLPixelFormat *)format
shareContext:(NSOpenGLContext *)share;
- (void)scheduleUpdate;
- (void)updateIfNeeded;
- (void)setWindow:(SDL_Window *)window;
@end
extern int Cocoa_GL_LoadLibrary(_THIS, const char *path);
extern void *Cocoa_GL_GetProcAddress(_THIS, const char *proc);
extern void Cocoa_GL_UnloadLibrary(_THIS);
extern SDL_GLContext Cocoa_GL_CreateContext(_THIS, SDL_Window * window);
extern int Cocoa_GL_MakeCurrent(_THIS, SDL_Window * window,
SDL_GLContext context);
extern void Cocoa_GL_GetDrawableSize(_THIS, SDL_Window * window,
int * w, int * h);
extern int Cocoa_GL_SetSwapInterval(_THIS, int interval);
extern int Cocoa_GL_GetSwapInterval(_THIS);
extern void Cocoa_GL_SwapWindow(_THIS, SDL_Window * window);
extern void Cocoa_GL_DeleteContext(_THIS, SDL_GLContext context);

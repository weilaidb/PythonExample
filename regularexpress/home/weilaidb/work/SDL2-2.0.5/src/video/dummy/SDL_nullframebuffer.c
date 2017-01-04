#if SDL_VIDEO_DRIVER_DUMMY
#define DUMMY_SURFACE   "_SDL_DummySurface"
int SDL_DUMMY_CreateWindowFramebuffer(_THIS, SDL_Window * window, Uint32 * format, void ** pixels, int *pitch)
int SDL_DUMMY_UpdateWindowFramebuffer(_THIS, SDL_Window * window, const SDL_Rect * rects, int numrects)
void SDL_DUMMY_DestroyWindowFramebuffer(_THIS, SDL_Window * window)

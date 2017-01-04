#define _SDL_mirframebuffer_h
extern int
MIR_CreateWindowFramebuffer(_THIS, SDL_Window* sdl_window, Uint32* format,
void** pixels, int* pitch);
extern int
MIR_UpdateWindowFramebuffer(_THIS, SDL_Window* sdl_window,
const SDL_Rect* rects, int numrects);
extern void
MIR_DestroyWindowFramebuffer(_THIS, SDL_Window* sdl_window);

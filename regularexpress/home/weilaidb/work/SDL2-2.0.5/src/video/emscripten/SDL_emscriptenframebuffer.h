#define _SDL_emscriptenframebuffer_h
extern int Emscripten_CreateWindowFramebuffer(_THIS, SDL_Window * window, Uint32 * format, void ** pixels, int *pitch);
extern int Emscripten_UpdateWindowFramebuffer(_THIS, SDL_Window * window, const SDL_Rect * rects, int numrects);
extern void Emscripten_DestroyWindowFramebuffer(_THIS, SDL_Window * window);

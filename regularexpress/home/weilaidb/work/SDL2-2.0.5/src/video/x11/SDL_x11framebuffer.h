extern int X11_CreateWindowFramebuffer(_THIS, SDL_Window * window,
Uint32 * format,
void ** pixels, int *pitch);
extern int X11_UpdateWindowFramebuffer(_THIS, SDL_Window * window,
const SDL_Rect * rects, int numrects);
extern void X11_DestroyWindowFramebuffer(_THIS, SDL_Window * window);

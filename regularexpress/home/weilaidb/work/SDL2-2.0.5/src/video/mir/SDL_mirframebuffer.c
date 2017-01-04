#if SDL_VIDEO_DRIVER_MIR
int
MIR_CreateWindowFramebuffer(_THIS, SDL_Window* window, Uint32* format,
void** pixels, int* pitch)
int
MIR_UpdateWindowFramebuffer(_THIS, SDL_Window* window,
const SDL_Rect* rects, int numrects)
void
MIR_DestroyWindowFramebuffer(_THIS, SDL_Window* window)

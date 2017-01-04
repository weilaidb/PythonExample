#if SDL_VIDEO_DRIVER_WINDOWS
int WIN_CreateWindowFramebuffer(_THIS, SDL_Window * window, Uint32 * format, void ** pixels, int *pitch)
int WIN_UpdateWindowFramebuffer(_THIS, SDL_Window * window, const SDL_Rect * rects, int numrects)
void WIN_DestroyWindowFramebuffer(_THIS, SDL_Window * window)

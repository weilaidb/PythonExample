#if SDL_VIDEO_DRIVER_EMSCRIPTEN
int Emscripten_CreateWindowFramebuffer(_THIS, SDL_Window * window, Uint32 * format, void ** pixels, int *pitch)
int Emscripten_UpdateWindowFramebuffer(_THIS, SDL_Window * window, const SDL_Rect * rects, int numrects)
void Emscripten_DestroyWindowFramebuffer(_THIS, SDL_Window * window)

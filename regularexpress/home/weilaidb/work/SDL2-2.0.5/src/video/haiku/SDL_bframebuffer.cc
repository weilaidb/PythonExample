#if SDL_VIDEO_DRIVER_HAIKU
int32 BE_UpdateOnce(SDL_Window *window);
static SDL_INLINE SDL_BWin *_ToBeWin(SDL_Window *window)
static SDL_INLINE SDL_BApp *_GetBeApp()
int BE_CreateWindowFramebuffer(_THIS, SDL_Window * window,
Uint32 * format,
void ** pixels, int *pitch)
int BE_UpdateWindowFramebuffer(_THIS, SDL_Window * window,
const SDL_Rect * rects, int numrects)
int32 BE_DrawThread(void *data)
void BE_DestroyWindowFramebuffer(_THIS, SDL_Window * window)
int32 BE_UpdateOnce(SDL_Window *window)

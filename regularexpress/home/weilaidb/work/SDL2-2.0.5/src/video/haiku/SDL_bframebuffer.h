#define SDL_BFRAMEBUFFER_H
#define DRAWTHREAD
extern int BE_CreateWindowFramebuffer(_THIS, SDL_Window * window,
Uint32 * format,
void ** pixels, int *pitch);
extern int BE_UpdateWindowFramebuffer(_THIS, SDL_Window * window,
const SDL_Rect * rects, int numrects);
extern void BE_DestroyWindowFramebuffer(_THIS, SDL_Window * window);
extern int32 BE_DrawThread(void *data);

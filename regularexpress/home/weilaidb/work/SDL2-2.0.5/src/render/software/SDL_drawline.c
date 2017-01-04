#if !SDL_RENDER_DISABLED
static void
SDL_DrawLine1(SDL_Surface * dst, int x1, int y1, int x2, int y2, Uint32 color,
SDL_bool draw_end)
static void
SDL_DrawLine2(SDL_Surface * dst, int x1, int y1, int x2, int y2, Uint32 color,
SDL_bool draw_end)
static void
SDL_DrawLine4(SDL_Surface * dst, int x1, int y1, int x2, int y2, Uint32 color,
SDL_bool draw_end)
typedef void (*DrawLineFunc) (SDL_Surface * dst,
int x1, int y1, int x2, int y2,
Uint32 color, SDL_bool draw_end);
static DrawLineFunc
SDL_CalculateDrawLineFunc(const SDL_PixelFormat * fmt)
int
SDL_DrawLine(SDL_Surface * dst, int x1, int y1, int x2, int y2, Uint32 color)
int
SDL_DrawLines(SDL_Surface * dst, const SDL_Point * points, int count,
Uint32 color)

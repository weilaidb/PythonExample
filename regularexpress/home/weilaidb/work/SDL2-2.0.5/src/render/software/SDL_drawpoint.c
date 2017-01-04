#if !SDL_RENDER_DISABLED
int
SDL_DrawPoint(SDL_Surface * dst, int x, int y, Uint32 color)
int
SDL_DrawPoints(SDL_Surface * dst, const SDL_Point * points, int count,
Uint32 color)

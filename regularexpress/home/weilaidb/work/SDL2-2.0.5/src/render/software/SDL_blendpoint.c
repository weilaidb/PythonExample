#if !SDL_RENDER_DISABLED
static int
SDL_BlendPoint_RGB555(SDL_Surface * dst, int x, int y, SDL_BlendMode blendMode, Uint8 r,
Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendPoint_RGB565(SDL_Surface * dst, int x, int y, SDL_BlendMode blendMode, Uint8 r,
Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendPoint_RGB888(SDL_Surface * dst, int x, int y, SDL_BlendMode blendMode, Uint8 r,
Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendPoint_ARGB8888(SDL_Surface * dst, int x, int y, SDL_BlendMode blendMode,
Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendPoint_RGB(SDL_Surface * dst, int x, int y, SDL_BlendMode blendMode, Uint8 r,
Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendPoint_RGBA(SDL_Surface * dst, int x, int y, SDL_BlendMode blendMode, Uint8 r,
Uint8 g, Uint8 b, Uint8 a)
int
SDL_BlendPoint(SDL_Surface * dst, int x, int y, SDL_BlendMode blendMode, Uint8 r,
Uint8 g, Uint8 b, Uint8 a)
int
SDL_BlendPoints(SDL_Surface * dst, const SDL_Point * points, int count,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)

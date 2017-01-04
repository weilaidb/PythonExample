#if !SDL_RENDER_DISABLED
static void
SDL_BlendLine_RGB2(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a,
SDL_bool draw_end)
static void
SDL_BlendLine_RGB555(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a,
SDL_bool draw_end)
static void
SDL_BlendLine_RGB565(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a,
SDL_bool draw_end)
static void
SDL_BlendLine_RGB4(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a,
SDL_bool draw_end)
static void
SDL_BlendLine_RGBA4(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a,
SDL_bool draw_end)
static void
SDL_BlendLine_RGB888(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a,
SDL_bool draw_end)
static void
SDL_BlendLine_ARGB8888(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 _r, Uint8 _g, Uint8 _b, Uint8 _a,
SDL_bool draw_end)
typedef void (*BlendLineFunc) (SDL_Surface * dst,
int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode,
Uint8 r, Uint8 g, Uint8 b, Uint8 a,
SDL_bool draw_end);
static BlendLineFunc
SDL_CalculateBlendLineFunc(const SDL_PixelFormat * fmt)
int
SDL_BlendLine(SDL_Surface * dst, int x1, int y1, int x2, int y2,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
int
SDL_BlendLines(SDL_Surface * dst, const SDL_Point * points, int count,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)

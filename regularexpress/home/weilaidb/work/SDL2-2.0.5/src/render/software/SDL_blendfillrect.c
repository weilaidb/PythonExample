#if !SDL_RENDER_DISABLED
static int
SDL_BlendFillRect_RGB555(SDL_Surface * dst, const SDL_Rect * rect,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendFillRect_RGB565(SDL_Surface * dst, const SDL_Rect * rect,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendFillRect_RGB888(SDL_Surface * dst, const SDL_Rect * rect,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendFillRect_ARGB8888(SDL_Surface * dst, const SDL_Rect * rect,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendFillRect_RGB(SDL_Surface * dst, const SDL_Rect * rect,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
static int
SDL_BlendFillRect_RGBA(SDL_Surface * dst, const SDL_Rect * rect,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
int
SDL_BlendFillRect(SDL_Surface * dst, const SDL_Rect * rect,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
int
SDL_BlendFillRects(SDL_Surface * dst, const SDL_Rect * rects, int count,
SDL_BlendMode blendMode, Uint8 r, Uint8 g, Uint8 b, Uint8 a)

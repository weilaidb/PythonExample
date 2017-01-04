#define SSE_BEGIN \
__m128 c128; \
c128.m128_u32[0] = color; \
c128.m128_u32[1] = color; \
c128.m128_u32[2] = color; \
c128.m128_u32[3] = color;
#define SSE_BEGIN \
__m128 c128; \
DECLARE_ALIGNED(Uint32, cccc[4], 16); \
cccc[0] = color; \
cccc[1] = color; \
cccc[2] = color; \
cccc[3] = color; \
c128 = *(__m128 *)cccc;
#define SSE_WORK \
for (i = n / 64; i--;)
#define SSE_END
#define DEFINE_SSE_FILLRECT(bpp, type) \
static void \
SDL_FillRect##bpp##SSE(Uint8 *pixels, int pitch, Uint32 color, int w, int h) \
static void
SDL_FillRect1SSE(Uint8 *pixels, int pitch, Uint32 color, int w, int h)
DEFINE_SSE_FILLRECT(2, Uint16)
DEFINE_SSE_FILLRECT(4, Uint32)
static void
SDL_FillRect1(Uint8 * pixels, int pitch, Uint32 color, int w, int h)
static void
SDL_FillRect2(Uint8 * pixels, int pitch, Uint32 color, int w, int h)
static void
SDL_FillRect3(Uint8 * pixels, int pitch, Uint32 color, int w, int h)
static void
SDL_FillRect4(Uint8 * pixels, int pitch, Uint32 color, int w, int h)
int
SDL_FillRect(SDL_Surface * dst, const SDL_Rect * rect, Uint32 color)
int
SDL_FillRects(SDL_Surface * dst, const SDL_Rect * rects, int count,
Uint32 color)

static void
BlitNto1SurfaceAlpha(SDL_BlitInfo * info)
static void
BlitNto1PixelAlpha(SDL_BlitInfo * info)
static void
BlitNto1SurfaceAlphaKey(SDL_BlitInfo * info)
static void
BlitRGBtoRGBSurfaceAlpha128MMX(SDL_BlitInfo * info)
static void
BlitRGBtoRGBSurfaceAlphaMMX(SDL_BlitInfo * info)
static void
BlitRGBtoRGBPixelAlphaMMX(SDL_BlitInfo * info)
static void
BlitRGBtoRGBSurfaceAlpha128(SDL_BlitInfo * info)
static void
BlitRGBtoRGBSurfaceAlpha(SDL_BlitInfo * info)
static void
BlitRGBtoRGBPixelAlpha(SDL_BlitInfo * info)
static void
BlitRGBtoRGBPixelAlphaMMX3DNOW(SDL_BlitInfo * info)
#define BLEND16_50(d, s, mask)						\
((((s & mask) + (d & mask)) >> 1) + (s & d & (~mask & 0xffff)))
#define BLEND2x16_50(d, s, mask)					     \
(((s & (mask | mask << 16)) >> 1) + ((d & (mask | mask << 16)) >> 1) \
+ (s & d & (~(mask | mask << 16))))
static void
Blit16to16SurfaceAlpha128(SDL_BlitInfo * info, Uint16 mask)
static void
Blit565to565SurfaceAlphaMMX(SDL_BlitInfo * info)
static void
Blit555to555SurfaceAlphaMMX(SDL_BlitInfo * info)
static void
Blit565to565SurfaceAlpha(SDL_BlitInfo * info)
static void
Blit555to555SurfaceAlpha(SDL_BlitInfo * info)
static void
BlitARGBto565PixelAlpha(SDL_BlitInfo * info)
static void
BlitARGBto555PixelAlpha(SDL_BlitInfo * info)
static void
BlitNtoNSurfaceAlpha(SDL_BlitInfo * info)
static void
BlitNtoNSurfaceAlphaKey(SDL_BlitInfo * info)
static void
BlitNtoNPixelAlpha(SDL_BlitInfo * info)
SDL_BlitFunc
SDL_CalculateBlitA(SDL_Surface * surface)

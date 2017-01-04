#if defined(__WIN32__)
typedef struct tColorRGBA  tColorRGBA;
typedef struct tColorY  tColorY;
#define MAX(a,b)    (((a) > (b)) ? (a) : (b))
#define GUARD_ROWS (2)
#define VALUE_LIMIT 0.001
static Uint32
_colorkey(SDL_Surface *src)
void
SDLgfx_rotozoomSurfaceSizeTrig(int width, int height, double angle,
int *dstwidth, int *dstheight,
double *cangle, double *sangle)
static void
computeSourceIncrements90(SDL_Surface * src, int bpp, int angle, int flipx, int flipy,
int *sincx, int *sincy, int *signx, int *signy)
#define TRANSFORM_SURFACE_90(pixelType) \
int dy, dincy = dst->pitch - dst->w*sizeof(pixelType), sincx, sincy, signx, signy;                      \
Uint8 *sp = (Uint8*)src->pixels, *dp = (Uint8*)dst->pixels, *de;                                        \
\
computeSourceIncrements90(src, sizeof(pixelType), angle, flipx, flipy, &sincx, &sincy, &signx, &signy); \
if (signx < 0) sp += (src->w-1)*sizeof(pixelType);                                                      \
if (signy < 0) sp += (src->h-1)*src->pitch;                                                             \
\
for (dy = 0; dy < dst->h; sp += sincy, dp += dincy, dy++)
static void
transformSurfaceRGBA90(SDL_Surface * src, SDL_Surface * dst, int angle, int flipx, int flipy)
static void
transformSurfaceY90(SDL_Surface * src, SDL_Surface * dst, int angle, int flipx, int flipy)
#undef TRANSFORM_SURFACE_90
static void
_transformSurfaceRGBA(SDL_Surface * src, SDL_Surface * dst, int cx, int cy, int isin, int icos, int flipx, int flipy, int smooth)
static void
transformSurfaceY(SDL_Surface * src, SDL_Surface * dst, int cx, int cy, int isin, int icos, int flipx, int flipy)
SDL_Surface *
SDLgfx_rotateSurface(SDL_Surface * src, double angle, int centerx, int centery, int smooth, int flipx, int flipy, int dstwidth, int dstheight, double cangle, double sangle)

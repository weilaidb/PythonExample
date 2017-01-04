#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define PIXEL_COPY(to, from, len, bpp)          \
SDL_memcpy(to, from, (size_t)(len) * (bpp))
#define OPAQUE_BLIT(to, from, length, bpp, alpha)   \
PIXEL_COPY(to, from, length, bpp)
#define ALPHA_BLIT32_888(to, from, length, bpp, alpha)      \
do  while (0)
#define ALPHA_BLIT16_565(to, from, length, bpp, alpha)  \
do  while(0)
#define ALPHA_BLIT16_555(to, from, length, bpp, alpha)  \
do  while(0)
#define ALPHA_BLIT_ANY(to, from, length, bpp, alpha)            \
do  while(0)
#define ALPHA_BLIT32_888_50(to, from, length, bpp, alpha)       \
do  while(0)
#define BLEND16_50(dst, src, mask)                              \
do  while(0)
#define ALPHA_BLIT16_50(to, from, length, bpp, alpha, mask)     \
do  while(0)
#define ALPHA_BLIT16_565_50(to, from, length, bpp, alpha)       \
ALPHA_BLIT16_50(to, from, length, bpp, alpha, 0xf7de)
#define ALPHA_BLIT16_555_50(to, from, length, bpp, alpha)       \
ALPHA_BLIT16_50(to, from, length, bpp, alpha, 0xfbde)
#define CHOOSE_BLIT(blitter, alpha, fmt)                        \
do  while(0)
#define RLEPIXEL_FROM_RGBA(Pixel, fmt, r, g, b, a)                      \
static void
RLEClipBlit(int w, Uint8 * srcbuf, SDL_Surface * surf_dst,
Uint8 * dstbuf, SDL_Rect * srcrect, unsigned alpha)
int
SDL_RLEBlit(SDL_Surface * surf_src, SDL_Rect * srcrect,
SDL_Surface * surf_dst, SDL_Rect * dstrect)
#undef OPAQUE_BLIT
#define BLIT_TRANSL_888(src, dst)               \
do  while(0)
#define BLIT_TRANSL_565(src, dst)       \
do  while(0)
#define BLIT_TRANSL_555(src, dst)       \
do  while(0)
typedef struct
RLEDestFormat;
static void
RLEAlphaClipBlit(int w, Uint8 * srcbuf, SDL_Surface * surf_dst,
Uint8 * dstbuf, SDL_Rect * srcrect)
int
SDL_RLEAlphaBlit(SDL_Surface * surf_src, SDL_Rect * srcrect,
SDL_Surface * surf_dst, SDL_Rect * dstrect)
static int
copy_opaque_16(void *dst, Uint32 * src, int n,
SDL_PixelFormat * sfmt, SDL_PixelFormat * dfmt)
static int
uncopy_opaque_16(Uint32 * dst, void *src, int n,
RLEDestFormat * sfmt, SDL_PixelFormat * dfmt)
static int
copy_transl_565(void *dst, Uint32 * src, int n,
SDL_PixelFormat * sfmt, SDL_PixelFormat * dfmt)
static int
copy_transl_555(void *dst, Uint32 * src, int n,
SDL_PixelFormat * sfmt, SDL_PixelFormat * dfmt)
static int
uncopy_transl_16(Uint32 * dst, void *src, int n,
RLEDestFormat * sfmt, SDL_PixelFormat * dfmt)
static int
copy_32(void *dst, Uint32 * src, int n,
SDL_PixelFormat * sfmt, SDL_PixelFormat * dfmt)
static int
uncopy_32(Uint32 * dst, void *src, int n,
RLEDestFormat * sfmt, SDL_PixelFormat * dfmt)
#define ISOPAQUE(pixel, fmt) ((((pixel) & fmt->Amask) >> fmt->Ashift) == 255)
#define ISTRANSL(pixel, fmt)    \
((unsigned)((((pixel) & fmt->Amask) >> fmt->Ashift) - 1U) < 254U)
static int
RLEAlphaSurface(SDL_Surface * surface)
static Uint32
getpix_8(Uint8 * srcbuf)
static Uint32
getpix_16(Uint8 * srcbuf)
static Uint32
getpix_24(Uint8 * srcbuf)
static Uint32
getpix_32(Uint8 * srcbuf)
typedef Uint32(*getpix_func) (Uint8 *);
static const getpix_func getpixes[4] = ;
static int
RLEColorkeySurface(SDL_Surface * surface)
int
SDL_RLESurface(SDL_Surface * surface)
static SDL_bool
UnRLEAlpha(SDL_Surface * surface)
void
SDL_UnRLESurface(SDL_Surface * surface, int recode)

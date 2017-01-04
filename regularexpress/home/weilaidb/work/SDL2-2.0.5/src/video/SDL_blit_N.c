#if SDL_ALTIVEC_BLITTERS
static size_t
GetL3CacheSize(void)
static size_t
GetL3CacheSize(void)
#if (defined(__MACOSX__) && (__GNUC__ < 4))
#define VECUINT8_LITERAL(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p) \
(vector unsigned char) ( a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p )
#define VECUINT16_LITERAL(a,b,c,d,e,f,g,h) \
(vector unsigned short) ( a,b,c,d,e,f,g,h )
#define VECUINT8_LITERAL(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p) \
(vector unsigned char)
#define VECUINT16_LITERAL(a,b,c,d,e,f,g,h) \
(vector unsigned short)
#define UNALIGNED_PTR(x) (((size_t) x) & 0x0000000F)
#define VSWIZZLE32(a,b,c,d) (vector unsigned char) \
( 0x00+a, 0x00+b, 0x00+c, 0x00+d, \
0x04+a, 0x04+b, 0x04+c, 0x04+d, \
0x08+a, 0x08+b, 0x08+c, 0x08+d, \
0x0C+a, 0x0C+b, 0x0C+c, 0x0C+d )
#define MAKE8888(dstfmt, r, g, b, a)  \
( ((r<<dstfmt->Rshift)&dstfmt->Rmask) | \
((g<<dstfmt->Gshift)&dstfmt->Gmask) | \
((b<<dstfmt->Bshift)&dstfmt->Bmask) | \
((a<<dstfmt->Ashift)&dstfmt->Amask) )
#define DST_CHAN_SRC 1
#define DST_CHAN_DEST 2
#define DST_CTRL(size, count, stride) \
(((size) << 24) | ((count) << 16) | (stride))
#define VEC_ALIGNER(src) ((UNALIGNED_PTR(src)) \
? vec_lvsl(0, src) \
: vec_add(vec_lvsl(8, src), vec_splat_u8(8)))
static vector unsigned char
calc_swizzle32(const SDL_PixelFormat * srcfmt, const SDL_PixelFormat * dstfmt)
static void Blit_RGB888_RGB565(SDL_BlitInfo * info);
static void
Blit_RGB888_RGB565Altivec(SDL_BlitInfo * info)
static void
Blit_RGB565_32Altivec(SDL_BlitInfo * info)
static void
Blit_RGB555_32Altivec(SDL_BlitInfo * info)
static void BlitNtoNKey(SDL_BlitInfo * info);
static void BlitNtoNKeyCopyAlpha(SDL_BlitInfo * info);
static void
Blit32to32KeyAltivec(SDL_BlitInfo * info)
static void
ConvertAltivec32to32_noprefetch(SDL_BlitInfo * info)
static void
ConvertAltivec32to32_prefetch(SDL_BlitInfo * info)
static Uint32
GetBlitFeatures(void)
#if __MWERKS__
#define GetBlitFeatures() ((Uint32)(SDL_HasMMX() ? 1 : 0))
#if SDL_BYTEORDER == SDL_LIL_ENDIAN
#define HI  1
#define LO  0
#define HI  0
#define LO  1
#define RGB888_RGB332(dst, src)
static void
Blit_RGB888_index8(SDL_BlitInfo * info)
#define RGB101010_RGB332(dst, src)
static void
Blit_RGB101010_index8(SDL_BlitInfo * info)
#define RGB888_RGB555(dst, src)
#define RGB888_RGB555_TWO(dst, src)
static void
Blit_RGB888_RGB555(SDL_BlitInfo * info)
#define RGB888_RGB565(dst, src)
#define RGB888_RGB565_TWO(dst, src)
static void
Blit_RGB888_RGB565(SDL_BlitInfo * info)
#define RGB565_32(dst, src, map) (map[src[LO]*2] + map[src[HI]*2+1])
static void
Blit_RGB565_32(SDL_BlitInfo * info, const Uint32 * map)
static const Uint32 RGB565_ARGB8888_LUT[512] = ;
static void
Blit_RGB565_ARGB8888(SDL_BlitInfo * info)
static const Uint32 RGB565_ABGR8888_LUT[512] = ;
static void
Blit_RGB565_ABGR8888(SDL_BlitInfo * info)
static const Uint32 RGB565_RGBA8888_LUT[512] = ;
static void
Blit_RGB565_RGBA8888(SDL_BlitInfo * info)
static const Uint32 RGB565_BGRA8888_LUT[512] = ;
static void
Blit_RGB565_BGRA8888(SDL_BlitInfo * info)
static void
BlitNto1(SDL_BlitInfo * info)
static void
Blit4to4MaskAlpha(SDL_BlitInfo * info)
static void
Blit4to4CopyAlpha(SDL_BlitInfo * info)
static void
BlitNtoN(SDL_BlitInfo * info)
static void
BlitNtoNCopyAlpha(SDL_BlitInfo * info)
static void
BlitNto1Key(SDL_BlitInfo * info)
static void
Blit2to2Key(SDL_BlitInfo * info)
static void
BlitNtoNKey(SDL_BlitInfo * info)
static void
BlitNtoNKeyCopyAlpha(SDL_BlitInfo * info)
static void
Blit2101010toN(SDL_BlitInfo * info)
static void
BlitNto2101010(SDL_BlitInfo * info)
struct blit_table
;
static const struct blit_table normal_blit_1[] = ;
static const struct blit_table normal_blit_2[] = ;
static const struct blit_table normal_blit_3[] = ;
static const struct blit_table normal_blit_4[] = ;
static const struct blit_table *const normal_blit[] = ;
#define MASKOK(x, y) (((x) == (y)) || ((y) == 0x00000000))
SDL_BlitFunc
SDL_CalculateBlitN(SDL_Surface * surface)

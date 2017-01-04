#define _SDL_blit_h
extern Uint8* SDL_expand_byte[9];
#define SDL_COPY_MODULATE_COLOR     0x00000001
#define SDL_COPY_MODULATE_ALPHA     0x00000002
#define SDL_COPY_BLEND              0x00000010
#define SDL_COPY_ADD                0x00000020
#define SDL_COPY_MOD                0x00000040
#define SDL_COPY_COLORKEY           0x00000100
#define SDL_COPY_NEAREST            0x00000200
#define SDL_COPY_RLE_DESIRED        0x00001000
#define SDL_COPY_RLE_COLORKEY       0x00002000
#define SDL_COPY_RLE_ALPHAKEY       0x00004000
#define SDL_COPY_RLE_MASK           (SDL_COPY_RLE_DESIRED|SDL_COPY_RLE_COLORKEY|SDL_COPY_RLE_ALPHAKEY)
#define SDL_CPU_ANY                 0x00000000
#define SDL_CPU_MMX                 0x00000001
#define SDL_CPU_3DNOW               0x00000002
#define SDL_CPU_SSE                 0x00000004
#define SDL_CPU_SSE2                0x00000008
#define SDL_CPU_ALTIVEC_PREFETCH    0x00000010
#define SDL_CPU_ALTIVEC_NOPREFETCH  0x00000020
typedef struct
SDL_BlitInfo;
typedef void (SDLCALL * SDL_BlitFunc) (SDL_BlitInfo * info);
typedef struct
SDL_BlitFuncEntry;
typedef struct SDL_BlitMap
SDL_BlitMap;
extern int SDL_CalculateBlit(SDL_Surface * surface);
extern SDL_BlitFunc SDL_CalculateBlit0(SDL_Surface * surface);
extern SDL_BlitFunc SDL_CalculateBlit1(SDL_Surface * surface);
extern SDL_BlitFunc SDL_CalculateBlitN(SDL_Surface * surface);
extern SDL_BlitFunc SDL_CalculateBlitA(SDL_Surface * surface);
#if defined(__GNUC__)
#define DECLARE_ALIGNED(t,v,a)  t __attribute__((aligned(a))) v
#elif defined(_MSC_VER)
#define DECLARE_ALIGNED(t,v,a)  __declspec(align(a)) t v
#define DECLARE_ALIGNED(t,v,a)  t v
#define RGB_FROM_PIXEL(Pixel, fmt, r, g, b)                             \
#define RGB_FROM_RGB565(Pixel, r, g, b)                                 \
#define RGB_FROM_RGB555(Pixel, r, g, b)                                 \
#define RGB_FROM_RGB888(Pixel, r, g, b)                                 \
#define RETRIEVE_RGB_PIXEL(buf, bpp, Pixel)                             \
do  while (0)
#define DISEMBLE_RGB(buf, bpp, fmt, Pixel, r, g, b)                     \
do  while (0)
#define PIXEL_FROM_RGB(Pixel, fmt, r, g, b)                             \
#define RGB565_FROM_RGB(Pixel, r, g, b)                                 \
#define RGB555_FROM_RGB(Pixel, r, g, b)                                 \
#define RGB888_FROM_RGB(Pixel, r, g, b)                                 \
#define ARGB8888_FROM_RGBA(Pixel, r, g, b, a)                           \
#define RGBA8888_FROM_RGBA(Pixel, r, g, b, a)                           \
#define ABGR8888_FROM_RGBA(Pixel, r, g, b, a)                           \
#define BGRA8888_FROM_RGBA(Pixel, r, g, b, a)                           \
#define ARGB2101010_FROM_RGBA(Pixel, r, g, b, a)                        \
#define ASSEMBLE_RGB(buf, bpp, fmt, r, g, b)                            \
#define RGBA_FROM_PIXEL(Pixel, fmt, r, g, b, a)                         \
#define RGBA_FROM_8888(Pixel, fmt, r, g, b, a)                          \
#define RGBA_FROM_RGBA8888(Pixel, r, g, b, a)                           \
#define RGBA_FROM_ARGB8888(Pixel, r, g, b, a)                           \
#define RGBA_FROM_ABGR8888(Pixel, r, g, b, a)                           \
#define RGBA_FROM_BGRA8888(Pixel, r, g, b, a)                           \
#define RGBA_FROM_ARGB2101010(Pixel, r, g, b, a)                        \
#define DISEMBLE_RGBA(buf, bpp, fmt, Pixel, r, g, b, a)                 \
do  while (0)
#define PIXEL_FROM_RGBA(Pixel, fmt, r, g, b, a)                         \
#define ASSEMBLE_RGBA(buf, bpp, fmt, r, g, b, a)                        \
#define ALPHA_BLEND_RGB(sR, sG, sB, A, dR, dG, dB)                      \
do  while(0)
#define ALPHA_BLEND_RGBA(sR, sG, sB, sA, dR, dG, dB, dA)                \
do  while(0)
#if defined(_MSC_VER) && (_MSC_VER == 1300)
#define USE_DUFFS_LOOP
#define DUFFS_LOOP8(pixel_copy_increment, width)                        \
#define DUFFS_LOOP4(pixel_copy_increment, width)                        \
#define DUFFS_LOOP(pixel_copy_increment, width)                         \
DUFFS_LOOP8(pixel_copy_increment, width)
#define DUFFS_LOOP_124(pixel_copy_increment1,                           \
pixel_copy_increment2,                           \
pixel_copy_increment4, width)                    \
#define DUFFS_LOOP(pixel_copy_increment, width)                         \
#define DUFFS_LOOP8(pixel_copy_increment, width)                        \
DUFFS_LOOP(pixel_copy_increment, width)
#define DUFFS_LOOP4(pixel_copy_increment, width)                        \
DUFFS_LOOP(pixel_copy_increment, width)
#define DUFFS_LOOP_124(pixel_copy_increment1,                           \
pixel_copy_increment2,                           \
pixel_copy_increment4, width)                    \
DUFFS_LOOP(pixel_copy_increment1, width)
#if defined(_MSC_VER) && (_MSC_VER >= 600)

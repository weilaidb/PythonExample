#define _SDL_pixels_h
#define SDL_ALPHA_OPAQUE 255
#define SDL_ALPHA_TRANSPARENT 0
enum
;
enum
;
enum
;
enum
;
enum
;
#define SDL_DEFINE_PIXELFOURCC(A, B, C, D) SDL_FOURCC(A, B, C, D)
#define SDL_DEFINE_PIXELFORMAT(type, order, layout, bits, bytes) \
((1 << 28) | ((type) << 24) | ((order) << 20) | ((layout) << 16) | \
((bits) << 8) | ((bytes) << 0))
#define SDL_PIXELFLAG(X)    (((X) >> 28) & 0x0F)
#define SDL_PIXELTYPE(X)    (((X) >> 24) & 0x0F)
#define SDL_PIXELORDER(X)   (((X) >> 20) & 0x0F)
#define SDL_PIXELLAYOUT(X)  (((X) >> 16) & 0x0F)
#define SDL_BITSPERPIXEL(X) (((X) >> 8) & 0xFF)
#define SDL_BYTESPERPIXEL(X) \
(SDL_ISPIXELFORMAT_FOURCC(X) ? \
((((X) == SDL_PIXELFORMAT_YUY2) || \
((X) == SDL_PIXELFORMAT_UYVY) || \
((X) == SDL_PIXELFORMAT_YVYU)) ? 2 : 1) : (((X) >> 0) & 0xFF))
#define SDL_ISPIXELFORMAT_INDEXED(format)   \
(!SDL_ISPIXELFORMAT_FOURCC(format) && \
((SDL_PIXELTYPE(format) == SDL_PIXELTYPE_INDEX1) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_INDEX4) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_INDEX8)))
#define SDL_ISPIXELFORMAT_PACKED(format) \
(!SDL_ISPIXELFORMAT_FOURCC(format) && \
((SDL_PIXELTYPE(format) == SDL_PIXELTYPE_PACKED8) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_PACKED16) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_PACKED32)))
#define SDL_ISPIXELFORMAT_ARRAY(format) \
(!SDL_ISPIXELFORMAT_FOURCC(format) && \
((SDL_PIXELTYPE(format) == SDL_PIXELTYPE_ARRAYU8) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_ARRAYU16) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_ARRAYU32) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_ARRAYF16) || \
(SDL_PIXELTYPE(format) == SDL_PIXELTYPE_ARRAYF32)))
#define SDL_ISPIXELFORMAT_ALPHA(format)   \
((SDL_ISPIXELFORMAT_PACKED(format) && \
((SDL_PIXELORDER(format) == SDL_PACKEDORDER_ARGB) || \
(SDL_PIXELORDER(format) == SDL_PACKEDORDER_RGBA) || \
(SDL_PIXELORDER(format) == SDL_PACKEDORDER_ABGR) || \
(SDL_PIXELORDER(format) == SDL_PACKEDORDER_BGRA))) || \
(SDL_ISPIXELFORMAT_ARRAY(format) && \
((SDL_PIXELORDER(format) == SDL_ARRAYORDER_ARGB) || \
(SDL_PIXELORDER(format) == SDL_ARRAYORDER_RGBA) || \
(SDL_PIXELORDER(format) == SDL_ARRAYORDER_ABGR) || \
(SDL_PIXELORDER(format) == SDL_ARRAYORDER_BGRA))))
#define SDL_ISPIXELFORMAT_FOURCC(format)    \
((format) && (SDL_PIXELFLAG(format) != 1))
enum
;
typedef struct SDL_Color
SDL_Color;
#define SDL_Colour SDL_Color
typedef struct SDL_Palette
SDL_Palette;
typedef struct SDL_PixelFormat
SDL_PixelFormat;
extern DECLSPEC const char* SDLCALL SDL_GetPixelFormatName(Uint32 format);
extern DECLSPEC SDL_bool SDLCALL SDL_PixelFormatEnumToMasks(Uint32 format,
int *bpp,
Uint32 * Rmask,
Uint32 * Gmask,
Uint32 * Bmask,
Uint32 * Amask);
extern DECLSPEC Uint32 SDLCALL SDL_MasksToPixelFormatEnum(int bpp,
Uint32 Rmask,
Uint32 Gmask,
Uint32 Bmask,
Uint32 Amask);
extern DECLSPEC SDL_PixelFormat * SDLCALL SDL_AllocFormat(Uint32 pixel_format);
extern DECLSPEC void SDLCALL SDL_FreeFormat(SDL_PixelFormat *format);
extern DECLSPEC SDL_Palette *SDLCALL SDL_AllocPalette(int ncolors);
extern DECLSPEC int SDLCALL SDL_SetPixelFormatPalette(SDL_PixelFormat * format,
SDL_Palette *palette);
extern DECLSPEC int SDLCALL SDL_SetPaletteColors(SDL_Palette * palette,
const SDL_Color * colors,
int firstcolor, int ncolors);
extern DECLSPEC void SDLCALL SDL_FreePalette(SDL_Palette * palette);
extern DECLSPEC Uint32 SDLCALL SDL_MapRGB(const SDL_PixelFormat * format,
Uint8 r, Uint8 g, Uint8 b);
extern DECLSPEC Uint32 SDLCALL SDL_MapRGBA(const SDL_PixelFormat * format,
Uint8 r, Uint8 g, Uint8 b,
Uint8 a);
extern DECLSPEC void SDLCALL SDL_GetRGB(Uint32 pixel,
const SDL_PixelFormat * format,
Uint8 * r, Uint8 * g, Uint8 * b);
extern DECLSPEC void SDLCALL SDL_GetRGBA(Uint32 pixel,
const SDL_PixelFormat * format,
Uint8 * r, Uint8 * g, Uint8 * b,
Uint8 * a);
extern DECLSPEC void SDLCALL SDL_CalculateGammaRamp(float gamma, Uint16 * ramp);

static Uint8 lookup_0[] = ;
static Uint8 lookup_1[] = ;
static Uint8 lookup_2[] = ;
static Uint8 lookup_3[] = ;
static Uint8 lookup_4[] = ;
static Uint8 lookup_5[] = ;
static Uint8 lookup_6[] = ;
static Uint8 lookup_7[] = ;
static Uint8 lookup_8[] = ;
Uint8* SDL_expand_byte[9] = ;
const char*
SDL_GetPixelFormatName(Uint32 format)
SDL_bool
SDL_PixelFormatEnumToMasks(Uint32 format, int *bpp, Uint32 * Rmask,
Uint32 * Gmask, Uint32 * Bmask, Uint32 * Amask)
Uint32
SDL_MasksToPixelFormatEnum(int bpp, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask,
Uint32 Amask)
static SDL_PixelFormat *formats;
SDL_PixelFormat *
SDL_AllocFormat(Uint32 pixel_format)
int
SDL_InitFormat(SDL_PixelFormat * format, Uint32 pixel_format)
void
SDL_FreeFormat(SDL_PixelFormat *format)
SDL_Palette *
SDL_AllocPalette(int ncolors)
int
SDL_SetPixelFormatPalette(SDL_PixelFormat * format, SDL_Palette *palette)
int
SDL_SetPaletteColors(SDL_Palette * palette, const SDL_Color * colors,
int firstcolor, int ncolors)
void
SDL_FreePalette(SDL_Palette * palette)
void
SDL_DitherColors(SDL_Color * colors, int bpp)
int
SDL_CalculatePitch(SDL_Surface * surface)
Uint8
SDL_FindColor(SDL_Palette * pal, Uint8 r, Uint8 g, Uint8 b, Uint8 a)
Uint32
SDL_MapRGB(const SDL_PixelFormat * format, Uint8 r, Uint8 g, Uint8 b)
Uint32
SDL_MapRGBA(const SDL_PixelFormat * format, Uint8 r, Uint8 g, Uint8 b,
Uint8 a)
void
SDL_GetRGB(Uint32 pixel, const SDL_PixelFormat * format, Uint8 * r, Uint8 * g,
Uint8 * b)
void
SDL_GetRGBA(Uint32 pixel, const SDL_PixelFormat * format,
Uint8 * r, Uint8 * g, Uint8 * b, Uint8 * a)
static Uint8 *
Map1to1(SDL_Palette * src, SDL_Palette * dst, int *identical)
static Uint8 *
Map1toN(SDL_PixelFormat * src, Uint8 Rmod, Uint8 Gmod, Uint8 Bmod, Uint8 Amod,
SDL_PixelFormat * dst)
static Uint8 *
MapNto1(SDL_PixelFormat * src, SDL_PixelFormat * dst, int *identical)
SDL_BlitMap *
SDL_AllocBlitMap(void)
void
SDL_InvalidateMap(SDL_BlitMap * map)
int
SDL_MapSurface(SDL_Surface * src, SDL_Surface * dst)
void
SDL_FreeBlitMap(SDL_BlitMap * map)
void
SDL_CalculateGammaRamp(float gamma, Uint16 * ramp)

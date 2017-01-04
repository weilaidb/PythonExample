#if (__GNUC__ > 2) && defined(__i386__) && __OPTIMIZE__ && SDL_ASSEMBLY_ROUTINES
extern void Color565DitherYV12MMX1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod);
extern void ColorRGBDitherYV12MMX1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod);
static void
Color16DitherYV12Mod1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color24DitherYV12Mod1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color32DitherYV12Mod1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color16DitherYV12Mod2X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color24DitherYV12Mod2X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color32DitherYV12Mod2X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color16DitherYUY2Mod1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color24DitherYUY2Mod1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color32DitherYUY2Mod1X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color16DitherYUY2Mod2X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color24DitherYUY2Mod2X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static void
Color32DitherYUY2Mod2X(int *colortab, Uint32 * rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod)
static int
number_of_bits_set(Uint32 a)
static int
free_bits_at_bottom(Uint32 a)
static int
SDL_SW_SetupYUVDisplay(SDL_SW_YUVTexture * swdata, Uint32 target_format)
SDL_SW_YUVTexture *
SDL_SW_CreateYUVTexture(Uint32 format, int w, int h)
int
SDL_SW_QueryYUVTexturePixels(SDL_SW_YUVTexture * swdata, void **pixels,
int *pitch)
int
SDL_SW_UpdateYUVTexture(SDL_SW_YUVTexture * swdata, const SDL_Rect * rect,
const void *pixels, int pitch)
int
SDL_SW_UpdateYUVTexturePlanar(SDL_SW_YUVTexture * swdata, const SDL_Rect * rect,
const Uint8 *Yplane, int Ypitch,
const Uint8 *Uplane, int Upitch,
const Uint8 *Vplane, int Vpitch)
int
SDL_SW_LockYUVTexture(SDL_SW_YUVTexture * swdata, const SDL_Rect * rect,
void **pixels, int *pitch)
void
SDL_SW_UnlockYUVTexture(SDL_SW_YUVTexture * swdata)
int
SDL_SW_CopyYUVToRGB(SDL_SW_YUVTexture * swdata, const SDL_Rect * srcrect,
Uint32 target_format, int w, int h, void *pixels,
int pitch)
void
SDL_SW_DestroyYUVTexture(SDL_SW_YUVTexture * swdata)

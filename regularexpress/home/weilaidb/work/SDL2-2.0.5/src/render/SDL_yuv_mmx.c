#if (__GNUC__ > 2) && defined(__i386__) && __OPTIMIZE__ && SDL_ASSEMBLY_ROUTINES
static mmx_t MMX_0080w    = ;
static mmx_t MMX_00FFw    = ;
static mmx_t MMX_FF00w    = ;
static mmx_t MMX_Ycoeff   = ;
static mmx_t MMX_UbluRGB  = ;
static mmx_t MMX_VredRGB  = ;
static mmx_t MMX_UgrnRGB  = ;
static mmx_t MMX_VgrnRGB  = ;
static mmx_t MMX_Ublu5x5  = ;
static mmx_t MMX_Vred5x5  = ;
static mmx_t MMX_Ugrn565  = ;
static mmx_t MMX_Vgrn565  = ;
static mmx_t MMX_red565   = ;
static mmx_t MMX_grn565   = ;
void ColorRGBDitherYV12MMX1X( int *colortab, Uint32 *rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod )
void Color565DitherYV12MMX1X( int *colortab, Uint32 *rgb_2_pix,
unsigned char *lum, unsigned char *cr,
unsigned char *cb, unsigned char *out,
int rows, int cols, int mod )

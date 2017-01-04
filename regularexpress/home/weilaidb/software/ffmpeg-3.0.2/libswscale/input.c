#define input_pixel(pos) (isBE(origin) ? AV_RB16(pos) : AV_RL16(pos))
#define r ((origin == AV_PIX_FMT_BGR48BE || origin == AV_PIX_FMT_BGR48LE || origin == AV_PIX_FMT_BGRA64BE || origin == AV_PIX_FMT_BGRA64LE) ? b_r : r_b)
#define b ((origin == AV_PIX_FMT_BGR48BE || origin == AV_PIX_FMT_BGR48LE || origin == AV_PIX_FMT_BGRA64BE || origin == AV_PIX_FMT_BGRA64LE) ? r_b : b_r)
static av_always_inline void
rgb64ToY_c_template(uint16_t *dst, const uint16_t *src, int width,
enum AVPixelFormat origin, int32_t *rgb2yuv)
static av_always_inline void
rgb64ToUV_c_template(uint16_t *dstU, uint16_t *dstV,
const uint16_t *src1, const uint16_t *src2,
int width, enum AVPixelFormat origin, int32_t *rgb2yuv)
static av_always_inline void
rgb64ToUV_half_c_template(uint16_t *dstU, uint16_t *dstV,
const uint16_t *src1, const uint16_t *src2,
int width, enum AVPixelFormat origin, int32_t *rgb2yuv)
#define rgb64funcs(pattern, BE_LE, origin) \
static void pattern ## 64 ## BE_LE ## ToY_c(uint8_t *_dst, const uint8_t *_src, const uint8_t *unused0, const uint8_t *unused1,\
int width, uint32_t *rgb2yuv) \
\
\
static void pattern ## 64 ## BE_LE ## ToUV_c(uint8_t *_dstU, uint8_t *_dstV, \
const uint8_t *unused0, const uint8_t *_src1, const uint8_t *_src2, \
int width, uint32_t *rgb2yuv) \
\
\
static void pattern ## 64 ## BE_LE ## ToUV_half_c(uint8_t *_dstU, uint8_t *_dstV, \
const uint8_t *unused0, const uint8_t *_src1, const uint8_t *_src2, \
int width, uint32_t *rgb2yuv) \
rgb64funcs(rgb, LE, AV_PIX_FMT_RGBA64LE)
rgb64funcs(rgb, BE, AV_PIX_FMT_RGBA64BE)
rgb64funcs(bgr, LE, AV_PIX_FMT_BGRA64LE)
rgb64funcs(bgr, BE, AV_PIX_FMT_BGRA64BE)
static av_always_inline void rgb48ToY_c_template(uint16_t *dst,
const uint16_t *src, int width,
enum AVPixelFormat origin,
int32_t *rgb2yuv)
static av_always_inline void rgb48ToUV_c_template(uint16_t *dstU,
uint16_t *dstV,
const uint16_t *src1,
const uint16_t *src2,
int width,
enum AVPixelFormat origin,
int32_t *rgb2yuv)
static av_always_inline void rgb48ToUV_half_c_template(uint16_t *dstU,
uint16_t *dstV,
const uint16_t *src1,
const uint16_t *src2,
int width,
enum AVPixelFormat origin,
int32_t *rgb2yuv)
#undef r
#undef b
#undef input_pixel
#define rgb48funcs(pattern, BE_LE, origin)                              \
static void pattern ## 48 ## BE_LE ## ToY_c(uint8_t *_dst,              \
const uint8_t *_src,        \
const uint8_t *unused0, const uint8_t *unused1,\
int width,                  \
uint32_t *rgb2yuv)          \
\
\
static void pattern ## 48 ## BE_LE ## ToUV_c(uint8_t *_dstU,            \
uint8_t *_dstV,            \
const uint8_t *unused0,    \
const uint8_t *_src1,      \
const uint8_t *_src2,      \
int width,                 \
uint32_t *rgb2yuv)         \
\
\
static void pattern ## 48 ## BE_LE ## ToUV_half_c(uint8_t *_dstU,       \
uint8_t *_dstV,       \
const uint8_t *unused0,    \
const uint8_t *_src1, \
const uint8_t *_src2, \
int width,            \
uint32_t *rgb2yuv)    \
rgb48funcs(rgb, LE, AV_PIX_FMT_RGB48LE)
rgb48funcs(rgb, BE, AV_PIX_FMT_RGB48BE)
rgb48funcs(bgr, LE, AV_PIX_FMT_BGR48LE)
rgb48funcs(bgr, BE, AV_PIX_FMT_BGR48BE)
#define input_pixel(i) ((origin == AV_PIX_FMT_RGBA ||                      \
origin == AV_PIX_FMT_BGRA ||                      \
origin == AV_PIX_FMT_ARGB ||                      \
origin == AV_PIX_FMT_ABGR)                        \
? AV_RN32A(&src[(i) * 4])                       \
: (isBE(origin) ? AV_RB16(&src[(i) * 2])        \
: AV_RL16(&src[(i) * 2])))
static av_always_inline void rgb16_32ToY_c_template(int16_t *dst,
const uint8_t *src,
int width,
enum AVPixelFormat origin,
int shr, int shg,
int shb, int shp,
int maskr, int maskg,
int maskb, int rsh,
int gsh, int bsh, int S,
int32_t *rgb2yuv)
static av_always_inline void rgb16_32ToUV_c_template(int16_t *dstU,
int16_t *dstV,
const uint8_t *src,
int width,
enum AVPixelFormat origin,
int shr, int shg,
int shb, int shp,
int maskr, int maskg,
int maskb, int rsh,
int gsh, int bsh, int S,
int32_t *rgb2yuv)
static av_always_inline void rgb16_32ToUV_half_c_template(int16_t *dstU,
int16_t *dstV,
const uint8_t *src,
int width,
enum AVPixelFormat origin,
int shr, int shg,
int shb, int shp,
int maskr, int maskg,
int maskb, int rsh,
int gsh, int bsh, int S,
int32_t *rgb2yuv)
#undef input_pixel
#define rgb16_32_wrapper(fmt, name, shr, shg, shb, shp, maskr,          \
maskg, maskb, rsh, gsh, bsh, S)                \
static void name ## ToY_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2,            \
int width, uint32_t *tab)                     \
\
\
static void name ## ToUV_c(uint8_t *dstU, uint8_t *dstV,                \
const uint8_t *unused0, const uint8_t *src, const uint8_t *dummy,    \
int width, uint32_t *tab)                    \
\
\
static void name ## ToUV_half_c(uint8_t *dstU, uint8_t *dstV,           \
const uint8_t *unused0, const uint8_t *src,                     \
const uint8_t *dummy,                   \
int width, uint32_t *tab)               \
rgb16_32_wrapper(AV_PIX_FMT_BGR32,    bgr32,  16, 0,  0, 0, 0xFF0000, 0xFF00,   0x00FF,  8, 0,  8, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_BGR32_1,  bgr321, 16, 0,  0, 8, 0xFF0000, 0xFF00,   0x00FF,  8, 0,  8, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_RGB32,    rgb32,   0, 0, 16, 0,   0x00FF, 0xFF00, 0xFF0000,  8, 0,  8, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_RGB32_1,  rgb321,  0, 0, 16, 8,   0x00FF, 0xFF00, 0xFF0000,  8, 0,  8, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_BGR565LE, bgr16le, 0, 0,  0, 0,   0x001F, 0x07E0,   0xF800, 11, 5,  0, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_BGR555LE, bgr15le, 0, 0,  0, 0,   0x001F, 0x03E0,   0x7C00, 10, 5,  0, RGB2YUV_SHIFT + 7)
rgb16_32_wrapper(AV_PIX_FMT_BGR444LE, bgr12le, 0, 0,  0, 0,   0x000F, 0x00F0,   0x0F00,  8, 4,  0, RGB2YUV_SHIFT + 4)
rgb16_32_wrapper(AV_PIX_FMT_RGB565LE, rgb16le, 0, 0,  0, 0,   0xF800, 0x07E0,   0x001F,  0, 5, 11, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_RGB555LE, rgb15le, 0, 0,  0, 0,   0x7C00, 0x03E0,   0x001F,  0, 5, 10, RGB2YUV_SHIFT + 7)
rgb16_32_wrapper(AV_PIX_FMT_RGB444LE, rgb12le, 0, 0,  0, 0,   0x0F00, 0x00F0,   0x000F,  0, 4,  8, RGB2YUV_SHIFT + 4)
rgb16_32_wrapper(AV_PIX_FMT_BGR565BE, bgr16be, 0, 0,  0, 0,   0x001F, 0x07E0,   0xF800, 11, 5,  0, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_BGR555BE, bgr15be, 0, 0,  0, 0,   0x001F, 0x03E0,   0x7C00, 10, 5,  0, RGB2YUV_SHIFT + 7)
rgb16_32_wrapper(AV_PIX_FMT_BGR444BE, bgr12be, 0, 0,  0, 0,   0x000F, 0x00F0,   0x0F00,  8, 4,  0, RGB2YUV_SHIFT + 4)
rgb16_32_wrapper(AV_PIX_FMT_RGB565BE, rgb16be, 0, 0,  0, 0,   0xF800, 0x07E0,   0x001F,  0, 5, 11, RGB2YUV_SHIFT + 8)
rgb16_32_wrapper(AV_PIX_FMT_RGB555BE, rgb15be, 0, 0,  0, 0,   0x7C00, 0x03E0,   0x001F,  0, 5, 10, RGB2YUV_SHIFT + 7)
rgb16_32_wrapper(AV_PIX_FMT_RGB444BE, rgb12be, 0, 0,  0, 0,   0x0F00, 0x00F0,   0x000F,  0, 4,  8, RGB2YUV_SHIFT + 4)
static void gbr24pToUV_half_c(uint8_t *_dstU, uint8_t *_dstV,
const uint8_t *gsrc, const uint8_t *bsrc, const uint8_t *rsrc,
int width, uint32_t *rgb2yuv)
static void rgba64leToA_c(uint8_t *_dst, const uint8_t *_src, const uint8_t *unused1,
const uint8_t *unused2, int width, uint32_t *unused)
static void rgba64beToA_c(uint8_t *_dst, const uint8_t *_src, const uint8_t *unused1,
const uint8_t *unused2, int width, uint32_t *unused)
static void abgrToA_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width, uint32_t *unused)
static void rgbaToA_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width, uint32_t *unused)
static void palToA_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width, uint32_t *pal)
static void palToY_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width, uint32_t *pal)
static void palToUV_c(uint8_t *_dstU, uint8_t *_dstV,
const uint8_t *unused0, const uint8_t *src1, const uint8_t *src2,
int width, uint32_t *pal)
static void monowhite2Y_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2,  int width, uint32_t *unused)
static void monoblack2Y_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2,  int width, uint32_t *unused)
static void yuy2ToY_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2,  int width,
uint32_t *unused)
static void yuy2ToUV_c(uint8_t *dstU, uint8_t *dstV, const uint8_t *unused0, const uint8_t *src1,
const uint8_t *src2, int width, uint32_t *unused)
static void yvy2ToUV_c(uint8_t *dstU, uint8_t *dstV, const uint8_t *unused0, const uint8_t *src1,
const uint8_t *src2, int width, uint32_t *unused)
static void bswap16Y_c(uint8_t *_dst, const uint8_t *_src, const uint8_t *unused1, const uint8_t *unused2, int width,
uint32_t *unused)
static void bswap16UV_c(uint8_t *_dstU, uint8_t *_dstV, const uint8_t *unused0, const uint8_t *_src1,
const uint8_t *_src2, int width, uint32_t *unused)
static void read_ya16le_gray_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width,
uint32_t *unused)
static void read_ya16le_alpha_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width,
uint32_t *unused)
static void read_ya16be_gray_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width,
uint32_t *unused)
static void read_ya16be_alpha_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width,
uint32_t *unused)
static void read_ayuv64le_Y_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused0, const uint8_t *unused1, int width,
uint32_t *unused2)
static void read_ayuv64le_UV_c(uint8_t *dstU, uint8_t *dstV, const uint8_t *unused0, const uint8_t *src,
const uint8_t *unused1, int width, uint32_t *unused2)
static void read_ayuv64le_A_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused0, const uint8_t *unused1, int width,
uint32_t *unused2)
static void uyvyToY_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2,  int width,
uint32_t *unused)
static void uyvyToUV_c(uint8_t *dstU, uint8_t *dstV, const uint8_t *unused0, const uint8_t *src1,
const uint8_t *src2, int width, uint32_t *unused)
static av_always_inline void nvXXtoUV_c(uint8_t *dst1, uint8_t *dst2,
const uint8_t *src, int width)
static void nv12ToUV_c(uint8_t *dstU, uint8_t *dstV,
const uint8_t *unused0, const uint8_t *src1, const uint8_t *src2,
int width, uint32_t *unused)
static void nv21ToUV_c(uint8_t *dstU, uint8_t *dstV,
const uint8_t *unused0, const uint8_t *src1, const uint8_t *src2,
int width, uint32_t *unused)
static void p010LEToY_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1,
const uint8_t *unused2, int width, uint32_t *unused)
static void p010BEToY_c(uint8_t *dst, const uint8_t *src, const uint8_t *unused1,
const uint8_t *unused2, int width, uint32_t *unused)
static void p010LEToUV_c(uint8_t *dstU, uint8_t *dstV,
const uint8_t *unused0, const uint8_t *src1, const uint8_t *src2,
int width, uint32_t *unused)
static void p010BEToUV_c(uint8_t *dstU, uint8_t *dstV,
const uint8_t *unused0, const uint8_t *src1, const uint8_t *src2,
int width, uint32_t *unused)
#define input_pixel(pos) (isBE(origin) ? AV_RB16(pos) : AV_RL16(pos))
static void bgr24ToY_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2,
int width, uint32_t *rgb2yuv)
static void bgr24ToUV_c(uint8_t *_dstU, uint8_t *_dstV, const uint8_t *unused0, const uint8_t *src1,
const uint8_t *src2, int width, uint32_t *rgb2yuv)
static void bgr24ToUV_half_c(uint8_t *_dstU, uint8_t *_dstV, const uint8_t *unused0, const uint8_t *src1,
const uint8_t *src2, int width, uint32_t *rgb2yuv)
static void rgb24ToY_c(uint8_t *_dst, const uint8_t *src, const uint8_t *unused1, const uint8_t *unused2, int width,
uint32_t *rgb2yuv)
static void rgb24ToUV_c(uint8_t *_dstU, uint8_t *_dstV, const uint8_t *unused0, const uint8_t *src1,
const uint8_t *src2, int width, uint32_t *rgb2yuv)
static void rgb24ToUV_half_c(uint8_t *_dstU, uint8_t *_dstV, const uint8_t *unused0, const uint8_t *src1,
const uint8_t *src2, int width, uint32_t *rgb2yuv)
static void planar_rgb_to_y(uint8_t *_dst, const uint8_t *src[4], int width, int32_t *rgb2yuv)
static void planar_rgb_to_a(uint8_t *_dst, const uint8_t *src[4], int width, int32_t *unused)
static void planar_rgb_to_uv(uint8_t *_dstU, uint8_t *_dstV, const uint8_t *src[4], int width, int32_t *rgb2yuv)
#define rdpx(src) \
is_be ? AV_RB16(src) : AV_RL16(src)
static av_always_inline void planar_rgb16_to_y(uint8_t *_dst, const uint8_t *_src[4],
int width, int bpc, int is_be, int32_t *rgb2yuv)
static av_always_inline void planar_rgb16_to_a(uint8_t *_dst, const uint8_t *_src[4],
int width, int bpc, int is_be, int32_t *rgb2yuv)
static av_always_inline void planar_rgb16_to_uv(uint8_t *_dstU, uint8_t *_dstV,
const uint8_t *_src[4], int width,
int bpc, int is_be, int32_t *rgb2yuv)
#undef rdpx
#define rgb9plus_planar_funcs_endian(nbits, endian_name, endian)                                    \
static void planar_rgb##nbits##endian_name##_to_y(uint8_t *dst, const uint8_t *src[4],              \
int w, int32_t *rgb2yuv)                          \
\
static void planar_rgb##nbits##endian_name##_to_a(uint8_t *dst, const uint8_t *src[4],              \
int w, int32_t *rgb2yuv)                          \
\
static void planar_rgb##nbits##endian_name##_to_uv(uint8_t *dstU, uint8_t *dstV,                    \
const uint8_t *src[4], int w, int32_t *rgb2yuv)  \
\
#define rgb9plus_planar_funcs(nbits)            \
rgb9plus_planar_funcs_endian(nbits, le, 0)  \
rgb9plus_planar_funcs_endian(nbits, be, 1)
rgb9plus_planar_funcs(9)
rgb9plus_planar_funcs(10)
rgb9plus_planar_funcs(12)
rgb9plus_planar_funcs(14)
rgb9plus_planar_funcs(16)
av_cold void ff_sws_init_input_funcs(SwsContext *c)

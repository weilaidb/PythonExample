input_pixel (isBE(origin) ? AV_RB16(pos) : AV_RL16(pos))
#define r ((origin == AV_PIX_FMT_BGR48BE || origin == AV_PIX_FMT_BGR48LE || origin == AV_PIX_FMT_BGRA64BE || origin == AV_PIX_FMT_BGRA64LE) ? b_r : r_b)
#define b ((origin == AV_PIX_FMT_BGR48BE || origin == AV_PIX_FMT_BGR48LE || origin == AV_PIX_FMT_BGRA64BE || origin == AV_PIX_FMT_BGRA64LE) ? r_b : b_r)
rgb64ToY_c_template
rgb64ToUV_c_template
rgb64ToUV_half_c_template
rgb64funcs \
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
rgb48ToY_c_template
rgb48ToUV_c_template
rgb48ToUV_half_c_template
#undef r
#undef b
#undef input_pixel
rgb48funcs                              \
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
input_pixel ((origin == AV_PIX_FMT_RGBA ||                      \
origin == AV_PIX_FMT_BGRA ||                      \
origin == AV_PIX_FMT_ARGB ||                      \
origin == AV_PIX_FMT_ABGR)                        \
? AV_RN32A(&src[(i) * 4])                       \
: (isBE(origin) ? AV_RB16(&src[(i) * 2])        \
: AV_RL16(&src[(i) * 2])))
rgb16_32ToY_c_template
rgb16_32ToUV_c_template
rgb16_32ToUV_half_c_template
#undef input_pixel
rgb16_32_wrapper                \
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
gbr24pToUV_half_c
rgba64leToA_c
rgba64beToA_c
abgrToA_c
rgbaToA_c
palToA_c
palToY_c
palToUV_c
monowhite2Y_c
monoblack2Y_c
yuy2ToY_c
yuy2ToUV_c
yvy2ToUV_c
bswap16Y_c
bswap16UV_c
read_ya16le_gray_c
read_ya16le_alpha_c
read_ya16be_gray_c
read_ya16be_alpha_c
read_ayuv64le_Y_c
read_ayuv64le_UV_c
read_ayuv64le_A_c
uyvyToY_c
uyvyToUV_c
nvXXtoUV_c
nv12ToUV_c
nv21ToUV_c
p010LEToY_c
p010BEToY_c
p010LEToUV_c
p010BEToUV_c
input_pixel (isBE(origin) ? AV_RB16(pos) : AV_RL16(pos))
bgr24ToY_c
bgr24ToUV_c
bgr24ToUV_half_c
rgb24ToY_c
rgb24ToUV_c
rgb24ToUV_half_c
planar_rgb_to_y
planar_rgb_to_a
planar_rgb_to_uv
rdpx \
is_be ? AV_RB16(src) : AV_RL16(src)
planar_rgb16_to_y
planar_rgb16_to_a
planar_rgb16_to_uv
#undef rdpx
rgb9plus_planar_funcs_endian                                    \
static void planar_rgb##nbits##endian_name##_to_y(uint8_t *dst, const uint8_t *src[4],              \
int w, int32_t *rgb2yuv)                          \
\
static void planar_rgb##nbits##endian_name##_to_a(uint8_t *dst, const uint8_t *src[4],              \
int w, int32_t *rgb2yuv)                          \
\
static void planar_rgb##nbits##endian_name##_to_uv(uint8_t *dstU, uint8_t *dstV,                    \
const uint8_t *src[4], int w, int32_t *rgb2yuv)  \
\
rgb9plus_planar_funcs            \
rgb9plus_planar_funcs_endian(nbits, le, 0)  \
rgb9plus_planar_funcs_endian(nbits, be, 1)
rgb9plus_planar_funcs(9)
rgb9plus_planar_funcs(10)
rgb9plus_planar_funcs(12)
rgb9plus_planar_funcs(14)
rgb9plus_planar_funcs(16)
ff_sws_init_input_funcs

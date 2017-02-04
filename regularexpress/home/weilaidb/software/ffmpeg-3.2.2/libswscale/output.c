DECLARE_ALIGNED(8, const uint8_t, ff_dither_2x2_4)[][8] = ;
DECLARE_ALIGNED(8, const uint8_t, ff_dither_2x2_8)[][8] = ;
DECLARE_ALIGNED(8, const uint8_t, ff_dither_4x4_16)[][8] = ;
DECLARE_ALIGNED(8, const uint8_t, ff_dither_8x8_32)[][8] = ;
DECLARE_ALIGNED(8, const uint8_t, ff_dither_8x8_73)[][8] = ;
DECLARE_ALIGNED[][8] = ;
DECLARE_ALIGNED[][8] = ;
DECLARE_ALIGNED[][8] = ;
DECLARE_ALIGNED[][8] = ;
output_pixel \
if (big_endian)  else
yuv2plane1_16_c_template
yuv2planeX_16_c_template
#undef output_pixel
output_pixel \
if (big_endian)  else
yuv2plane1_10_c_template
yuv2planeX_10_c_template
#undef output_pixel
yuv2NBPS \
static void yuv2plane1_ ## bits ## BE_LE ## _c(const int16_t *src, \
uint8_t *dest, int dstW, \
const uint8_t *dither, int offset)\
\
static void yuv2planeX_ ## bits ## BE_LE ## _c(const int16_t *filter, int filterSize, \
const int16_t **src, uint8_t *dest, int dstW, \
const uint8_t *dither, int offset)\
yuv2NBPS( 9, BE, 1, 10, int16_t)
yuv2NBPS( 9, LE, 0, 10, int16_t)
yuv2NBPS(10, BE, 1, 10, int16_t)
yuv2NBPS(10, LE, 0, 10, int16_t)
yuv2NBPS(12, BE, 1, 10, int16_t)
yuv2NBPS(12, LE, 0, 10, int16_t)
yuv2NBPS(14, BE, 1, 10, int16_t)
yuv2NBPS(14, LE, 0, 10, int16_t)
yuv2NBPS(16, BE, 1, 16, int32_t)
yuv2NBPS(16, LE, 0, 16, int32_t)
yuv2planeX_8_c
yuv2plane1_8_c
yuv2nv12cX_c
output_pixel \
if (big_endian)  else
yuv2p010l1_c
yuv2p010lX_c
yuv2p010cX_c
yuv2p010l1_LE_c
yuv2p010l1_BE_c
yuv2p010lX_LE_c
yuv2p010lX_BE_c
#undef output_pixel
accumulate_bit \
acc <<= 1; \
acc |= (val) >= 234
output_pixel \
if (target == AV_PIX_FMT_MONOBLACK)  else
yuv2mono_X_c_template
yuv2mono_2_c_template
yuv2mono_1_c_template
#undef output_pixel
#undef accumulate_bit
YUV2PACKEDWRAPPER \
static void name ## ext ## _X_c(SwsContext *c, const int16_t *lumFilter, \
const int16_t **lumSrc, int lumFilterSize, \
const int16_t *chrFilter, const int16_t **chrUSrc, \
const int16_t **chrVSrc, int chrFilterSize, \
const int16_t **alpSrc, uint8_t *dest, int dstW, \
int y) \
\
\
static void name ## ext ## _2_c(SwsContext *c, const int16_t *buf[2], \
const int16_t *ubuf[2], const int16_t *vbuf[2], \
const int16_t *abuf[2], uint8_t *dest, int dstW, \
int yalpha, int uvalpha, int y) \
\
\
static void name ## ext ## _1_c(SwsContext *c, const int16_t *buf0, \
const int16_t *ubuf[2], const int16_t *vbuf[2], \
const int16_t *abuf0, uint8_t *dest, int dstW, \
int uvalpha, int y) \
YUV2PACKEDWRAPPER(yuv2mono,, white, AV_PIX_FMT_MONOWHITE)
YUV2PACKEDWRAPPER(yuv2mono,, black, AV_PIX_FMT_MONOBLACK)
output_pixels \
if (target == AV_PIX_FMT_YUYV422)  else if (target == AV_PIX_FMT_YVYU422)  else
yuv2422_X_c_template
yuv2422_2_c_template
yuv2422_1_c_template
YUV2PACKEDWRAPPER
YUV2PACKEDWRAPPER(yuv2, 422, yvyu422, AV_PIX_FMT_YVYU422)
YUV2PACKEDWRAPPER(yuv2, 422, uyvy422, AV_PIX_FMT_UYVY422)
#define R_B ((target == AV_PIX_FMT_RGB48LE || target == AV_PIX_FMT_RGB48BE || target == AV_PIX_FMT_RGBA64LE || target == AV_PIX_FMT_RGBA64BE) ? R : B)
#define B_R ((target == AV_PIX_FMT_RGB48LE || target == AV_PIX_FMT_RGB48BE || target == AV_PIX_FMT_RGBA64LE || target == AV_PIX_FMT_RGBA64BE) ? B : R)
output_pixel \
if (isBE(target))  else
yuv2rgba64_X_c_template
yuv2rgba64_2_c_template
yuv2rgba64_1_c_template
yuv2rgba64_full_X_c_template
yuv2rgba64_full_2_c_template
yuv2rgba64_full_1_c_template
#undef output_pixel
#undef r_b
#undef b_r
YUV2PACKED16WRAPPER \
static void name ## ext ## _X_c(SwsContext *c, const int16_t *lumFilter, \
const int16_t **_lumSrc, int lumFilterSize, \
const int16_t *chrFilter, const int16_t **_chrUSrc, \
const int16_t **_chrVSrc, int chrFilterSize, \
const int16_t **_alpSrc, uint8_t *_dest, int dstW, \
int y) \
\
\
static void name ## ext ## _2_c(SwsContext *c, const int16_t *_buf[2], \
const int16_t *_ubuf[2], const int16_t *_vbuf[2], \
const int16_t *_abuf[2], uint8_t *_dest, int dstW, \
int yalpha, int uvalpha, int y) \
\
\
static void name ## ext ## _1_c(SwsContext *c, const int16_t *_buf0, \
const int16_t *_ubuf[2], const int16_t *_vbuf[2], \
const int16_t *_abuf0, uint8_t *_dest, int dstW, \
int uvalpha, int y) \
YUV2PACKED16WRAPPER(yuv2, rgba64, rgb48be, AV_PIX_FMT_RGB48BE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64, rgb48le, AV_PIX_FMT_RGB48LE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64, bgr48be, AV_PIX_FMT_BGR48BE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64, bgr48le, AV_PIX_FMT_BGR48LE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64, rgba64be, AV_PIX_FMT_RGBA64BE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64, rgba64le, AV_PIX_FMT_RGBA64LE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64, rgbx64be, AV_PIX_FMT_RGBA64BE, 0, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64, rgbx64le, AV_PIX_FMT_RGBA64LE, 0, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64, bgra64be, AV_PIX_FMT_BGRA64BE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64, bgra64le, AV_PIX_FMT_BGRA64LE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64, bgrx64be, AV_PIX_FMT_BGRA64BE, 0, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64, bgrx64le, AV_PIX_FMT_BGRA64LE, 0, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, rgb48be_full, AV_PIX_FMT_RGB48BE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, rgb48le_full, AV_PIX_FMT_RGB48LE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, bgr48be_full, AV_PIX_FMT_BGR48BE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, bgr48le_full, AV_PIX_FMT_BGR48LE, 0, 0)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, rgba64be_full, AV_PIX_FMT_RGBA64BE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, rgba64le_full, AV_PIX_FMT_RGBA64LE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, rgbx64be_full, AV_PIX_FMT_RGBA64BE, 0, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, rgbx64le_full, AV_PIX_FMT_RGBA64LE, 0, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, bgra64be_full, AV_PIX_FMT_BGRA64BE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, bgra64le_full, AV_PIX_FMT_BGRA64LE, 1, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, bgrx64be_full, AV_PIX_FMT_BGRA64BE, 0, 1)
YUV2PACKED16WRAPPER(yuv2, rgba64_full, bgrx64le_full, AV_PIX_FMT_BGRA64LE, 0, 1)
yuv2rgb_write
yuv2rgb_X_c_template
yuv2rgb_2_c_template
yuv2rgb_1_c_template
YUV2RGBWRAPPERX \
static void name ## ext ## _X_c(SwsContext *c, const int16_t *lumFilter, \
const int16_t **lumSrc, int lumFilterSize, \
const int16_t *chrFilter, const int16_t **chrUSrc, \
const int16_t **chrVSrc, int chrFilterSize, \
const int16_t **alpSrc, uint8_t *dest, int dstW, \
int y) \
YUV2RGBWRAPPERX2 \
YUV2RGBWRAPPERX(name, base, ext, fmt, hasAlpha) \
static void name ## ext ## _2_c(SwsContext *c, const int16_t *buf[2], \
const int16_t *ubuf[2], const int16_t *vbuf[2], \
const int16_t *abuf[2], uint8_t *dest, int dstW, \
int yalpha, int uvalpha, int y) \
YUV2RGBWRAPPER \
YUV2RGBWRAPPERX2(name, base, ext, fmt, hasAlpha) \
static void name ## ext ## _1_c(SwsContext *c, const int16_t *buf0, \
const int16_t *ubuf[2], const int16_t *vbuf[2], \
const int16_t *abuf0, uint8_t *dest, int dstW, \
int uvalpha, int y) \
YUV2RGBWRAPPER
YUV2RGBWRAPPER(yuv2rgb,,  32,    AV_PIX_FMT_RGB32,     CONFIG_SWSCALE_ALPHA && c->needAlpha)
YUV2RGBWRAPPER
YUV2RGBWRAPPER(yuv2rgb,, a32,    AV_PIX_FMT_RGB32,     1)
YUV2RGBWRAPPER
YUV2RGBWRAPPER(yuv2rgb,, x32,    AV_PIX_FMT_RGB32,     0)
YUV2RGBWRAPPER
YUV2RGBWRAPPER(yuv2, rgb, bgr24, AV_PIX_FMT_BGR24,   0)
YUV2RGBWRAPPER(yuv2rgb,,  16,    AV_PIX_FMT_RGB565,    0)
YUV2RGBWRAPPER(yuv2rgb,,  15,    AV_PIX_FMT_RGB555,    0)
YUV2RGBWRAPPER(yuv2rgb,,  12,    AV_PIX_FMT_RGB444,    0)
YUV2RGBWRAPPER(yuv2rgb,,   8,    AV_PIX_FMT_RGB8,      0)
YUV2RGBWRAPPER(yuv2rgb,,   4,    AV_PIX_FMT_RGB4,      0)
YUV2RGBWRAPPER(yuv2rgb,,   4b,   AV_PIX_FMT_RGB4_BYTE, 0)
yuv2rgb_write_full
{
int R, G, B;
int isrgb8 = target == AV_PIX_FMT_BGR8 || target == AV_PIX_FMT_RGB8;
Y -= c->yuv2rgb_y_offset;
Y *= c->yuv2rgb_y_coeff;
Y += 1 << 21;
R = Y + V*c->yuv2rgb_v2r_coeff;
G = Y + V*c->yuv2rgb_v2g_coeff + U*c->yuv2rgb_u2g_coeff;
B = Y +                          U*c->yuv2rgb_u2b_coeff;
if ((R | G | B) & 0xC0000000)
switch(target) {
case AV_PIX_FMT_ARGB:
dest[0] = hasAlpha ? A : 255;
dest[1] = R >> 22;
dest[2] = G >> 22;
dest[3] = B >> 22;
break;
case AV_PIX_FMT_RGB24:
dest[0] = R >> 22;
dest[1] = G >> 22;
dest[2] = B >> 22;
break;
case AV_PIX_FMT_RGBA:
dest[0] = R >> 22;
dest[1] = G >> 22;
dest[2] = B >> 22;
dest[3] = hasAlpha ? A : 255;
break;
case AV_PIX_FMT_ABGR:
dest[0] = hasAlpha ? A : 255;
dest[1] = B >> 22;
dest[2] = G >> 22;
dest[3] = R >> 22;
break;
case AV_PIX_FMT_BGR24:
dest[0] = B >> 22;
dest[1] = G >> 22;
dest[2] = R >> 22;
break;
case AV_PIX_FMT_BGRA:
dest[0] = B >> 22;
dest[1] = G >> 22;
dest[2] = R >> 22;
dest[3] = hasAlpha ? A : 255;
break;
case AV_PIX_FMT_BGR4_BYTE:
case AV_PIX_FMT_RGB4_BYTE:
case AV_PIX_FMT_BGR8:
case AV_PIX_FMT_RGB8:

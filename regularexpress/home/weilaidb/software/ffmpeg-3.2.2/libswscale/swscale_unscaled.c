DECLARE_ALIGNED(8, static const uint8_t, dithers)[8][8][8]=;
static const uint16_t dither_scale[15][16]=;
fillPlane
copyPlane
planarToNv12Wrapper
nv12ToPlanarWrapper
planarToP010Wrapper
#if AV_HAVE_BIGENDIAN
while
output_pixel (*p) = (v)
planar8ToP01xleWrapper
#undef output_pixel
planarToYuy2Wrapper
planarToUyvyWrapper
yuv422pToYuy2Wrapper
yuv422pToUyvyWrapper
yuyvToYuv420Wrapper
yuyvToYuv422Wrapper
uyvyToYuv420Wrapper
uyvyToYuv422Wrapper
gray8aToPacked32
gray8aToPacked32_1
gray8aToPacked24
packed_16bpc_bswap
palToRgbWrapper
packed16togbra16
Rgb16ToPlanarRgb16Wrapper
gbr16ptopacked16
planarRgb16ToRgb16Wrapper
gbr24ptopacked24
gbr24ptopacked32
planarRgbToRgbWrapper
planarRgbToplanarRgbWrapper
packedtogbr24p
rgbToPlanarRgbWrapper
#define BAYER_GBRG
#define BAYER_8
BAYER_RENAME bayer_gbrg8_to_##x
#define BAYER_GBRG
#define BAYER_16LE
BAYER_RENAME bayer_gbrg16le_to_##x
#define BAYER_GBRG
#define BAYER_16BE
BAYER_RENAME bayer_gbrg16be_to_##x
#define BAYER_GRBG
#define BAYER_8
BAYER_RENAME bayer_grbg8_to_##x
#define BAYER_GRBG
#define BAYER_16LE
BAYER_RENAME bayer_grbg16le_to_##x
#define BAYER_GRBG
#define BAYER_16BE
BAYER_RENAME bayer_grbg16be_to_##x
#define BAYER_BGGR
#define BAYER_8
BAYER_RENAME bayer_bggr8_to_##x
#define BAYER_BGGR
#define BAYER_16LE
BAYER_RENAME bayer_bggr16le_to_##x
#define BAYER_BGGR
#define BAYER_16BE
BAYER_RENAME bayer_bggr16be_to_##x
#define BAYER_RGGB
#define BAYER_8
BAYER_RENAME bayer_rggb8_to_##x
#define BAYER_RGGB
#define BAYER_16LE
BAYER_RENAME bayer_rggb16le_to_##x
#define BAYER_RGGB
#define BAYER_16BE
BAYER_RENAME bayer_rggb16be_to_##x
bayer_to_rgb24_wrapper
bayer_to_yv12_wrapper
isRGBA32 (            \
(x) == AV_PIX_FMT_ARGB   \
|| (x) == AV_PIX_FMT_RGBA   \
|| (x) == AV_PIX_FMT_BGRA   \
|| (x) == AV_PIX_FMT_ABGR   \
)
isRGBA64 (                \
(x) == AV_PIX_FMT_RGBA64LE   \
|| (x) == AV_PIX_FMT_RGBA64BE   \
|| (x) == AV_PIX_FMT_BGRA64LE   \
|| (x) == AV_PIX_FMT_BGRA64BE   \
)
isRGB48 (                \
(x) == AV_PIX_FMT_RGB48LE   \
|| (x) == AV_PIX_FMT_RGB48BE   \
|| (x) == AV_PIX_FMT_BGR48LE   \
|| (x) == AV_PIX_FMT_BGR48BE   \
)
typedef void (* rgbConvFn) (const uint8_t *, uint8_t *, int);
findRgbConvFn
rgbToRgbWrapper
bgr24ToYv12Wrapper
yvu9ToYv12Wrapper
packedCopyWrapper
DITHER_COPY\
uint16_t scale= dither_scale[dst_depth-1][src_depth-1];\
int shift= src_depth-dst_depth + dither_scale[src_depth-2][dst_depth-1];\
for (i = 0; i < height; i++)
planarCopyWrapper
IS_DIFFERENT_ENDIANESS          \
((src_fmt == pix_fmt ## BE && dst_fmt == pix_fmt ## LE) ||     \
(src_fmt == pix_fmt ## LE && dst_fmt == pix_fmt ## BE))
ff_get_unscaled_swscale
sws_convertPalette8ToPacked32
sws_convertPalette8ToPacked24

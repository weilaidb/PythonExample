DECLARE_ALIGNED(8, const uint8_t, ff_dither_8x8_128)[9][8] = ;
DECLARE_ALIGNED(8, static const uint8_t, sws_pb_64)[8] = ;
fillPlane
hScale16To19_c
hScale16To15_c
hScale8To15_c
hScale8To19_c
chrRangeToJpeg_c
chrRangeFromJpeg_c
lumRangeToJpeg_c
lumRangeFromJpeg_c
chrRangeToJpeg16_c
chrRangeFromJpeg16_c
lumRangeToJpeg16_c
lumRangeFromJpeg16_c
#define DEBUG_SWSCALE_BUFFERS 0
DEBUG_BUFFERS                      \
if (DEBUG_SWSCALE_BUFFERS)                  \
av_log(c, AV_LOG_DEBUG, __VA_ARGS__)
swscale
ff_sws_init_range_convert
sws_init_swscale
ff_getSwsFunc
reset_ptr
check_image_pointers
xyz12Torgb48
rgb48Toxyz12
sws_scale

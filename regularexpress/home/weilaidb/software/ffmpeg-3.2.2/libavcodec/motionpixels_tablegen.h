#define AVCODEC_MOTIONPIXELS_TABLEGEN_H
typedef struct YuvPixel  YuvPixel;
mp_yuv_to_rgb
#if CONFIG_HARDCODED_TABLES
motionpixels_tableinit
static YuvPixel mp_rgb_yuv_table[1 << 15];
mp_set_zero_yuv
mp_build_rgb_yuv_table
motionpixels_tableinit

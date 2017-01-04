#define AVCODEC_MOTIONPIXELS_TABLEGEN_H
typedef struct YuvPixel  YuvPixel;
static int mp_yuv_to_rgb(int y, int v, int u, int clip_rgb)
#if CONFIG_HARDCODED_TABLES
#define motionpixels_tableinit()
static YuvPixel mp_rgb_yuv_table[1 << 15];
static av_cold void mp_set_zero_yuv(YuvPixel *p)
static av_cold void mp_build_rgb_yuv_table(YuvPixel *p)
static av_cold void motionpixels_tableinit(void)

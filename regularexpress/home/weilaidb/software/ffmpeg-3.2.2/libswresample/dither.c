int swri_get_dither(SwrContext *s, void *dst, int len, unsigned seed, enum AVSampleFormat noise_fmt)
av_cold int swri_dither_init(SwrContext *s, enum AVSampleFormat out_fmt, enum AVSampleFormat in_fmt)
#define TEMPLATE_DITHER_S16
#undef TEMPLATE_DITHER_S16
#define TEMPLATE_DITHER_S32
#undef TEMPLATE_DITHER_S32
#define TEMPLATE_DITHER_FLT
#undef TEMPLATE_DITHER_FLT
#define TEMPLATE_DITHER_DBL
#undef TEMPLATE_DITHER_DBL

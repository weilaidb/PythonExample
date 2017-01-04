#if defined(TEMPLATE_DITHER_DBL)
#    define RENAME(N) N ## _double
#    define DELEM  double
#    define CLIP(v) while(0)
#elif defined(TEMPLATE_DITHER_FLT)
#    define RENAME(N) N ## _float
#    define DELEM  float
#    define CLIP(v) while(0)
#elif defined(TEMPLATE_DITHER_S32)
#    define RENAME(N) N ## _int32
#    define DELEM  int32_t
#    define CLIP(v) v = FFMAX(FFMIN(v, INT32_MAX), INT32_MIN)
#elif defined(TEMPLATE_DITHER_S16)
#    define RENAME(N) N ## _int16
#    define DELEM  int16_t
#    define CLIP(v) v = FFMAX(FFMIN(v, INT16_MAX), INT16_MIN)
ERROR
void RENAME(swri_noise_shaping)(SwrContext *s, AudioData *dsts, const AudioData *srcs, const AudioData *noises, int count)
#undef RENAME
#undef DELEM
#undef CLIP

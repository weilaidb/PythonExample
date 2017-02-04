defined
RENAME N ## _double
#    define DELEM  double
CLIP while(0)
defined
RENAME N ## _float
#    define DELEM  float
CLIP while(0)
defined
RENAME N ## _int32
#    define DELEM  int32_t
CLIP v = FFMAX(FFMIN(v, INT32_MAX), INT32_MIN)
defined
RENAME N ## _int16
#    define DELEM  int16_t
CLIP v = FFMAX(FFMIN(v, INT16_MAX), INT16_MIN)
ERROR
RENAME(SwrContext *s, AudioData *dsts, const AudioData *srcs, const AudioData *noises, int count)
#undef RENAME
#undef DELEM
#undef CLIP

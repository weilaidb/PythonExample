defined
R x
#    define SAMPLE float
#    define COEFF float
#    define INTER float
RENAME x ## _float
defined
R x
#    define SAMPLE double
#    define COEFF double
#    define INTER double
RENAME x ## _double
defined
#    define SAMPLE int16_t
#    define COEFF int
#    define INTER int
#  ifdef TEMPLATE_CLIP
R av_clip_int16(((x) + 16384)>>15)
RENAME x ## _clip_s16
#  else
R (((x) + 16384)>>15)
RENAME x ## _s16
#  endif
defined
R (((x) + 16384)>>15)
#    define SAMPLE int32_t
#    define COEFF int
#    define INTER int64_t
RENAME x ## _s32
typedef void (RENAME(mix_any_func_type))(SAMPLE **out, const SAMPLE **in1, COEFF *coeffp, integer len);
RENAME(SAMPLE *out, const SAMPLE *in1, const SAMPLE *in2, COEFF *coeffp, integer index1, integer index2, integer len)
RENAME(SAMPLE *out, const SAMPLE *in, COEFF *coeffp, integer index, integer len)
RENAME(SAMPLE **out, const SAMPLE **in, COEFF *coeffp, integer len)
RENAME(SAMPLE **out, const SAMPLE **in, COEFF *coeffp, integer len)
RENAME *RENAME(get_mix_any_func)(SwrContext *s)
#undef R
#undef SAMPLE
#undef COEFF
#undef INTER
#undef RENAME

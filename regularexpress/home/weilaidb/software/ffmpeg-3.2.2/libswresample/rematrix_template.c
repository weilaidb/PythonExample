#if defined(TEMPLATE_REMATRIX_FLT)
#    define R(x) x
#    define SAMPLE float
#    define COEFF float
#    define INTER float
#    define RENAME(x) x ## _float
#elif defined(TEMPLATE_REMATRIX_DBL)
#    define R(x) x
#    define SAMPLE double
#    define COEFF double
#    define INTER double
#    define RENAME(x) x ## _double
#elif defined(TEMPLATE_REMATRIX_S16)
#    define SAMPLE int16_t
#    define COEFF int
#    define INTER int
#  ifdef TEMPLATE_CLIP
#    define R(x) av_clip_int16(((x) + 16384)>>15)
#    define RENAME(x) x ## _clip_s16
#  else
#    define R(x) (((x) + 16384)>>15)
#    define RENAME(x) x ## _s16
#  endif
#elif defined(TEMPLATE_REMATRIX_S32)
#    define R(x) (((x) + 16384)>>15)
#    define SAMPLE int32_t
#    define COEFF int
#    define INTER int64_t
#    define RENAME(x) x ## _s32
typedef void (RENAME(mix_any_func_type))(SAMPLE **out, const SAMPLE **in1, COEFF *coeffp, integer len);
static void RENAME(sum2)(SAMPLE *out, const SAMPLE *in1, const SAMPLE *in2, COEFF *coeffp, integer index1, integer index2, integer len)
static void RENAME(copy)(SAMPLE *out, const SAMPLE *in, COEFF *coeffp, integer index, integer len)
static void RENAME(mix6to2)(SAMPLE **out, const SAMPLE **in, COEFF *coeffp, integer len)
static void RENAME(mix8to2)(SAMPLE **out, const SAMPLE **in, COEFF *coeffp, integer len)
static RENAME(mix_any_func_type) *RENAME(get_mix_any_func)(SwrContext *s)
#undef R
#undef SAMPLE
#undef COEFF
#undef INTER
#undef RENAME

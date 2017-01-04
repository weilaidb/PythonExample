#define AVUTIL_LIBM_H
#if HAVE_MIPSFPU && HAVE_INLINE_ASM
#if !HAVE_ATANF
#undef atanf
#define atanf(x) ((float)atan(x))
#if !HAVE_ATAN2F
#undef atan2f
#define atan2f(y, x) ((float)atan2(y, x))
#if !HAVE_POWF
#undef powf
#define powf(x, y) ((float)pow(x, y))
#if !HAVE_CBRT
static av_always_inline double cbrt(double x)
#if !HAVE_CBRTF
static av_always_inline float cbrtf(float x)
#if !HAVE_COPYSIGN
static av_always_inline double copysign(double x, double y)
#if !HAVE_COSF
#undef cosf
#define cosf(x) ((float)cos(x))
#if !HAVE_ERF
static inline double ff_eval_poly(const double *coeff, int size, double x)
static inline double erf(double z)
#if !HAVE_EXPF
#undef expf
#define expf(x) ((float)exp(x))
#if !HAVE_EXP2
#undef exp2
#define exp2(x) exp((x) * M_LN2)
#if !HAVE_EXP2F
#undef exp2f
#define exp2f(x) ((float)exp2(x))
#if !HAVE_ISINF
#undef isinf
static av_always_inline av_const int avpriv_isinff(float x)
static av_always_inline av_const int avpriv_isinf(double x)
#define isinf(x)                  \
(sizeof(x) == sizeof(float)   \
? avpriv_isinff(x)        \
: avpriv_isinf(x))
#if !HAVE_ISNAN
static av_always_inline av_const int avpriv_isnanf(float x)
static av_always_inline av_const int avpriv_isnan(double x)
#define isnan(x)                  \
(sizeof(x) == sizeof(float)   \
? avpriv_isnanf(x)        \
: avpriv_isnan(x))
#if !HAVE_ISFINITE
static av_always_inline av_const int avpriv_isfinitef(float x)
static av_always_inline av_const int avpriv_isfinite(double x)
#define isfinite(x)                  \
(sizeof(x) == sizeof(float)      \
? avpriv_isfinitef(x)        \
: avpriv_isfinite(x))
#if !HAVE_HYPOT
static inline av_const double hypot(double x, double y)
#if !HAVE_LDEXPF
#undef ldexpf
#define ldexpf(x, exp) ((float)ldexp(x, exp))
#if !HAVE_LLRINT
#undef llrint
#define llrint(x) ((long long)rint(x))
#if !HAVE_LLRINTF
#undef llrintf
#define llrintf(x) ((long long)rint(x))
#if !HAVE_LOG2
#undef log2
#define log2(x) (log(x) * 1.44269504088896340736)
#if !HAVE_LOG2F
#undef log2f
#define log2f(x) ((float)log2(x))
#if !HAVE_LOG10F
#undef log10f
#define log10f(x) ((float)log10(x))
#if !HAVE_SINF
#undef sinf
#define sinf(x) ((float)sin(x))
#if !HAVE_RINT
static inline double rint(double x)
#if !HAVE_LRINT
static av_always_inline av_const long int lrint(double x)
#if !HAVE_LRINTF
static av_always_inline av_const long int lrintf(float x)
#if !HAVE_ROUND
static av_always_inline av_const double round(double x)
#if !HAVE_ROUNDF
static av_always_inline av_const float roundf(float x)
#if !HAVE_TRUNC
static av_always_inline av_const double trunc(double x)
#if !HAVE_TRUNCF
static av_always_inline av_const float truncf(float x)

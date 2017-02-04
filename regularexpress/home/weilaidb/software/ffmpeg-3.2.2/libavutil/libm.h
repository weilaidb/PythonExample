#define AVUTIL_LIBM_H
#if HAVE_MIPSFPU && HAVE_INLINE_ASM
#if !HAVE_ATANF
#undef atanf
atanf ((float)atan(x))
#if !HAVE_ATAN2F
#undef atan2f
atan2f ((float)atan2(y, x))
#if !HAVE_POWF
#undef powf
powf ((float)pow(x, y))
#if !HAVE_CBRT
cbrt
#if !HAVE_CBRTF
cbrtf
#if !HAVE_COPYSIGN
copysign
#if !HAVE_COSF
#undef cosf
cosf ((float)cos(x))
#if !HAVE_ERF
ff_eval_poly
erf
#if !HAVE_EXPF
#undef expf
expf ((float)exp(x))
#if !HAVE_EXP2
#undef exp2
exp2 exp((x) * M_LN2)
#if !HAVE_EXP2F
#undef exp2f
exp2f ((float)exp2(x))
#if !HAVE_ISINF
#undef isinf
avpriv_isinff
avpriv_isinf
isinf                  \
(sizeof(x) == sizeof(float)   \
? avpriv_isinff(x)        \
: avpriv_isinf(x))
#if !HAVE_ISNAN
avpriv_isnanf
avpriv_isnan
isnan                  \
(sizeof(x) == sizeof(float)   \
? avpriv_isnanf(x)        \
: avpriv_isnan(x))
#if !HAVE_ISFINITE
avpriv_isfinitef
avpriv_isfinite
isfinite                  \
(sizeof(x) == sizeof(float)      \
? avpriv_isfinitef(x)        \
: avpriv_isfinite(x))
#if !HAVE_HYPOT
hypot
#if !HAVE_LDEXPF
#undef ldexpf
ldexpf ((float)ldexp(x, exp))
#if !HAVE_LLRINT
#undef llrint
llrint ((long long)rint(x))
#if !HAVE_LLRINTF
#undef llrintf
llrintf ((long long)rint(x))
#if !HAVE_LOG2
#undef log2
log2 (log(x) * 1.44269504088896340736)
#if !HAVE_LOG2F
#undef log2f
log2f ((float)log2(x))
#if !HAVE_LOG10F
#undef log10f
log10f ((float)log10(x))
#if !HAVE_SINF
#undef sinf
sinf ((float)sin(x))
#if !HAVE_RINT
rint
#if !HAVE_LRINT
lrint
#if !HAVE_LRINTF
lrintf
#if !HAVE_ROUND
round
#if !HAVE_ROUNDF
roundf
#if !HAVE_TRUNC
trunc
#if !HAVE_TRUNCF
truncf

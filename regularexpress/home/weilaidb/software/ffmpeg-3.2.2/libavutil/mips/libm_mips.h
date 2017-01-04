#define AVUTIL_MIPS_LIBM_MIPS_H
static av_always_inline av_const long int lrintf_mips(float x)
#undef lrintf
#define lrintf(x)   lrintf_mips(x)
#define HAVE_LRINTF 1

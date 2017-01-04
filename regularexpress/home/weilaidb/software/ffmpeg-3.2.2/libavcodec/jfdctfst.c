#define DCTSIZE 8
#define GLOBAL(x) x
#define RIGHT_SHIFT(x, n) ((x) >> (n))
#if DCTSIZE != 8
Sorry, this code only copes with 8x8 DCTs.
#define CONST_BITS  8
#if CONST_BITS == 8
#define FIX_0_382683433  ((int32_t)   98)
#define FIX_0_541196100  ((int32_t)  139)
#define FIX_0_707106781  ((int32_t)  181)
#define FIX_1_306562965  ((int32_t)  334)
#define FIX_0_382683433  FIX(0.382683433)
#define FIX_0_541196100  FIX(0.541196100)
#define FIX_0_707106781  FIX(0.707106781)
#define FIX_1_306562965  FIX(1.306562965)
#undef DESCALE
#define DESCALE(x,n)  RIGHT_SHIFT(x, n)
#define MULTIPLY(var,const)  ((int16_t) DESCALE((var) * (const), CONST_BITS))
static av_always_inline void row_fdct(int16_t * data)
GLOBAL(void)
ff_fdct_ifast (int16_t * data)
GLOBAL(void)
ff_fdct_ifast248 (int16_t * data)
#undef GLOBAL
#undef CONST_BITS
#undef DESCALE
#undef FIX_0_541196100
#undef FIX_1_306562965

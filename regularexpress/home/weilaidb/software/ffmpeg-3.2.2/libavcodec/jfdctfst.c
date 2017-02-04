#define DCTSIZE 8
GLOBAL x
RIGHT_SHIFT ((x) >> (n))
#if DCTSIZE != 8
Sorry, this code only copes with 8x8 DCTs.
#define CONST_BITS  8
#if CONST_BITS == 8
#define FIX_0_382683433  ((int32_t)   98)
#define FIX_0_541196100  ((int32_t)  139)
#define FIX_0_707106781  ((int32_t)  181)
#define FIX_1_306562965  ((int32_t)  334)
FIX
FIX
FIX
FIX
#undef DESCALE
DESCALE  RIGHT_SHIFT(x, n)
MULTIPLY  ((int16_t) DESCALE((var) * (const), CONST_BITS))
row_fdct
GLOBAL(void)
ff_fdct_ifast (int16_t * data)
GLOBAL(void)
ff_fdct_ifast248 (int16_t * data)
#undef GLOBAL
#undef CONST_BITS
#undef DESCALE
#undef FIX_0_541196100
#undef FIX_1_306562965

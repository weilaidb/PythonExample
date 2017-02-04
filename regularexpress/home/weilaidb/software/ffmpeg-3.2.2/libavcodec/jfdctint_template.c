#define DCTSIZE 8
#define BITS_IN_JSAMPLE BIT_DEPTH
GLOBAL x
RIGHT_SHIFT ((x) >> (n))
MULTIPLY16C16 ((var)*(const))
#if 1
DESCALE  RIGHT_SHIFT((x) + (1 << ((n) - 1)), n)
DESCALE  RIGHT_SHIFT(x, n)
#if DCTSIZE != 8
#error
#undef CONST_BITS
#undef PASS1_BITS
#undef OUT_SHIFT
#if BITS_IN_JSAMPLE == 8
#define CONST_BITS  13
#define PASS1_BITS  4
#define OUT_SHIFT   PASS1_BITS
#define CONST_BITS  13
#define PASS1_BITS  1
#define OUT_SHIFT   (PASS1_BITS + 1)
#if CONST_BITS == 13
#define FIX_0_298631336  ((int32_t)  2446)
#define FIX_0_390180644  ((int32_t)  3196)
#define FIX_0_541196100  ((int32_t)  4433)
#define FIX_0_765366865  ((int32_t)  6270)
#define FIX_0_899976223  ((int32_t)  7373)
#define FIX_1_175875602  ((int32_t)  9633)
#define FIX_1_501321110  ((int32_t)  12299)
#define FIX_1_847759065  ((int32_t)  15137)
#define FIX_1_961570560  ((int32_t)  16069)
#define FIX_2_053119869  ((int32_t)  16819)
#define FIX_2_562915447  ((int32_t)  20995)
#define FIX_3_072711026  ((int32_t)  25172)
FIX
FIX
FIX
FIX
FIX
FIX
FIX
FIX
FIX
FIX
FIX
FIX
#if BITS_IN_JSAMPLE == 8 && CONST_BITS<=13 && PASS1_BITS<=2
MULTIPLY  MULTIPLY16C16(var,const)
MULTIPLY  ((var) * (const))
FUNC(int16_t *data)
GLOBAL(void)
FUNC(ff_jpeg_fdct_islow)(int16_t *data)
GLOBAL(void)
FUNC(ff_fdct248_islow)(int16_t *data)

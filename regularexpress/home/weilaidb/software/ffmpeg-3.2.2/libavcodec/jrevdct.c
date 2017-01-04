#define EIGHT_BIT_SAMPLES
#define DCTSIZE 8
#define DCTSIZE2 64
#define GLOBAL
#define RIGHT_SHIFT(x, n) ((x) >> (n))
typedef int16_t DCTBLOCK[DCTSIZE2];
#define CONST_BITS 13
#if DCTSIZE != 8
Sorry, this code only copes with 8x8 DCTs.
#define PASS1_BITS  2
#define PASS1_BITS  1
#define ONE         ((int32_t) 1)
#define CONST_SCALE (ONE << CONST_BITS)
#define FIX(x)  ((int32_t) ((x) * CONST_SCALE + 0.5))
#define DESCALE(x,n)  RIGHT_SHIFT((x) + (ONE << ((n)-1)), n)
#define MULTIPLY(var,const)  (((int16_t) (var)) * ((int16_t) (const)))
#define MULTIPLY(var,const)  (((int16_t) (var)) * ((int32_t) (const)))
#define MULTIPLY(var,const)  ((var) * (const))
#define FIX_0_211164243 1730
#define FIX_0_275899380 2260
#define FIX_0_298631336 2446
#define FIX_0_390180644 3196
#define FIX_0_509795579 4176
#define FIX_0_541196100 4433
#define FIX_0_601344887 4926
#define FIX_0_765366865 6270
#define FIX_0_785694958 6436
#define FIX_0_899976223 7373
#define FIX_1_061594337 8697
#define FIX_1_111140466 9102
#define FIX_1_175875602 9633
#define FIX_1_306562965 10703
#define FIX_1_387039845 11363
#define FIX_1_451774981 11893
#define FIX_1_501321110 12299
#define FIX_1_662939225 13623
#define FIX_1_847759065 15137
#define FIX_1_961570560 16069
#define FIX_2_053119869 16819
#define FIX_2_172734803 17799
#define FIX_2_562915447 20995
#define FIX_3_072711026 25172
void ff_j_rev_dct(DCTBLOCK data)
#undef DCTSIZE
#define DCTSIZE 4
#define DCTSTRIDE 8
void ff_j_rev_dct4(DCTBLOCK data)
void ff_j_rev_dct2(DCTBLOCK data)
void ff_j_rev_dct1(DCTBLOCK data)
#undef FIX
#undef CONST_BITS
void ff_jref_idct_put(uint8_t *dest, int line_size, int16_t *block)
void ff_jref_idct_add(uint8_t *dest, int line_size, int16_t *block)

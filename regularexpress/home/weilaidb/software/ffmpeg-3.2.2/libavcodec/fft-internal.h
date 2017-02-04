#define AVCODEC_FFT_INTERNAL_H
#if FFT_FLOAT
FIX15 (v)
#define sqrthalf (float)M_SQRT1_2
BF do  while (0)
CMUL do  while (0)
SCALE_FLOAT lrint((a) * (double)(1 << (bits)))
#if FFT_FIXED_32
CMUL do  while (0)
FIX15 av_clip(SCALE_FLOAT(a, 31), -2147483647, 2147483647)
ff_mdct_calcw_c;
FIX15 av_clip(SCALE_FLOAT(a, 15), -32767, 32767)
#define sqrthalf ((int16_t)((1<<15)*M_SQRT1_2))
BF do  while (0)
CMULS do  while (0)
CMUL      \
CMULS(dre, dim, are, aim, bre, bim, 15)
CMULL     \
CMULS(dre, dim, are, aim, bre, bim, 0)
FFT_NAME
FFT_NAME
FFT_NAME
ff_imdct_calc_c;
ff_imdct_half_c;
ff_mdct_calc_c;

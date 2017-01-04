#if !HIGH_BIT_DEPTH
#define QUANT_16_U( idx0, idx1 )                                    \
int x264_quant_4x4_altivec( int16_t dct[16], uint16_t mf[16], uint16_t bias[16] )
#define QUANT_16_U_DC( idx0, idx1 )                                 \
int x264_quant_4x4_dc_altivec( int16_t dct[16], int mf, int bias )
#define QUANT_4_U_DC( idx0 )                                        \
int x264_quant_2x2_dc_altivec( int16_t dct[4], int mf, int bias )
int x264_quant_8x8_altivec( int16_t dct[64], uint16_t mf[64], uint16_t bias[64] )
#define DEQUANT_SHL()                                                \
#define VEC_MULE vec_mule
#define VEC_MULO vec_mulo
#define VEC_MULE vec_mulo
#define VEC_MULO vec_mule
#define DEQUANT_SHR()                                          \
void x264_dequant_4x4_altivec( int16_t dct[16], int dequant_mf[6][16], int i_qp )
void x264_dequant_8x8_altivec( int16_t dct[64], int dequant_mf[6][64], int i_qp )

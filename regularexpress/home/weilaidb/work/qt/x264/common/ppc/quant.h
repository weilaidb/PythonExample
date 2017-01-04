#define X264_PPC_QUANT_H
int x264_quant_4x4_altivec( int16_t dct[16], uint16_t mf[16], uint16_t bias[16] );
int x264_quant_8x8_altivec( int16_t dct[64], uint16_t mf[64], uint16_t bias[64] );
int x264_quant_4x4_dc_altivec( int16_t dct[16], int mf, int bias );
int x264_quant_2x2_dc_altivec( int16_t dct[4], int mf, int bias );
void x264_dequant_4x4_altivec( int16_t dct[16], int dequant_mf[6][16], int i_qp );
void x264_dequant_8x8_altivec( int16_t dct[64], int dequant_mf[6][64], int i_qp );

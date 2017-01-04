#if !HIGH_BIT_DEPTH
static void avc_dequant_4x4_msa( int16_t *p_dct, int32_t pi_dequant_mf[6][16],
int32_t i_qp )
static void avc_dequant_8x8_msa( int16_t *p_dct, int32_t pi_dequant_mf[6][64],
int32_t i_qp )
static void avc_dequant_4x4_dc_msa( int16_t *p_dct,
int32_t pi_dequant_mf[6][16],
int32_t i_qp )
static int32_t avc_quant_4x4_msa( int16_t *p_dct, uint16_t *p_mf,
uint16_t *p_bias )
static int32_t avc_quant_8x8_msa( int16_t *p_dct, uint16_t *p_mf,
uint16_t *p_bias )
static int32_t avc_quant_4x4_dc_msa( int16_t *p_dct, int32_t i_mf,
int32_t i_bias )
static int32_t avc_coeff_last64_msa( int16_t *p_src )
static int32_t avc_coeff_last16_msa( int16_t *p_src )
void x264_dequant_4x4_msa( int16_t *p_dct, int32_t pi_dequant_mf[6][16],
int32_t i_qp )
void x264_dequant_8x8_msa( int16_t *p_dct, int32_t pi_dequant_mf[6][64],
int32_t i_qp )
void x264_dequant_4x4_dc_msa( int16_t *p_dct, int32_t pi_dequant_mf[6][16],
int32_t i_qp )
int32_t x264_quant_4x4_msa( int16_t *p_dct, uint16_t *p_mf, uint16_t *p_bias )
int32_t x264_quant_4x4x4_msa( int16_t p_dct[4][16],
uint16_t pu_mf[16], uint16_t pu_bias[16] )
int32_t x264_quant_8x8_msa( int16_t *p_dct, uint16_t *p_mf, uint16_t *p_bias )
int32_t x264_quant_4x4_dc_msa( int16_t *p_dct, int32_t i_mf, int32_t i_bias )
int32_t x264_coeff_last64_msa( int16_t *p_src )
int32_t x264_coeff_last16_msa( int16_t *p_src )

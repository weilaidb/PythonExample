static void h263_dct_unquantize_msa(int16_t *block, int16_t qmul,
int16_t qadd, int8_t n_coeffs,
uint8_t loop_start)
static int32_t mpeg2_dct_unquantize_inter_msa(int16_t *block,
int32_t qscale,
const int16_t *quant_matrix)
void ff_dct_unquantize_h263_intra_msa(MpegEncContext *s,
int16_t *block, int32_t index,
int32_t qscale)
void ff_dct_unquantize_h263_inter_msa(MpegEncContext *s,
int16_t *block, int32_t index,
int32_t qscale)
void ff_dct_unquantize_mpeg2_inter_msa(MpegEncContext *s,
int16_t *block, int32_t index,
int32_t qscale)

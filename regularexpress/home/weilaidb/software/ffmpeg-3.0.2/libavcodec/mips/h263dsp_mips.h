#define AVCODEC_MIPS_H263DSP_MIPS_H
void ff_h263_h_loop_filter_msa(uint8_t *src, int stride, int q_scale);
void ff_h263_v_loop_filter_msa(uint8_t *src, int stride, int q_scale);
void ff_dct_unquantize_mpeg2_inter_msa(MpegEncContext *s, int16_t *block,
int32_t index, int32_t q_scale);
void ff_dct_unquantize_h263_inter_msa(MpegEncContext *s, int16_t *block,
int32_t index, int32_t q_scale);
void ff_dct_unquantize_h263_intra_msa(MpegEncContext *s, int16_t *block,
int32_t index, int32_t q_scale);
int ff_pix_sum_msa(uint8_t *pix, int line_size);

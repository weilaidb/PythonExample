#define AVCODEC_SVQ3_H
void ff_svq3_luma_dc_dequant_idct_c(int16_t *output, int16_t *input, int qp);
void ff_svq3_add_idct_c(uint8_t *dst, int16_t *block, int stride, int qp, int dc);

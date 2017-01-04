void ff_w3fdif_simple_low_sse2(int32_t *work_line,
uint8_t *in_lines_cur[2],
const int16_t *coef, int linesize);
void ff_w3fdif_simple_high_sse2(int32_t *work_line,
uint8_t *in_lines_cur[3],
uint8_t *in_lines_adj[3],
const int16_t *coef, int linesize);
void ff_w3fdif_complex_low_sse2(int32_t *work_line,
uint8_t *in_lines_cur[4],
const int16_t *coef, int linesize);
void ff_w3fdif_complex_high_sse2(int32_t *work_line,
uint8_t *in_lines_cur[5],
uint8_t *in_lines_adj[5],
const int16_t *coef, int linesize);
void ff_w3fdif_scale_sse2(uint8_t *out_pixel, const int32_t *work_pixel, int linesize);
av_cold void ff_w3fdif_init_x86(W3FDIFDSPContext *dsp)

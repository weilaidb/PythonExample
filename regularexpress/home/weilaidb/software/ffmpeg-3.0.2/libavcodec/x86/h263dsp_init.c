void ff_h263_h_loop_filter_mmx(uint8_t *src, int stride, int qscale);
void ff_h263_v_loop_filter_mmx(uint8_t *src, int stride, int qscale);
av_cold void ff_h263dsp_init_x86(H263DSPContext *c)

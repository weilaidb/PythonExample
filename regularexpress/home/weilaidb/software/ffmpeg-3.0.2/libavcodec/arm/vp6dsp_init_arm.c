void ff_vp6_edge_filter_hor_neon(uint8_t *yuv, int stride, int t);
void ff_vp6_edge_filter_ver_neon(uint8_t *yuv, int stride, int t);
av_cold void ff_vp6dsp_init_arm(VP56DSPContext *s, enum AVCodecID codec)

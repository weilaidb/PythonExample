void ff_flac_lpc_16_arm(int32_t *samples, const int coeffs[32], int order,
int qlevel, int len);
av_cold void ff_flacdsp_init_arm(FLACDSPContext *c, enum AVSampleFormat fmt, int channels,
int bps)

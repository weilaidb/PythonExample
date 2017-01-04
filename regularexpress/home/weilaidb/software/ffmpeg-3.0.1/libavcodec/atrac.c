float ff_atrac_sf_table[64];
static float qmf_window[48];
static const float qmf_48tap_half[24] = ;
av_cold void ff_atrac_generate_tables(void)
av_cold void ff_atrac_init_gain_compensation(AtracGCContext *gctx, int id2exp_offset,
int loc_scale)
void ff_atrac_gain_compensation(AtracGCContext *gctx, float *in, float *prev,
AtracGainInfo *gc_now, AtracGainInfo *gc_next,
int num_samples, float *out)
void ff_atrac_iqmf(float *inlo, float *inhi, unsigned int nIn, float *pOut,
float *delayBuf, float *temp)

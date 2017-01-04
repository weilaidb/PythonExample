void ff_ps_add_squares_neon(float *dst, const float (*src)[2], int n);
void ff_ps_mul_pair_single_neon(float (*dst)[2], float (*src0)[2],
float *src1, int n);
void ff_ps_hybrid_analysis_neon(float (*out)[2], float (*in)[2],
const float (*filter)[8][2],
int stride, int n);
void ff_ps_hybrid_analysis_ileave_neon(float (*out)[32][2], float L[2][38][64],
int i, int len);
void ff_ps_hybrid_synthesis_deint_neon(float out[2][38][64], float (*in)[32][2],
int i, int len);
void ff_ps_decorrelate_neon(float (*out)[2], float (*delay)[2],
float (*ap_delay)[PS_QMF_TIME_SLOTS+PS_MAX_AP_DELAY][2],
const float phi_fract[2], float (*Q_fract)[2],
const float *transient_gain, float g_decay_slope,
int len);
void ff_ps_stereo_interpolate_neon(float (*l)[2], float (*r)[2],
float h[2][4], float h_step[2][4],
int len);
av_cold void ff_psdsp_init_arm(PSDSPContext *s)

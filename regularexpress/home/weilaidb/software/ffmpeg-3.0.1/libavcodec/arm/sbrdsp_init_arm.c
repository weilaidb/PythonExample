void ff_sbr_sum64x5_neon(float *z);
float ff_sbr_sum_square_neon(float (*x)[2], int n);
void ff_sbr_neg_odd_64_neon(float *x);
void ff_sbr_qmf_pre_shuffle_neon(float *z);
void ff_sbr_qmf_post_shuffle_neon(float W[32][2], const float *z);
void ff_sbr_qmf_deint_neg_neon(float *v, const float *src);
void ff_sbr_qmf_deint_bfly_neon(float *v, const float *src0, const float *src1);
void ff_sbr_hf_g_filt_neon(float (*Y)[2], const float (*X_high)[40][2],
const float *g_filt, int m_max, intptr_t ixh);
void ff_sbr_hf_gen_neon(float (*X_high)[2], const float (*X_low)[2],
const float alpha0[2], const float alpha1[2],
float bw, int start, int end);
void ff_sbr_autocorrelate_neon(const float x[40][2], float phi[3][2][2]);
void ff_sbr_hf_apply_noise_0_neon(float Y[64][2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
void ff_sbr_hf_apply_noise_1_neon(float Y[64][2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
void ff_sbr_hf_apply_noise_2_neon(float Y[64][2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
void ff_sbr_hf_apply_noise_3_neon(float Y[64][2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
av_cold void ff_sbrdsp_init_arm(SBRDSPContext *s)

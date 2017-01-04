float ff_sbr_sum_square_sse(float (*x)[2], int n);
void ff_sbr_sum64x5_sse(float *z);
void ff_sbr_hf_g_filt_sse(float (*Y)[2], const float (*X_high)[40][2],
const float *g_filt, int m_max, intptr_t ixh);
void ff_sbr_hf_gen_sse(float (*X_high)[2], const float (*X_low)[2],
const float alpha0[2], const float alpha1[2],
float bw, int start, int end);
void ff_sbr_neg_odd_64_sse(float *z);
void ff_sbr_qmf_post_shuffle_sse(float W[32][2], const float *z);
void ff_sbr_qmf_deint_bfly_sse(float *v, const float *src0, const float *src1);
void ff_sbr_qmf_deint_bfly_sse2(float *v, const float *src0, const float *src1);
void ff_sbr_qmf_pre_shuffle_sse2(float *z);
void ff_sbr_hf_apply_noise_0_sse2(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
void ff_sbr_hf_apply_noise_1_sse2(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
void ff_sbr_hf_apply_noise_2_sse2(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
void ff_sbr_hf_apply_noise_3_sse2(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
void ff_sbr_qmf_deint_neg_sse(float *v, const float *src);
void ff_sbr_autocorrelate_sse (const float x[40][2], float phi[3][2][2]);
void ff_sbr_autocorrelate_sse3(const float x[40][2], float phi[3][2][2]);
av_cold void ff_sbrdsp_init_x86(SBRDSPContext *s)

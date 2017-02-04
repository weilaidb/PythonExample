ff_sbr_sum_square_sse[2], int n);
ff_sbr_sum64x5_sse;
ff_sbr_hf_g_filt_sse[2], const float (*X_high)[40][2],
const float *g_filt, int m_max, intptr_t ixh);
ff_sbr_hf_gen_sse[2], const float (*X_low)[2],
const float alpha0[2], const float alpha1[2],
float bw, int start, int end);
ff_sbr_neg_odd_64_sse;
ff_sbr_qmf_post_shuffle_sse;
ff_sbr_qmf_deint_bfly_sse;
ff_sbr_qmf_deint_bfly_sse2;
ff_sbr_qmf_pre_shuffle_sse2;
ff_sbr_hf_apply_noise_0_sse2[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
ff_sbr_hf_apply_noise_1_sse2[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
ff_sbr_hf_apply_noise_2_sse2[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
ff_sbr_hf_apply_noise_3_sse2[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max);
ff_sbr_qmf_deint_neg_sse;
void ff_sbr_autocorrelate_sse (const float x[40][2], float phi[3][2][2]);
ff_sbr_autocorrelate_sse3;
ff_sbrdsp_init_x86

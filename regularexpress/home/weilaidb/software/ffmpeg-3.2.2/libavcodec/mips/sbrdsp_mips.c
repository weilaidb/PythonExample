#if HAVE_INLINE_ASM
sbr_qmf_pre_shuffle_mips
sbr_qmf_post_shuffle_mips
#if HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
sbr_sum64x5_mips
sbr_sum_square_mips[2], int n)
sbr_qmf_deint_bfly_mips
sbr_autocorrelate_mips
sbr_hf_gen_mips[2], const float (*X_low)[2],
const float alpha0[2], const float alpha1[2],
float bw, int start, int end)
sbr_hf_g_filt_mips[2], const float (*X_high)[40][2],
const float *g_filt, int m_max, intptr_t ixh)
sbr_hf_apply_noise_0_mips[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
sbr_hf_apply_noise_1_mips[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
sbr_hf_apply_noise_2_mips[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
sbr_hf_apply_noise_3_mips[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
ff_sbrdsp_init_mips

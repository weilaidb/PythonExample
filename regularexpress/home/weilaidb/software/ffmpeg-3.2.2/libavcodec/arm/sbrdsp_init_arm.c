ff_sbr_sum64x5_neon;
ff_sbr_sum_square_neon[2], int n);
ff_sbr_neg_odd_64_neon;
ff_sbr_qmf_pre_shuffle_neon;
ff_sbr_qmf_post_shuffle_neon;
ff_sbr_qmf_deint_neg_neon;
ff_sbr_qmf_deint_bfly_neon;
ff_sbr_hf_g_filt_neon[2], const float (*X_high)[40][2],
const float *g_filt, int m_max, intptr_t ixh);
ff_sbr_hf_gen_neon[2], const float (*X_low)[2],
const float alpha0[2], const float alpha1[2],
float bw, int start, int end);
ff_sbr_autocorrelate_neon;
ff_sbr_hf_apply_noise_0_neon;
ff_sbr_hf_apply_noise_1_neon;
ff_sbr_hf_apply_noise_2_neon;
ff_sbr_hf_apply_noise_3_neon;
ff_sbrdsp_init_arm

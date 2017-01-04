#define USE_FIXED 0
static float sbr_sum_square_c(float (*x)[2], int n)
static void sbr_neg_odd_64_c(float *x)
static void sbr_qmf_pre_shuffle_c(float *z)
static void sbr_qmf_post_shuffle_c(float W[32][2], const float *z)
static void sbr_qmf_deint_neg_c(float *v, const float *src)
}
static void sbr_hf_gen_c(float (*X_high)[2], const float (*X_low)[2],
const float alpha0[2], const float alpha1[2],
float bw, int start, int end)
static void sbr_hf_g_filt_c(float (*Y)[2], const float (*X_high)[40][2],
const float *g_filt, int m_max, intptr_t ixh)
static av_always_inline void sbr_hf_apply_noise(float (*Y)[2],
const float *s_m,
const float *q_filt,
int noise,
float phi_sign0,
float phi_sign1,
int m_max)

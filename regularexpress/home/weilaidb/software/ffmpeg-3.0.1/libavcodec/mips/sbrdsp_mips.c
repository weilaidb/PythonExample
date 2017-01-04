#if HAVE_INLINE_ASM
static void sbr_qmf_pre_shuffle_mips(float *z)
static void sbr_qmf_post_shuffle_mips(float W[32][2], const float *z)
#if HAVE_MIPSFPU
static void sbr_sum64x5_mips(float *z)
static float sbr_sum_square_mips(float (*x)[2], int n)
static void sbr_qmf_deint_bfly_mips(float *v, const float *src0, const float *src1)
static void sbr_autocorrelate_mips(const float x[40][2], float phi[3][2][2])
static void sbr_hf_gen_mips(float (*X_high)[2], const float (*X_low)[2],
const float alpha0[2], const float alpha1[2],
float bw, int start, int end)
static void sbr_hf_g_filt_mips(float (*Y)[2], const float (*X_high)[40][2],
const float *g_filt, int m_max, intptr_t ixh)
static void sbr_hf_apply_noise_0_mips(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
static void sbr_hf_apply_noise_1_mips(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
static void sbr_hf_apply_noise_2_mips(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
static void sbr_hf_apply_noise_3_mips(float (*Y)[2], const float *s_m,
const float *q_filt, int noise,
int kx, int m_max)
void ff_sbrdsp_init_mips(SBRDSPContext *s)

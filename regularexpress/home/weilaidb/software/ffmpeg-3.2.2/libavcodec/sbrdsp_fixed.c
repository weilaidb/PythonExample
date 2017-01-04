#define USE_FIXED 1
static SoftFloat sbr_sum_square_c(int (*x)[2], int n)
static void sbr_neg_odd_64_c(int *x)
static void sbr_qmf_pre_shuffle_c(int *z)
static void sbr_qmf_post_shuffle_c(int W[32][2], const int *z)
static void sbr_qmf_deint_neg_c(int *v, const int *src)
static av_always_inline SoftFloat autocorr_calc(int64_t accu)
static av_always_inline void autocorrelate(const int x[40][2], SoftFloat phi[3][2][2], int lag)
static void sbr_autocorrelate_c(const int x[40][2], SoftFloat phi[3][2][2])
static void sbr_hf_gen_c(int (*X_high)[2], const int (*X_low)[2],
const int alpha0[2], const int alpha1[2],
int bw, int start, int end)
static void sbr_hf_g_filt_c(int (*Y)[2], const int (*X_high)[40][2],
const SoftFloat *g_filt, int m_max, intptr_t ixh)
static av_always_inline void sbr_hf_apply_noise(int (*Y)[2],
const SoftFloat *s_m,
const SoftFloat *q_filt,
int noise,
int phi_sign0,
int phi_sign1,
int m_max)

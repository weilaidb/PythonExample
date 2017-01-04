#if HAVE_INLINE_ASM
static void ps_hybrid_analysis_ileave_mips(float (*out)[32][2], float L[2][38][64],
int i, int len)
static void ps_hybrid_synthesis_deint_mips(float out[2][38][64],
float (*in)[32][2],
int i, int len)
#if HAVE_MIPSFPU
static void ps_add_squares_mips(float *dst, const float (*src)[2], int n)
static void ps_mul_pair_single_mips(float (*dst)[2], float (*src0)[2], float *src1,
int n)
static void ps_decorrelate_mips(float (*out)[2], float (*delay)[2],
float (*ap_delay)[PS_QMF_TIME_SLOTS + PS_MAX_AP_DELAY][2],
const float phi_fract[2], const float (*Q_fract)[2],
const float *transient_gain,
float g_decay_slope,
int len)
static void ps_stereo_interpolate_mips(float (*l)[2], float (*r)[2],
float h[2][4], float h_step[2][4],
int len)
void ff_psdsp_init_mips(PSDSPContext *s)

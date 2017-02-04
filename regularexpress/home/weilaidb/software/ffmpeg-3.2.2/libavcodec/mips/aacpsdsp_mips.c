#if HAVE_INLINE_ASM
ps_hybrid_analysis_ileave_mips[32][2], float L[2][38][64],
int i, int len)
ps_hybrid_synthesis_deint_mips[32][2],
int i, int len)
#if HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
ps_add_squares_mips[2], int n)
ps_mul_pair_single_mips[2], float (*src0)[2], float *src1,
int n)
ps_decorrelate_mips[2], float (*delay)[2],
float (*ap_delay)[PS_QMF_TIME_SLOTS + PS_MAX_AP_DELAY][2],
const float phi_fract[2], const float (*Q_fract)[2],
const float *transient_gain,
float g_decay_slope,
int len)
ps_stereo_interpolate_mips[2], float (*r)[2],
float h[2][4], float h_step[2][4],
int len)
ff_psdsp_init_mips

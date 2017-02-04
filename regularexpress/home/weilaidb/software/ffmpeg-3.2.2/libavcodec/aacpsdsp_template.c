ps_add_squares_c[2], int n)
ps_mul_pair_single_c[2], INTFLOAT (*src0)[2], INTFLOAT *src1,
int n)
ps_hybrid_analysis_c[2], INTFLOAT (*in)[2],
const INTFLOAT (*filter)[8][2],
int stride, int n)
ps_hybrid_analysis_ileave_c[32][2], INTFLOAT L[2][38][64],
int i, int len)
ps_hybrid_synthesis_deint_c[32][2],
int i, int len)
ps_decorrelate_c[2], INTFLOAT (*delay)[2],
INTFLOAT (*ap_delay)[PS_QMF_TIME_SLOTS + PS_MAX_AP_DELAY][2],
const INTFLOAT phi_fract[2], const INTFLOAT (*Q_fract)[2],
const INTFLOAT *transient_gain,
INTFLOAT g_decay_slope,
int len)
ps_stereo_interpolate_c[2], INTFLOAT (*r)[2],
INTFLOAT h[2][4], INTFLOAT h_step[2][4],
int len)
ps_stereo_interpolate_ipdopd_c[2], INTFLOAT (*r)[2],
INTFLOAT h[2][4], INTFLOAT h_step[2][4],
int len)
AAC_RENAME(PSDSPContext *s)

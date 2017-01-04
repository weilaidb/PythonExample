DECLARE_ASM_CONST(16, double, pd_1)[2] = ;
DECLARE_ASM_CONST(16, double, pd_2)[2] = ;
#if HAVE_SSE2_INLINE
static void lpc_apply_welch_window_sse2(const int32_t *data, int len,
double *w_data)
static void lpc_compute_autocorr_sse2(const double *data, int len, int lag,
double *autoc)
av_cold void ff_lpc_init_x86(LPCContext *c)

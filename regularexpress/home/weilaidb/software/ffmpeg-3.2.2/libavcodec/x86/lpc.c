DECLARE_ASM_CONST(16, double, pd_1)[2] = ;
DECLARE_ASM_CONST(16, double, pd_2)[2] = ;
#if HAVE_SSE2_INLINE
lpc_apply_welch_window_sse2
lpc_compute_autocorr_sse2
ff_lpc_init_x86

#if HAVE_VSX
ff_fft_calc_altivec;
ff_fft_calc_interleave_altivec;
#if HAVE_GNU_AS && HAVE_ALTIVEC
imdct_half_altivec
imdct_calc_altivec
ff_fft_init_ppc

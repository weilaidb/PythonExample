AV_CHECK_OFFSET(IMDCT15Context, exptab,         CELT_EXPTAB);
AV_CHECK_OFFSET(IMDCT15Context, fft_n,          CELT_FFT_N);
AV_CHECK_OFFSET(IMDCT15Context, len2,           CELT_LEN2);
AV_CHECK_OFFSET(IMDCT15Context, len4,           CELT_LEN4);
AV_CHECK_OFFSET(IMDCT15Context, tmp,            CELT_TMP);
AV_CHECK_OFFSET(IMDCT15Context, twiddle_exptab, CELT_TWIDDLE);
ff_celt_imdct_half_neon;
ff_imdct15_init_aarch64

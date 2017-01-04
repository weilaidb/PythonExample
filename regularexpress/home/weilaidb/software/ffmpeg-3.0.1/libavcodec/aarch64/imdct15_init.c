AV_CHECK_OFFSET(IMDCT15Context, exptab,         CELT_EXPTAB);
AV_CHECK_OFFSET(IMDCT15Context, fft_n,          CELT_FFT_N);
AV_CHECK_OFFSET(IMDCT15Context, len2,           CELT_LEN2);
AV_CHECK_OFFSET(IMDCT15Context, len4,           CELT_LEN4);
AV_CHECK_OFFSET(IMDCT15Context, tmp,            CELT_TMP);
AV_CHECK_OFFSET(IMDCT15Context, twiddle_exptab, CELT_TWIDDLE);
void ff_celt_imdct_half_neon(IMDCT15Context *s, float *dst, const float *src,
ptrdiff_t stride, float scale);
void ff_imdct15_init_aarch64(IMDCT15Context *s)

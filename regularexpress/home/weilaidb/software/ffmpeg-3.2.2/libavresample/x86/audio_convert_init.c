ff_conv_s16_to_s32_sse2;
ff_conv_s16_to_flt_sse2;
ff_conv_s16_to_flt_sse4;
void ff_conv_s32_to_s16_mmx (int16_t *dst, const int32_t *src, int len);
ff_conv_s32_to_s16_sse2;
ff_conv_s32_to_flt_sse2;
void ff_conv_s32_to_flt_avx (float *dst, const int32_t *src, int len);
ff_conv_flt_to_s16_sse2;
ff_conv_flt_to_s32_sse2;
void ff_conv_flt_to_s32_avx (int32_t *dst, const float *src, int len);
ff_conv_s16p_to_s16_2ch_sse2;
void ff_conv_s16p_to_s16_2ch_avx (int16_t *dst, int16_t *const *src,
int len, int channels);
ff_conv_s16p_to_s16_6ch_sse2;
ff_conv_s16p_to_s16_6ch_sse2slow;
void ff_conv_s16p_to_s16_6ch_avx (int16_t *dst, int16_t *const *src,
int len, int channels);
ff_conv_s16p_to_flt_2ch_sse2;
void ff_conv_s16p_to_flt_2ch_avx (float *dst, int16_t *const *src,
int len, int channels);
void ff_conv_s16p_to_flt_6ch_sse2 (float *dst, int16_t *const *src,
int len, int channels);
ff_conv_s16p_to_flt_6ch_ssse3;
void ff_conv_s16p_to_flt_6ch_avx  (float *dst, int16_t *const *src,
int len, int channels);
void ff_conv_fltp_to_s16_2ch_sse2 (int16_t *dst, float *const *src,
int len, int channels);
ff_conv_fltp_to_s16_2ch_ssse3;
void ff_conv_fltp_to_s16_6ch_sse (int16_t *dst, float *const *src,
int len, int channels);
ff_conv_fltp_to_s16_6ch_sse2;
void ff_conv_fltp_to_s16_6ch_avx (int16_t *dst, float *const *src,
int len, int channels);
ff_conv_fltp_to_flt_2ch_sse;
ff_conv_fltp_to_flt_2ch_avx;
void ff_conv_fltp_to_flt_6ch_mmx (float *dst, float *const *src, int len,
int channels);
ff_conv_fltp_to_flt_6ch_sse4;
void ff_conv_fltp_to_flt_6ch_avx (float *dst, float *const *src, int len,
int channels);
ff_conv_s16_to_s16p_2ch_sse2;
ff_conv_s16_to_s16p_2ch_ssse3;
void ff_conv_s16_to_s16p_2ch_avx (int16_t *const *dst, int16_t *src,
int len, int channels);
void ff_conv_s16_to_s16p_6ch_sse2 (int16_t *const *dst, int16_t *src,
int len, int channels);
ff_conv_s16_to_s16p_6ch_ssse3;
void ff_conv_s16_to_s16p_6ch_avx  (int16_t *const *dst, int16_t *src,
int len, int channels);
ff_conv_s16_to_fltp_2ch_sse2;
void ff_conv_s16_to_fltp_2ch_avx (float *const *dst, int16_t *src,
int len, int channels);
void ff_conv_s16_to_fltp_6ch_sse2 (float *const *dst, int16_t *src,
int len, int channels);
ff_conv_s16_to_fltp_6ch_ssse3;
void ff_conv_s16_to_fltp_6ch_sse4 (float *const *dst, int16_t *src,
int len, int channels);
void ff_conv_s16_to_fltp_6ch_avx  (float *const *dst, int16_t *src,
int len, int channels);
ff_conv_flt_to_s16p_2ch_sse2;
void ff_conv_flt_to_s16p_2ch_avx (int16_t *const *dst, float *src,
int len, int channels);
void ff_conv_flt_to_s16p_6ch_sse2 (int16_t *const *dst, float *src,
int len, int channels);
ff_conv_flt_to_s16p_6ch_ssse3;
void ff_conv_flt_to_s16p_6ch_avx  (int16_t *const *dst, float *src,
int len, int channels);
ff_conv_flt_to_fltp_2ch_sse;
ff_conv_flt_to_fltp_2ch_avx;
ff_conv_flt_to_fltp_6ch_sse2;
void ff_conv_flt_to_fltp_6ch_avx (float *const *dst, float *src, int len,
int channels);
ff_audio_convert_init_x86

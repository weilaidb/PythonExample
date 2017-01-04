void ff_conv_flt_to_s16_neon(int16_t *dst, const float *src, int len);
void ff_conv_fltp_to_s16_neon(int16_t *dst, float *const *src,
int len, int channels);
void ff_conv_fltp_to_s16_2ch_neon(int16_t *dst, float *const *src,
int len, int channels);
av_cold void ff_audio_convert_init_aarch64(AudioConvert *ac)

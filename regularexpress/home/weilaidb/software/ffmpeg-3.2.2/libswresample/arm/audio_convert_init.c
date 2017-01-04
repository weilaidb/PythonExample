void swri_oldapi_conv_flt_to_s16_neon(int16_t *dst, const float *src, int len);
void swri_oldapi_conv_fltp_to_s16_2ch_neon(int16_t *dst, float *const *src, int len, int channels);
void swri_oldapi_conv_fltp_to_s16_nch_neon(int16_t *dst, float *const *src, int len, int channels);
static void conv_flt_to_s16_neon(uint8_t **dst, const uint8_t **src, int len)
static void conv_fltp_to_s16_2ch_neon(uint8_t **dst, const uint8_t **src, int len)
static void conv_fltp_to_s16_nch_neon(uint8_t **dst, const uint8_t **src, int len)
av_cold void swri_audio_convert_init_arm(struct AudioConvert *ac,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels)

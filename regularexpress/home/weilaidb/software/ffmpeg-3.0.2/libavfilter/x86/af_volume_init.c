void ff_scale_samples_s16_sse2(uint8_t *dst, const uint8_t *src, int len,
int volume);
void ff_scale_samples_s32_sse2(uint8_t *dst, const uint8_t *src, int len,
int volume);
void ff_scale_samples_s32_ssse3_atom(uint8_t *dst, const uint8_t *src, int len,
int volume);
void ff_scale_samples_s32_avx(uint8_t *dst, const uint8_t *src, int len,
int volume);
av_cold void ff_volume_init_x86(VolumeContext *vol)

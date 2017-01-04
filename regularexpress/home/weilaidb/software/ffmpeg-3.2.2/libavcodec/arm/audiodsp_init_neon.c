void ff_vector_clipf_neon(float *dst, const float *src, float min, float max,
int len);
void ff_vector_clip_int32_neon(int32_t *dst, const int32_t *src, int32_t min,
int32_t max, unsigned int len);
int32_t ff_scalarproduct_int16_neon(const int16_t *v1, const int16_t *v2, int len);
av_cold void ff_audiodsp_init_neon(AudioDSPContext *c)

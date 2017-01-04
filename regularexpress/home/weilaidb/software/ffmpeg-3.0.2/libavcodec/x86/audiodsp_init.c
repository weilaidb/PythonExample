int32_t ff_scalarproduct_int16_mmxext(const int16_t *v1, const int16_t *v2,
int order);
int32_t ff_scalarproduct_int16_sse2(const int16_t *v1, const int16_t *v2,
int order);
void ff_vector_clip_int32_mmx(int32_t *dst, const int32_t *src,
int32_t min, int32_t max, unsigned int len);
void ff_vector_clip_int32_sse2(int32_t *dst, const int32_t *src,
int32_t min, int32_t max, unsigned int len);
void ff_vector_clip_int32_int_sse2(int32_t *dst, const int32_t *src,
int32_t min, int32_t max, unsigned int len);
void ff_vector_clip_int32_sse4(int32_t *dst, const int32_t *src,
int32_t min, int32_t max, unsigned int len);
void ff_vector_clipf_sse(float *dst, const float *src,
float min, float max, int len);
av_cold void ff_audiodsp_init_x86(AudioDSPContext *c)

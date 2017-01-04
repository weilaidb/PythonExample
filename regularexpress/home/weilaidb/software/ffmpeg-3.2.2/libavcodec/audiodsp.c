static inline uint32_t clipf_c_one(uint32_t a, uint32_t mini,
uint32_t maxi, uint32_t maxisign)
static void vector_clipf_c_opposite_sign(float *dst, const float *src,
float *min, float *max, int len)
static void vector_clipf_c(float *dst, const float *src,
float min, float max, int len)
static int32_t scalarproduct_int16_c(const int16_t *v1, const int16_t *v2,
int order)
static void vector_clip_int32_c(int32_t *dst, const int32_t *src, int32_t min,
int32_t max, unsigned int len)
av_cold void ff_audiodsp_init(AudioDSPContext *c)

#define ALTIVEC_TRANSPOSE_8x8_SHORT(src_a,src_b,src_c,src_d,src_e,src_f,src_g,src_h) \
do  while (0)
static inline int vertClassify_altivec(uint8_t src[], int stride, PPContext *c)
static inline void doVertLowPass_altivec(uint8_t *src, int stride, PPContext *c)
static inline void doVertDefFilter_altivec(uint8_t src[], int stride, PPContext *c)
static inline void dering_altivec(uint8_t src[], int stride, PPContext *c)
#define doHorizLowPass_altivec(a...) doHorizLowPass_C(a)
#define doHorizDefFilter_altivec(a...) doHorizDefFilter_C(a)
#define do_a_deblock_altivec(a...) do_a_deblock_C(a)
static inline void tempNoiseReducer_altivec(uint8_t *src, int stride,
uint8_t *tempBlurred, uint32_t *tempBlurredPast, int *maxNoise)
static inline void transpose_16x8_char_toPackedAlign_altivec(unsigned char* dst, unsigned char* src, int stride)
static inline void transpose_8x16_char_fromPackedAlign_altivec(unsigned char* dst, unsigned char* src, int stride)

#define AVCODEC_CELP_MATH_H
typedef struct CELPMContext CELPMContext;
void ff_celp_math_init(CELPMContext *c);
void ff_celp_math_init_mips(CELPMContext *c);
int ff_exp2(uint16_t power);
int ff_log2_q15(uint32_t value);
int64_t ff_dot_product(const int16_t *a, const int16_t *b, int length);
static inline int bidir_sal(int value, int offset)
float ff_dot_productf(const float* a, const float* b, int length);

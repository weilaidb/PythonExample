int32_t ff_scalarproduct_and_madd_int16_mmxext(int16_t *v1, const int16_t *v2,
const int16_t *v3,
int order, int mul);
int32_t ff_scalarproduct_and_madd_int16_sse2(int16_t *v1, const int16_t *v2,
const int16_t *v3,
int order, int mul);
int32_t ff_scalarproduct_and_madd_int16_ssse3(int16_t *v1, const int16_t *v2,
const int16_t *v3,
int order, int mul);
av_cold void ff_llauddsp_init_x86(LLAudDSPContext *c)

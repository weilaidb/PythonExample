int32_t ff_scalarproduct_and_madd_int16_neon(int16_t *v1, const int16_t *v2,
const int16_t *v3, int len, int mul);
av_cold void ff_llauddsp_init_arm(LLAudDSPContext *c)

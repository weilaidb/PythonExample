#define D(type, simd) \
mix_1_1_func_type ff_mix_1_1_a_## type ## _ ## simd;\
mix_2_1_func_type ff_mix_2_1_a_## type ## _ ## simd;
D(float, sse)
D(float, avx)
D(int16, mmx)
D(int16, sse2)
av_cold int swri_rematrix_init_x86(struct SwrContext *s)

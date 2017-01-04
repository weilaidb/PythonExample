void ff_quantize_sse2(int16_t *dst, const float *src, float *dither, int len);
void ff_dither_int_to_float_rectangular_sse2(float *dst, int *src, int len);
void ff_dither_int_to_float_rectangular_avx(float *dst, int *src, int len);
void ff_dither_int_to_float_triangular_sse2(float *dst, int *src0, int len);
void ff_dither_int_to_float_triangular_avx(float *dst, int *src0, int len);
av_cold void ff_dither_init_x86(DitherDSPContext *ddsp,
enum AVResampleDitherMethod method)

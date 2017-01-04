void ff_vector_fmul_sse(float *dst, const float *src0, const float *src1,
int len);
void ff_vector_fmul_avx(float *dst, const float *src0, const float *src1,
int len);
void ff_vector_fmac_scalar_sse(float *dst, const float *src, float mul,
int len);
void ff_vector_fmac_scalar_avx(float *dst, const float *src, float mul,
int len);
void ff_vector_fmac_scalar_fma3(float *dst, const float *src, float mul,
int len);
void ff_vector_fmul_scalar_sse(float *dst, const float *src, float mul,
int len);
void ff_vector_dmul_scalar_sse2(double *dst, const double *src,
double mul, int len);
void ff_vector_dmul_scalar_avx(double *dst, const double *src,
double mul, int len);
void ff_vector_fmul_window_3dnowext(float *dst, const float *src0,
const float *src1, const float *win, int len);
void ff_vector_fmul_window_sse(float *dst, const float *src0,
const float *src1, const float *win, int len);
void ff_vector_fmul_add_sse(float *dst, const float *src0, const float *src1,
const float *src2, int len);
void ff_vector_fmul_add_avx(float *dst, const float *src0, const float *src1,
const float *src2, int len);
void ff_vector_fmul_add_fma3(float *dst, const float *src0, const float *src1,
const float *src2, int len);
void ff_vector_fmul_reverse_sse(float *dst, const float *src0,
const float *src1, int len);
void ff_vector_fmul_reverse_avx(float *dst, const float *src0,
const float *src1, int len);
float ff_scalarproduct_float_sse(const float *v1, const float *v2, int order);
void ff_butterflies_float_sse(float *src0, float *src1, int len);
av_cold void ff_float_dsp_init_x86(AVFloatDSPContext *fdsp)

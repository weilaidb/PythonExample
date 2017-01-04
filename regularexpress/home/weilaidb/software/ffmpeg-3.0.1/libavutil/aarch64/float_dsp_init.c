void ff_vector_fmul_neon(float *dst, const float *src0, const float *src1,
int len);
void ff_vector_fmac_scalar_neon(float *dst, const float *src, float mul,
int len);
void ff_vector_fmul_scalar_neon(float *dst, const float *src, float mul,
int len);
void ff_vector_dmul_scalar_neon(double *dst, const double *src, double mul,
int len);
void ff_vector_fmul_window_neon(float *dst, const float *src0,
const float *src1, const float *win, int len);
void ff_vector_fmul_add_neon(float *dst, const float *src0, const float *src1,
const float *src2, int len);
void ff_vector_fmul_reverse_neon(float *dst, const float *src0,
const float *src1, int len);
void ff_butterflies_float_neon(float *v1, float *v2, int len);
float ff_scalarproduct_float_neon(const float *v1, const float *v2, int len);
av_cold void ff_float_dsp_init_aarch64(AVFloatDSPContext *fdsp)

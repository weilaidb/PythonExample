#define AVUTIL_PPC_FLOAT_DSP_ALTIVEC_H
void ff_vector_fmul_altivec(float *dst, const float *src0,
const float *src1, int len);
void ff_vector_fmul_window_altivec(float *dst, const float *src0,
const float *src1, const float *win,
int len);
void ff_vector_fmul_add_altivec(float *dst, const float *src0,
const float *src1, const float *src2,
int len);
void ff_vector_fmul_reverse_altivec(float *dst, const float *src0,
const float *src1, int len);

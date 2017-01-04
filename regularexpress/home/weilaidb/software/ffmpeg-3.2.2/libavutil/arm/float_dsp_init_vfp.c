void ff_vector_fmul_vfp(float *dst, const float *src0, const float *src1,
int len);
void ff_vector_fmul_window_vfp(float *dst, const float *src0,
const float *src1, const float *win, int len);
void ff_vector_fmul_reverse_vfp(float *dst, const float *src0,
const float *src1, int len);
void ff_butterflies_float_vfp(float *av_restrict v1, float *av_restrict v2, int len);
av_cold void ff_float_dsp_init_vfp(AVFloatDSPContext *fdsp, int cpu_flags)

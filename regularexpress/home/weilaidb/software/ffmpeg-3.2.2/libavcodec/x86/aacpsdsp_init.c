void ff_ps_add_squares_sse  (float *dst, const float (*src)[2], int n);
void ff_ps_add_squares_sse3 (float *dst, const float (*src)[2], int n);
void ff_ps_mul_pair_single_sse (float (*dst)[2], float (*src0)[2],
float *src1, int n);
void ff_ps_hybrid_analysis_sse (float (*out)[2], float (*in)[2],
const float (*filter)[8][2],
int stride, int n);
ff_ps_hybrid_analysis_sse3[2], float (*in)[2],
const float (*filter)[8][2],
int stride, int n);
ff_ps_stereo_interpolate_sse3[2], float (*r)[2],
float h[2][4], float h_step[2][4],
int len);
ff_psdsp_init_x86

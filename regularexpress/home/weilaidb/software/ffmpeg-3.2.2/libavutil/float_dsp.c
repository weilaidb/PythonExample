static void vector_fmul_c(float *dst, const float *src0, const float *src1,
int len)
static void vector_fmac_scalar_c(float *dst, const float *src, float mul,
int len)
static void vector_fmul_scalar_c(float *dst, const float *src, float mul,
int len)
static void vector_dmul_scalar_c(double *dst, const double *src, double mul,
int len)
static void vector_fmul_window_c(float *dst, const float *src0,
const float *src1, const float *win, int len)
static void vector_fmul_add_c(float *dst, const float *src0, const float *src1,
const float *src2, int len)
static void vector_fmul_reverse_c(float *dst, const float *src0,
const float *src1, int len)
static void butterflies_float_c(float *av_restrict v1, float *av_restrict v2,
int len)
float avpriv_scalarproduct_float_c(const float *v1, const float *v2, int len)
av_cold AVFloatDSPContext *avpriv_float_dsp_alloc(int bit_exact)

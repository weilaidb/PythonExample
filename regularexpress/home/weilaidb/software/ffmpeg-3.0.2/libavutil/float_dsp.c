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
#if HAVE_UNISTD_H
#if !HAVE_GETOPT
#define LEN 240
static void fill_float_array(AVLFG *lfg, float *a, int len)
static int compare_floats(const float *a, const float *b, int len,
float max_diff)
static void fill_double_array(AVLFG *lfg, double *a, int len)
static int compare_doubles(const double *a, const double *b, int len,
double max_diff)
static int test_vector_fmul(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, const float *v2)
#define ARBITRARY_FMAC_SCALAR_CONST 0.005
static int test_vector_fmac_scalar(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, const float *src0, float scale)
static int test_vector_fmul_scalar(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, float scale)
static int test_vector_dmul_scalar(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const double *v1, double scale)
#define ARBITRARY_FMUL_WINDOW_CONST 0.008
static int test_vector_fmul_window(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, const float *v2, const float *v3)
#define ARBITRARY_FMUL_ADD_CONST 0.005
static int test_vector_fmul_add(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, const float *v2, const float *v3)
static int test_vector_fmul_reverse(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, const float *v2)
static int test_butterflies_float(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, const float *v2)
#define ARBITRARY_SCALARPRODUCT_CONST 0.2
static int test_scalarproduct_float(AVFloatDSPContext *fdsp, AVFloatDSPContext *cdsp,
const float *v1, const float *v2)
int main(int argc, char **argv)

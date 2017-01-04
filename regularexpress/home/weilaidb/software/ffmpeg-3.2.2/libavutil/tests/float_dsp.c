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

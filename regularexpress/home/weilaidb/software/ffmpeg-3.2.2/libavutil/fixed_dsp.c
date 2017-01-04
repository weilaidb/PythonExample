static void vector_fmul_add_c(int *dst, const int *src0, const int *src1, const int *src2, int len)
static void vector_fmul_reverse_c(int *dst, const int *src0, const int *src1, int len)
static void vector_fmul_window_scaled_c(int16_t *dst, const int32_t *src0,
const int32_t *src1, const int32_t *win,
int len, uint8_t bits)
static void vector_fmul_window_c(int32_t *dst, const int32_t *src0,
const int32_t *src1, const int32_t *win,
int len)
static void vector_fmul_c(int *dst, const int *src0, const int *src1, int len)
static int scalarproduct_fixed_c(const int *v1, const int *v2, int len)
static void butterflies_fixed_c(int *v1, int *v2, int len)
AVFixedDSPContext * avpriv_alloc_fixed_dsp(int bit_exact)

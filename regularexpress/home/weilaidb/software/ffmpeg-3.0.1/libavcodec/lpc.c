#define LPC_USE_DOUBLE
static void lpc_apply_welch_window_c(const int32_t *data, int len,
double *w_data)
static void lpc_compute_autocorr_c(const double *data, int len, int lag,
double *autoc)
static void quantize_lpc_coefs(double *lpc_in, int order, int precision,
int32_t *lpc_out, int *shift, int max_shift, int zero_shift)
static int estimate_best_order(double *ref, int min_order, int max_order)
int ff_lpc_calc_ref_coefs(LPCContext *s,
const int32_t *samples, int order, double *ref)
double ff_lpc_calc_ref_coefs_f(LPCContext *s, const float *samples, int len,
int order, double *ref)
int ff_lpc_calc_coefs(LPCContext *s,
const int32_t *samples, int blocksize, int min_order,
int max_order, int precision,
int32_t coefs[][MAX_LPC_ORDER], int *shift,
enum FFLPCType lpc_type, int lpc_passes,
int omethod, int max_shift, int zero_shift)
av_cold int ff_lpc_init(LPCContext *s, int blocksize, int max_order,
enum FFLPCType lpc_type)
av_cold void ff_lpc_end(LPCContext *s)

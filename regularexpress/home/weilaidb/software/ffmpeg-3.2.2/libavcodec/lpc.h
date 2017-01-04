#define AVCODEC_LPC_H
#define ORDER_METHOD_EST     0
#define ORDER_METHOD_2LEVEL  1
#define ORDER_METHOD_4LEVEL  2
#define ORDER_METHOD_8LEVEL  3
#define ORDER_METHOD_SEARCH  4
#define ORDER_METHOD_LOG     5
#define MIN_LPC_ORDER        1
#define MAX_LPC_ORDER       32
enum FFLPCType ;
typedef struct LPCContext  LPCContext;
int ff_lpc_calc_coefs(LPCContext *s,
const int32_t *samples, int blocksize, int min_order,
int max_order, int precision,
int32_t coefs[][MAX_LPC_ORDER], int *shift,
enum FFLPCType lpc_type, int lpc_passes,
int omethod, int min_shift, int max_shift, int zero_shift);
int ff_lpc_calc_ref_coefs(LPCContext *s,
const int32_t *samples, int order, double *ref);
double ff_lpc_calc_ref_coefs_f(LPCContext *s, const float *samples, int len,
int order, double *ref);
int ff_lpc_init(LPCContext *s, int blocksize, int max_order,
enum FFLPCType lpc_type);
void ff_lpc_init_x86(LPCContext *s);
void ff_lpc_end(LPCContext *s);
#if USE_FIXED
typedef int LPC_TYPE;
typedef double LPC_TYPE;
typedef float LPC_TYPE;
static inline void compute_ref_coefs(const LPC_TYPE *autoc, int max_order,
LPC_TYPE *ref, LPC_TYPE *error)
static inline int AAC_RENAME(compute_lpc_coefs)(const LPC_TYPE *autoc, int max_order,
LPC_TYPE *lpc, int lpc_stride, int fail,
int normalize)

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
ff_lpc_calc_coefs;
ff_lpc_calc_ref_coefs;
ff_lpc_calc_ref_coefs_f;
ff_lpc_init;
ff_lpc_init_x86;
ff_lpc_end;
#if USE_FIXED
typedef int LPC_TYPE;
typedef double LPC_TYPE;
typedef float LPC_TYPE;
compute_ref_coefs
AAC_RENAME(const LPC_TYPE *autoc, int max_order,
LPC_TYPE *lpc, int lpc_stride, int fail,
int normalize)

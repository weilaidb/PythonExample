static const int8_t sqr1[8][2]  = ;
static const int8_t dia1[4][2]  = ;
static const int8_t dia2[8][2]  = ;
static const int8_t hex2[6][2]  = ;
static const int8_t hex4[16][2] = ;
#define COST_MV(x, y)\
do  while(0)
#define COST_P_MV(x, y)\
if (x >= x_min && x <= x_max && y >= y_min && y <= y_max)\
COST_MV(x, y);
void ff_me_init_context(AVMotionEstContext *me_ctx, int mb_size, int search_param,
int width, int height, int x_min, int x_max, int y_min, int y_max)
uint64_t ff_me_cmp_sad(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int x_mv, int y_mv)
uint64_t ff_me_search_esa(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_tss(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_tdls(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_ntss(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_fss(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_ds(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_hexbs(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_epzs(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)
uint64_t ff_me_search_umh(AVMotionEstContext *me_ctx, int x_mb, int y_mb, int *mv)

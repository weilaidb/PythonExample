static const int8_t sqr1[8][2]  = ;
static const int8_t dia1[4][2]  = ;
static const int8_t dia2[8][2]  = ;
static const int8_t hex2[6][2]  = ;
static const int8_t hex4[16][2] = ;
COST_MV\
while
COST_P_MV\
if (x >= x_min && x <= x_max && y >= y_min && y <= y_max)\
COST_MV(x, y);
ff_me_init_context
ff_me_cmp_sad
ff_me_search_esa
ff_me_search_tss
ff_me_search_tdls
ff_me_search_ntss
ff_me_search_fss
ff_me_search_ds
ff_me_search_hexbs
ff_me_search_epzs
ff_me_search_umh

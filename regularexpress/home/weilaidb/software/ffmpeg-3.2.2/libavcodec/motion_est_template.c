#define LOAD_COMMON\
uint32_t av_unused * const score_map= c->score_map;\
const int av_unused xmin= c->xmin;\
const int av_unused ymin= c->ymin;\
const int av_unused xmax= c->xmax;\
const int av_unused ymax= c->ymax;\
uint8_t *mv_penalty= c->current_mv_penalty;\
const int pred_x= c->pred_x;\
const int pred_y= c->pred_y;\
CHECK_HALF_MV\
hpel_motion_search
no_sub_motion_search
get_mb_score
ff_get_mb_score
CHECK_QUARTER_MV\
qpel_motion_search
CHECK_MV\
CHECK_CLIPPED_MV\
CHECK_MV_DIR\
check\
if( (x)<(xmin<<(S)) ) av_log(NULL, AV_LOG_ERROR,  #v, xmin, (x), (y), s->mb_x, s->mb_y);\
if( (x)>(xmax<<(S)) ) av_log(NULL, AV_LOG_ERROR,  #v, xmax, (x), (y), s->mb_x, s->mb_y);\
if( (y)<(ymin<<(S)) ) av_log(NULL, AV_LOG_ERROR,  #v, ymin, (x), (y), s->mb_x, s->mb_y);\
if( (y)>(ymax<<(S)) ) av_log(NULL, AV_LOG_ERROR,  #v, ymax, (x), (y), s->mb_x, s->mb_y);\
#define LOAD_COMMON2\
uint32_t *map= c->map;\
const int qpel= flags&FLAG_QPEL;\
const int shift= 1+qpel;\
small_diamond_search
funny_diamond_search
hex_search
l2s_dia_search
umh_search
full_search
SAB_CHECK_MV\
#define MAX_SAB_SIZE ME_MAP_SIZE
sab_diamond_search
var_diamond_search
diamond_search
epzs_motion_search_internal[2],
int ref_mv_scale, int flags, int size, int h)
ff_epzs_motion_search[2], int ref_mv_scale,
int size, int h)
epzs_motion_search4[2],
int ref_mv_scale)
epzs_motion_search2[2],
int ref_mv_scale)

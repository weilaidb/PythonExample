#define LOAD_COMMON\
uint32_t av_unused * const score_map= c->score_map;\
const int av_unused xmin= c->xmin;\
const int av_unused ymin= c->ymin;\
const int av_unused xmax= c->xmax;\
const int av_unused ymax= c->ymax;\
uint8_t *mv_penalty= c->current_mv_penalty;\
const int pred_x= c->pred_x;\
const int pred_y= c->pred_y;\
#define CHECK_HALF_MV(dx, dy, x, y)\
static int hpel_motion_search(MpegEncContext * s,
int *mx_ptr, int *my_ptr, int dmin,
int src_index, int ref_index,
int size, int h)
static int no_sub_motion_search(MpegEncContext * s,
int *mx_ptr, int *my_ptr, int dmin,
int src_index, int ref_index,
int size, int h)
static inline int get_mb_score(MpegEncContext *s, int mx, int my,
int src_index, int ref_index, int size,
int h, int add_rate)
int ff_get_mb_score(MpegEncContext *s, int mx, int my, int src_index,
int ref_index, int size, int h, int add_rate)
#define CHECK_QUARTER_MV(dx, dy, x, y)\
static int qpel_motion_search(MpegEncContext * s,
int *mx_ptr, int *my_ptr, int dmin,
int src_index, int ref_index,
int size, int h)
#define CHECK_MV(x,y)\
#define CHECK_CLIPPED_MV(ax,ay)\
#define CHECK_MV_DIR(x,y,new_dir)\
#define check(x,y,S,v)\
if( (x)<(xmin<<(S)) ) av_log(NULL, AV_LOG_ERROR, "%d %d %d %d %d xmin" #v, xmin, (x), (y), s->mb_x, s->mb_y);\
if( (x)>(xmax<<(S)) ) av_log(NULL, AV_LOG_ERROR, "%d %d %d %d %d xmax" #v, xmax, (x), (y), s->mb_x, s->mb_y);\
if( (y)<(ymin<<(S)) ) av_log(NULL, AV_LOG_ERROR, "%d %d %d %d %d ymin" #v, ymin, (x), (y), s->mb_x, s->mb_y);\
if( (y)>(ymax<<(S)) ) av_log(NULL, AV_LOG_ERROR, "%d %d %d %d %d ymax" #v, ymax, (x), (y), s->mb_x, s->mb_y);\
#define LOAD_COMMON2\
uint32_t *map= c->map;\
const int qpel= flags&FLAG_QPEL;\
const int shift= 1+qpel;\
static av_always_inline int small_diamond_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
static int funny_diamond_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
static int hex_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags, int dia_size)
static int l2s_dia_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
static int umh_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
static int full_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
#define SAB_CHECK_MV(ax,ay)\
#define MAX_SAB_SIZE ME_MAP_SIZE
static int sab_diamond_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
static int var_diamond_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
static av_always_inline int diamond_search(MpegEncContext * s, int *best, int dmin,
int src_index, int ref_index, int const penalty_factor,
int size, int h, int flags)
static av_always_inline int epzs_motion_search_internal(MpegEncContext * s, int *mx_ptr, int *my_ptr,
int P[10][2], int src_index, int ref_index, int16_t (*last_mv)[2],
int ref_mv_scale, int flags, int size, int h)
int ff_epzs_motion_search(MpegEncContext *s, int *mx_ptr, int *my_ptr,
int P[10][2], int src_index, int ref_index,
int16_t (*last_mv)[2], int ref_mv_scale,
int size, int h)
static int epzs_motion_search4(MpegEncContext * s,
int *mx_ptr, int *my_ptr, int P[10][2],
int src_index, int ref_index, int16_t (*last_mv)[2],
int ref_mv_scale)
static int epzs_motion_search2(MpegEncContext * s,
int *mx_ptr, int *my_ptr, int P[10][2],
int src_index, int ref_index, int16_t (*last_mv)[2],
int ref_mv_scale)

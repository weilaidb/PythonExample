#define AVCODEC_MOTION_EST_H
struct MpegEncContext;
#if ARCH_IA64
#define MAX_MV 1024
#define MAX_MV 4096
#define MAX_DMV (2*MAX_MV)
#define ME_MAP_SIZE 64
#define FF_ME_ZERO 0
#define FF_ME_EPZS 1
#define FF_ME_XONE 2
typedef struct MotionEstContext  MotionEstContext;
static inline int ff_h263_round_chroma(int x)
int ff_init_me(struct MpegEncContext *s);
void ff_estimate_p_frame_motion(struct MpegEncContext *s, int mb_x, int mb_y);
void ff_estimate_b_frame_motion(struct MpegEncContext *s, int mb_x, int mb_y);
int ff_pre_estimate_p_frame_motion(struct MpegEncContext *s,
int mb_x, int mb_y);
int ff_epzs_motion_search(struct MpegEncContext *s, int *mx_ptr, int *my_ptr,
int P[10][2], int src_index, int ref_index,
int16_t (*last_mv)[2], int ref_mv_scale, int size,
int h);
int ff_get_mb_score(struct MpegEncContext *s, int mx, int my, int src_index,
int ref_index, int size, int h, int add_rate);
int ff_get_best_fcode(struct MpegEncContext *s,
int16_t (*mv_table)[2], int type);
void ff_fix_long_p_mvs(struct MpegEncContext *s);
void ff_fix_long_mvs(struct MpegEncContext *s, uint8_t *field_select_table,
int field_select, int16_t (*mv_table)[2], int f_code,
int type, int truncate);

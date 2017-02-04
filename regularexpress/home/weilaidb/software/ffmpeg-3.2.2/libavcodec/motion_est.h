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
ff_h263_round_chroma
ff_init_me;
ff_estimate_p_frame_motion;
ff_estimate_b_frame_motion;
ff_pre_estimate_p_frame_motion;
ff_epzs_motion_search[2], int ref_mv_scale, int size,
int h);
ff_get_mb_score;
ff_get_best_fcode[2], int type);
ff_fix_long_p_mvs;
ff_fix_long_mvs[2], int f_code,
int type, int truncate);

#define AVFILTER_MOTION_ESTIMATION_H
#define AV_ME_METHOD_ESA        1
#define AV_ME_METHOD_TSS        2
#define AV_ME_METHOD_TDLS       3
#define AV_ME_METHOD_NTSS       4
#define AV_ME_METHOD_FSS        5
#define AV_ME_METHOD_DS         6
#define AV_ME_METHOD_HEXBS      7
#define AV_ME_METHOD_EPZS       8
#define AV_ME_METHOD_UMH        9
typedef struct AVMotionEstPredictor  AVMotionEstPredictor;
typedef struct AVMotionEstContext  AVMotionEstContext;
ff_me_init_context;
ff_me_cmp_sad;
ff_me_search_esa;
ff_me_search_tss;
ff_me_search_tdls;
ff_me_search_ntss;
ff_me_search_fss;
ff_me_search_ds;
ff_me_search_hexbs;
ff_me_search_epzs;
ff_me_search_umh;

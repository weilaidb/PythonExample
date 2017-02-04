#define AVCODEC_H264PRED_H
#define VERT_PRED              0
#define HOR_PRED               1
#define DC_PRED                2
#define DIAG_DOWN_LEFT_PRED    3
#define DIAG_DOWN_RIGHT_PRED   4
#define VERT_RIGHT_PRED        5
#define HOR_DOWN_PRED          6
#define VERT_LEFT_PRED         7
#define HOR_UP_PRED            8
#define LEFT_DC_PRED           9
#define TOP_DC_PRED           10
#define DC_128_PRED           11
#define DIAG_DOWN_LEFT_PRED_RV40_NODOWN   12
#define HOR_UP_PRED_RV40_NODOWN           13
#define VERT_LEFT_PRED_RV40_NODOWN        14
#define TM_VP8_PRED            9
#define VERT_VP8_PRED         10
#define HOR_VP8_PRED          14
#define DC_127_PRED           12
#define DC_129_PRED           13
#define DC_PRED8x8             0
#define HOR_PRED8x8            1
#define VERT_PRED8x8           2
#define PLANE_PRED8x8          3
#define LEFT_DC_PRED8x8        4
#define TOP_DC_PRED8x8         5
#define DC_128_PRED8x8         6
#define ALZHEIMER_DC_L0T_PRED8x8  7
#define ALZHEIMER_DC_0LT_PRED8x8  8
#define ALZHEIMER_DC_L00_PRED8x8  9
#define ALZHEIMER_DC_0L0_PRED8x8 10
#define DC_127_PRED8x8         7
#define DC_129_PRED8x8         8
typedef struct H264PredContext  H264PredContext;
ff_h264_pred_init;
ff_h264_pred_init_aarch64;
ff_h264_pred_init_arm;
ff_h264_pred_init_x86;
ff_h264_pred_init_mips;

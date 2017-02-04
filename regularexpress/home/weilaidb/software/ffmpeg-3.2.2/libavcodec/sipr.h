#define AVCODEC_SIPR_H
#define LP_FILTER_ORDER_16k  16
#define L_SUBFR_16k          80
#define PITCH_MIN            30
#define PITCH_MAX            281
#define LSFQ_DIFF_MIN        (0.0125 * M_PI)
#define LP_FILTER_ORDER      10
#define L_INTERPOL           (LP_FILTER_ORDER + 1)
#define SUBFR_SIZE           48
#define SUBFRAME_COUNT_16k   2
typedef enum  SiprMode;
typedef struct SiprParameters  SiprParameters;
typedef struct SiprContext  SiprContext;
extern const float ff_pow_0_5[16];
ff_sipr_init_16k;
ff_sipr_decode_frame_16k;

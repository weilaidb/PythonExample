#define AVCODEC_HUFFYUV_H
#define VLC_BITS 12
#define MAX_BITS 16
#define MAX_N (1<<MAX_BITS)
#define MAX_VLC_N 16384
typedef enum Predictor  Predictor;
typedef struct HYuvContext  HYuvContext;
ff_huffyuv_common_init;
ff_huffyuv_common_end;
ff_huffyuv_alloc_temp;
ff_huffyuv_generate_bits_table;

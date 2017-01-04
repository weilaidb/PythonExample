#define AVCODEC_HUFFYUV_H
#define VLC_BITS 12
#define MAX_BITS 16
#define MAX_N (1<<MAX_BITS)
#define MAX_VLC_N 16384
typedef enum Predictor  Predictor;
typedef struct HYuvContext  HYuvContext;
void ff_huffyuv_common_init(AVCodecContext *s);
void ff_huffyuv_common_end(HYuvContext *s);
int  ff_huffyuv_alloc_temp(HYuvContext *s);
int ff_huffyuv_generate_bits_table(uint32_t *dst, const uint8_t *len_table, int n);

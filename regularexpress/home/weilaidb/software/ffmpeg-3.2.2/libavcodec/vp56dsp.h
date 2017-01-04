#define AVCODEC_VP56DSP_H
typedef struct VP56DSPContext  VP56DSPContext;
void ff_vp6_filter_diag4_c(uint8_t *dst, uint8_t *src, int stride,
const int16_t *h_weights, const int16_t *v_weights);
void ff_vp56dsp_init(VP56DSPContext *s, enum AVCodecID codec);
void ff_vp6dsp_init_arm(VP56DSPContext *s, enum AVCodecID codec);
void ff_vp6dsp_init_x86(VP56DSPContext* c, enum AVCodecID codec);

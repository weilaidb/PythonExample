#define BIAS     (1 << (PRORES_BITS_PER_SAMPLE - 1))
#define CLIP_MIN (1 << (PRORES_BITS_PER_SAMPLE - 8))
#define CLIP_MAX (1 << PRORES_BITS_PER_SAMPLE) - CLIP_MIN - 1
#define CLIP(x) (av_clip((x), CLIP_MIN, CLIP_MAX))
static void put_pixels(uint16_t *dst, int stride, const int16_t *in)
static void prores_idct_put_c(uint16_t *out, int linesize, int16_t *block, const int16_t *qmat)
av_cold void ff_proresdsp_init(ProresDSPContext *dsp, AVCodecContext *avctx)

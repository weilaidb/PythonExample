#define BIAS     (1 << (PRORES_BITS_PER_SAMPLE - 1))
#define CLIP_MIN (1 << (PRORES_BITS_PER_SAMPLE - 8))
#define CLIP_MAX (1 << PRORES_BITS_PER_SAMPLE) - CLIP_MIN - 1
CLIP (av_clip((x), CLIP_MIN, CLIP_MAX))
put_pixels
prores_idct_put_c
ff_proresdsp_init

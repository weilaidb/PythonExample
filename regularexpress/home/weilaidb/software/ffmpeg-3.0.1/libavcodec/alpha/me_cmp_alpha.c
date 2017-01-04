int pix_abs16x16_mvi_asm(void *v, uint8_t *pix1, uint8_t *pix2, int line_size, int h);
static inline uint64_t avg2(uint64_t a, uint64_t b)
static inline uint64_t avg4(uint64_t l1, uint64_t l2, uint64_t l3, uint64_t l4)
static int pix_abs8x8_mvi(void *v, uint8_t *pix1, uint8_t *pix2, int line_size, int h)
static int pix_abs16x16_x2_mvi(void *v, uint8_t *pix1, uint8_t *pix2, int line_size, int h)
static int pix_abs16x16_y2_mvi(void *v, uint8_t *pix1, uint8_t *pix2, int line_size, int h)
static int pix_abs16x16_xy2_mvi(void *v, uint8_t *pix1, uint8_t *pix2, int line_size, int h)
av_cold void ff_me_cmp_init_alpha(MECmpContext *c, AVCodecContext *avctx)

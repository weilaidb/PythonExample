static void get_pixels_mvi(int16_t *restrict block,
const uint8_t *restrict pixels, ptrdiff_t line_size)
static void diff_pixels_mvi(int16_t *block, const uint8_t *s1, const uint8_t *s2,
int stride)
av_cold void ff_pixblockdsp_init_alpha(PixblockDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)

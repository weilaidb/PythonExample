static void get_pixels_16_c(int16_t *av_restrict block, const uint8_t *pixels,
ptrdiff_t line_size)
static void get_pixels_8_c(int16_t *av_restrict block, const uint8_t *pixels,
ptrdiff_t line_size)
static void diff_pixels_c(int16_t *av_restrict block, const uint8_t *s1,
const uint8_t *s2, int stride)
av_cold void ff_pixblockdsp_init(PixblockDSPContext *c, AVCodecContext *avctx)

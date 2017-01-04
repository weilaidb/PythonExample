void ff_add_pixels_clamped_arm(const int16_t *block, uint8_t *dest,
ptrdiff_t line_size);
static void j_rev_dct_arm_put(uint8_t *dest, int line_size, int16_t *block)
static void j_rev_dct_arm_add(uint8_t *dest, int line_size, int16_t *block)
static void simple_idct_arm_put(uint8_t *dest, int line_size, int16_t *block)
static void simple_idct_arm_add(uint8_t *dest, int line_size, int16_t *block)
av_cold void ff_idctdsp_init_arm(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)

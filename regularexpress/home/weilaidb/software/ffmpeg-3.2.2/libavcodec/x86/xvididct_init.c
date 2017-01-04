#if ARCH_X86_32 && HAVE_YASM
static void xvid_idct_mmx_put(uint8_t *dest, int line_size, short *block)
static void xvid_idct_mmx_add(uint8_t *dest, int line_size, short *block)
static void xvid_idct_mmxext_put(uint8_t *dest, int line_size, short *block)
static void xvid_idct_mmxext_add(uint8_t *dest, int line_size, short *block)
av_cold void ff_xvid_idct_init_x86(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth)

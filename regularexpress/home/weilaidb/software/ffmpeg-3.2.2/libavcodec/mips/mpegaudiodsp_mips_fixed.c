#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void ff_mpadsp_apply_window_mips_fixed(int32_t *synth_buf, int32_t *window,
int *dither_state, int16_t *samples, int incr)
static void imdct36_mips_fixed(int *out, int *buf, int *in, int *win)
static void ff_imdct36_blocks_mips_fixed(int *out, int *buf, int *in,
int count, int switch_point, int block_type)
void ff_mpadsp_init_mipsdsp(MPADSPContext *s)

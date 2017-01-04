#if HAVE_INLINE_ASM && HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void ff_mpadsp_apply_window_mips_float(float *synth_buf, float *window,
int *dither_state, float *samples, int incr)
static void ff_dct32_mips_float(float *out, const float *tab)
static void imdct36_mips_float(float *out, float *buf, float *in, float *win)
static void ff_imdct36_blocks_mips_float(float *out, float *buf, float *in,
int count, int switch_point, int block_type)
void ff_mpadsp_init_mipsfpu(MPADSPContext *s)

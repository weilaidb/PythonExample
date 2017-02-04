DECL\
static void imdct36_blocks_ ## CPU(float *out, float *buf, float *in, int count, int switch_point, int block_type);\
void ff_imdct36_float_ ## CPU(float *out, float *buf, float *in, float *win);
#if HAVE_YASM
DECL
DECL
DECL(sse3)
DECL(ssse3)
DECL(avx)
ff_four_imdct36_float_sse;
ff_four_imdct36_float_avx;
DECLARE_ALIGNED(16, static float, mdct_win_sse)[2][4][4*40];
#if HAVE_6REGS && HAVE_SSE_INLINE
MACS rt+=(ra)*(rb)
MLSS rt-=(ra)*(rb)
SUM8               \
apply_window
apply_window_mp3
#if HAVE_YASM
DECL_IMDCT_BLOCKS                                       \
static void imdct36_blocks_ ## CPU1(float *out, float *buf, float *in,      \
int count, int switch_point, int block_type) \
#if HAVE_SSE
DECL_IMDCT_BLOCKS
DECL_IMDCT_BLOCKS
DECL_IMDCT_BLOCKS(sse3,sse)
DECL_IMDCT_BLOCKS(ssse3,sse)
DECL_IMDCT_BLOCKS
ff_mpadsp_init_x86

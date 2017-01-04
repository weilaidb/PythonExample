#define DECL(CPU)\
static void imdct36_blocks_ ## CPU(float *out, float *buf, float *in, int count, int switch_point, int block_type);\
void ff_imdct36_float_ ## CPU(float *out, float *buf, float *in, float *win);
#if HAVE_YASM
#if ARCH_X86_32
DECL(sse)
DECL(sse2)
DECL(sse3)
DECL(ssse3)
DECL(avx)
void ff_four_imdct36_float_sse(float *out, float *buf, float *in, float *win,
float *tmpbuf);
void ff_four_imdct36_float_avx(float *out, float *buf, float *in, float *win,
float *tmpbuf);
DECLARE_ALIGNED(16, static float, mdct_win_sse)[2][4][4*40];
#if HAVE_6REGS && HAVE_SSE_INLINE
#define MACS(rt, ra, rb) rt+=(ra)*(rb)
#define MLSS(rt, ra, rb) rt-=(ra)*(rb)
#define SUM8(op, sum, w, p)               \
static void apply_window(const float *buf, const float *win1,
const float *win2, float *sum1, float *sum2, int len)
static void apply_window_mp3(float *in, float *win, int *unused, float *out,
int incr)
#if HAVE_YASM
#define DECL_IMDCT_BLOCKS(CPU1, CPU2)                                       \
static void imdct36_blocks_ ## CPU1(float *out, float *buf, float *in,      \
int count, int switch_point, int block_type) \
#if HAVE_SSE
#if ARCH_X86_32
DECL_IMDCT_BLOCKS(sse,sse)
DECL_IMDCT_BLOCKS(sse2,sse)
DECL_IMDCT_BLOCKS(sse3,sse)
DECL_IMDCT_BLOCKS(ssse3,sse)
#if HAVE_AVX_EXTERNAL
DECL_IMDCT_BLOCKS(avx,avx)
av_cold void ff_mpadsp_init_x86(MPADSPContext *s)

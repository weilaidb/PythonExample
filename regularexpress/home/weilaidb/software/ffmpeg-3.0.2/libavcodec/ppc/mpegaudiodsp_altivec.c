#if HAVE_ALTIVEC
#define MACS(rt, ra, rb) rt+=(ra)*(rb)
#define MLSS(rt, ra, rb) rt-=(ra)*(rb)
#define SUM8(op, sum, w, p)               \
static void apply_window(const float *buf, const float *win1,
const float *win2, float *sum1, float *sum2, int len)
static void apply_window_mp3(float *in, float *win, int *unused, float *out,
int incr)
av_cold void ff_mpadsp_init_ppc(MPADSPContext *s)

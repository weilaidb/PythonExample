#if USE_FLOATS
#define RENAME(n) n##_float
static inline float round_sample(float *sum)
#define MACS(rt, ra, rb) rt+=(ra)*(rb)
#define MULS(ra, rb) ((ra)*(rb))
#define MULH3(x, y, s) ((s)*(y)*(x))
#define MLSS(rt, ra, rb) rt-=(ra)*(rb)
#define MULLx(x, y, s) ((y)*(x))
#define FIXHR(x)        ((float)(x))
#define FIXR(x)        ((float)(x))
#define SHR(a,b)       ((a)*(1.0f/(1<<(b))))
#define RENAME(n) n##_fixed
#define OUT_SHIFT (WFRAC_BITS + FRAC_BITS - 15)
static inline int round_sample(int64_t *sum)
#   define MULS(ra, rb) MUL64(ra, rb)
#   define MACS(rt, ra, rb) MAC64(rt, ra, rb)
#   define MLSS(rt, ra, rb) MLS64(rt, ra, rb)
#   define MULH3(x, y, s) MULH((s)*(x), y)
#   define MULLx(x, y, s) MULL(x,y,s)
#   define SHR(a,b)       ((a)>>(b))
#   define FIXR(a)        ((int)((a) * FRAC_ONE + 0.5))
#   define FIXHR(a)       ((int)((a) * (1LL<<32) + 0.5))
DECLARE_ALIGNED(16, INTFLOAT, RENAME(ff_mdct_win))[8][MDCT_BUF_SIZE];
DECLARE_ALIGNED(16, MPA_INT, RENAME(ff_mpa_synth_window))[512+256];
#define SUM8(op, sum, w, p)               \
#define SUM8P2(sum1, op1, sum2, op2, w1, w2, p) \
void RENAME(ff_mpadsp_apply_window)(MPA_INT *synth_buf, MPA_INT *window,
int *dither_state, OUT_INT *samples,
int incr)
void RENAME(ff_mpa_synth_filter)(MPADSPContext *s, MPA_INT *synth_buf_ptr,
int *synth_buf_offset,
MPA_INT *window, int *dither_state,
OUT_INT *samples, int incr,
MPA_INT *sb_samples)
av_cold void RENAME(ff_mpa_synth_init)(MPA_INT *window)
av_cold void RENAME(ff_init_mpadsp_tabs)(void)
#define C1 FIXHR(0.98480775301220805936/2)
#define C2 FIXHR(0.93969262078590838405/2)
#define C3 FIXHR(0.86602540378443864676/2)
#define C4 FIXHR(0.76604444311897803520/2)
#define C5 FIXHR(0.64278760968653932632/2)
#define C6 FIXHR(0.5/2)
#define C7 FIXHR(0.34202014332566873304/2)
#define C8 FIXHR(0.17364817766693034885/2)
static const INTFLOAT icos36[9] = ;
static const INTFLOAT icos36h[9] = ;
static void imdct36(INTFLOAT *out, INTFLOAT *buf, INTFLOAT *in, INTFLOAT *win)
void RENAME(ff_imdct36_blocks)(INTFLOAT *out, INTFLOAT *buf, INTFLOAT *in,
int count, int switch_point, int block_type)

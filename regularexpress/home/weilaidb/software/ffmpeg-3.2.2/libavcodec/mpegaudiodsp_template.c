#if USE_FLOATS
RENAME n##_float
round_sample
MACS rt+=(ra)*(rb)
MULS ((ra)*(rb))
MULH3 ((s)*(y)*(x))
MLSS rt-=(ra)*(rb)
MULLx ((y)*(x))
FIXHR        ((float)(x))
FIXR        ((float)(x))
SHR       ((a)*(1.0f/(1<<(b))))
RENAME n##_fixed
#define OUT_SHIFT (WFRAC_BITS + FRAC_BITS - 15)
round_sample
MULS MUL64(ra, rb)
MACS MAC64(rt, ra, rb)
MLSS MLS64(rt, ra, rb)
MULH3 MULH((s)*(x), y)
MULLx MULL(x,y,s)
SHR       ((a)>>(b))
FIXR        ((int)((a) * FRAC_ONE + 0.5))
FIXHR       ((int)((a) * (1LL<<32) + 0.5))
DECLARE_ALIGNED)[8][MDCT_BUF_SIZE];
DECLARE_ALIGNED(16, MPA_INT, RENAME(ff_mpa_synth_window))[512+256];
SUM8               \
SUM8P2 \
RENAME(MPA_INT *synth_buf, MPA_INT *window,
int *dither_state, OUT_INT *samples,
int incr)
RENAME(MPADSPContext *s, MPA_INT *synth_buf_ptr,
int *synth_buf_offset,
MPA_INT *window, int *dither_state,
OUT_INT *samples, int incr,
MPA_INT *sb_samples)
RENAME(MPA_INT *window)
RENAME(void)
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
static const INTFLOAT icos36[9] = ;
static const INTFLOAT icos36h[9] = ;
imdct36
RENAME(INTFLOAT *out, INTFLOAT *buf, INTFLOAT *in,
int count, int switch_point, int block_type)

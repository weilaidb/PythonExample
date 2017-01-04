#if HAVE_MMX_INLINE
#define BITS_FRW_ACC   3
#define SHIFT_FRW_COL  BITS_FRW_ACC
#define SHIFT_FRW_ROW  (BITS_FRW_ACC + 17 - 3)
#define RND_FRW_ROW    (1 << (SHIFT_FRW_ROW-1))
#define X8(x) x,x,x,x,x,x,x,x
DECLARE_ALIGNED(16, static const int16_t, fdct_tg_all_16)[24] = ;
DECLARE_ALIGNED(16, static const int16_t, ocos_4_16)[8] = ;
DECLARE_ALIGNED(16, static const int16_t, fdct_one_corr)[8] = ;
DECLARE_ALIGNED(8, static const int32_t, fdct_r_row)[2] = ;
static const struct
fdct_r_row_sse2 =
;
DECLARE_ALIGNED(8, static const int16_t, tab_frw_01234567)[] = ;
static const struct
tab_frw_01234567_sse2 =
;
#define S(s) AV_TOSTRING(s)
#define FDCT_COL(cpu, mm, mov)\
static av_always_inline void fdct_col_##cpu(const int16_t *in, int16_t *out, int offset)\
FDCT_COL(mmx, mm, movq)
FDCT_COL(sse2, xmm, movdqa)
static av_always_inline void fdct_row_sse2(const int16_t *in, int16_t *out)
static av_always_inline void fdct_row_mmxext(const int16_t *in, int16_t *out,
const int16_t *table)
static av_always_inline void fdct_row_mmx(const int16_t *in, int16_t *out, const int16_t *table)
void ff_fdct_mmx(int16_t *block)
#if HAVE_MMXEXT_INLINE
void ff_fdct_mmxext(int16_t *block)
#if HAVE_SSE2_INLINE
void ff_fdct_sse2(int16_t *block)

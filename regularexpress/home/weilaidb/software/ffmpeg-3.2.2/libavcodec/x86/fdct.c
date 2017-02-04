#if HAVE_MMX_INLINE
#define BITS_FRW_ACC   3
#define SHIFT_FRW_COL  BITS_FRW_ACC
#define SHIFT_FRW_ROW  (BITS_FRW_ACC + 17 - 3)
#define RND_FRW_ROW    (1 << (SHIFT_FRW_ROW-1))
DECLARE_ALIGNED[24] = ;
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
S AV_TOSTRING(s)
FDCT_COL\
static av_always_inline void fdct_col_##cpu(const int16_t *in, int16_t *out, int offset)\
FDCT_COL(mmx, mm, movq)
FDCT_COL(sse2, xmm, movdqa)
fdct_row_sse2
fdct_row_mmxext
fdct_row_mmx
ff_fdct_mmx
#if HAVE_MMXEXT_INLINE
ff_fdct_mmxext
#if HAVE_SSE2_INLINE
ff_fdct_sse2

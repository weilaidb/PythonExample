#define X264_X86_UTIL_H
#undef M128_ZERO
#define M128_ZERO ((__m128))
#define x264_union128_t x264_union128_sse_t
typedef union  MAY_ALIAS x264_union128_sse_t;
#if HAVE_VECTOREXT
typedef uint32_t v4si __attribute__((vector_size (16)));
#if HAVE_X86_INLINE_ASM && HAVE_MMX
#define x264_median_mv x264_median_mv_mmx2
static ALWAYS_INLINE void x264_median_mv_mmx2( int16_t *dst, int16_t *a, int16_t *b, int16_t *c )
#define x264_predictor_difference x264_predictor_difference_mmx2
static ALWAYS_INLINE int x264_predictor_difference_mmx2( int16_t (*mvc)[2], intptr_t i_mvc )
#define x264_cabac_mvd_sum x264_cabac_mvd_sum_mmx2
static ALWAYS_INLINE uint16_t x264_cabac_mvd_sum_mmx2(uint8_t *mvdleft, uint8_t *mvdtop)
#define x264_predictor_clip x264_predictor_clip_mmx2
static int ALWAYS_INLINE x264_predictor_clip_mmx2( int16_t (*dst)[2], int16_t (*mvc)[2], int i_mvc, int16_t mv_limit[2][2], uint32_t pmv )
#define x264_predictor_roundclip x264_predictor_roundclip_mmx2
static int ALWAYS_INLINE x264_predictor_roundclip_mmx2( int16_t (*dst)[2], int16_t (*mvc)[2], int i_mvc, int16_t mv_limit[2][2], uint32_t pmv )

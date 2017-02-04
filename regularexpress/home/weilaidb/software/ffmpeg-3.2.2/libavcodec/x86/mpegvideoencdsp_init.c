ff_pix_sum16_mmx;
ff_pix_sum16_mmxext;
ff_pix_sum16_sse2;
ff_pix_sum16_xop;
ff_pix_norm1_mmx;
ff_pix_norm1_sse2;
#if HAVE_INLINE_ASM
PHADDD                            \
\
\
PMULHRW                     \
\
\
\
\
\
DEF x ## _mmx
#define SET_RND MOVQ_WONE
#define SCALE_OFFSET 1
#undef DEF
#undef SET_RND
#undef SCALE_OFFSET
#undef PMULHRW
DEF x ## _3dnow
SET_RND
#define SCALE_OFFSET 0
PMULHRW                     \
\
#undef DEF
#undef SET_RND
#undef SCALE_OFFSET
#undef PMULHRW
#if HAVE_SSSE3_INLINE
#undef PHADDD
DEF x ## _ssse3
SET_RND
#define SCALE_OFFSET -1
PHADDD                            \
\           \
PMULHRW                     \
\
#undef DEF
#undef SET_RND
#undef SCALE_OFFSET
#undef PMULHRW
#undef PHADDD
draw_edges_mmx
ff_mpegvideoencdsp_init_x86

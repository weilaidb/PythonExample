int ff_pix_sum16_mmx(uint8_t *pix, int line_size);
int ff_pix_sum16_mmxext(uint8_t *pix, int line_size);
int ff_pix_sum16_sse2(uint8_t *pix, int line_size);
int ff_pix_sum16_xop(uint8_t *pix, int line_size);
int ff_pix_norm1_mmx(uint8_t *pix, int line_size);
int ff_pix_norm1_sse2(uint8_t *pix, int line_size);
#if HAVE_INLINE_ASM
#define PHADDD(a, t)                            \
"movq  " #a ", " #t "               \n\t"   \
"psrlq    $32, " #a "               \n\t"   \
"paddd " #t ", " #a "               \n\t"
#define PMULHRW(x, y, s, o)                     \
"pmulhw " #s ", " #x "              \n\t"   \
"pmulhw " #s ", " #y "              \n\t"   \
"paddw  " #o ", " #x "              \n\t"   \
"paddw  " #o ", " #y "              \n\t"   \
"psraw      $1, " #x "              \n\t"   \
"psraw      $1, " #y "              \n\t"
#define DEF(x) x ## _mmx
#define SET_RND MOVQ_WONE
#define SCALE_OFFSET 1
#undef DEF
#undef SET_RND
#undef SCALE_OFFSET
#undef PMULHRW
#define DEF(x) x ## _3dnow
#define SET_RND(x)
#define SCALE_OFFSET 0
#define PMULHRW(x, y, s, o)                     \
"pmulhrw " #s ", " #x "             \n\t"   \
"pmulhrw " #s ", " #y "             \n\t"
#undef DEF
#undef SET_RND
#undef SCALE_OFFSET
#undef PMULHRW
#if HAVE_SSSE3_INLINE
#undef PHADDD
#define DEF(x) x ## _ssse3
#define SET_RND(x)
#define SCALE_OFFSET -1
#define PHADDD(a, t)                            \
"pshufw $0x0E, " #a ", " #t "       \n\t"   \           \
"paddd " #t ", " #a "               \n\t"
#define PMULHRW(x, y, s, o)                     \
"pmulhrsw " #s ", " #x "            \n\t"   \
"pmulhrsw " #s ", " #y "            \n\t"
#undef DEF
#undef SET_RND
#undef SCALE_OFFSET
#undef PMULHRW
#undef PHADDD
static void draw_edges_mmx(uint8_t *buf, int wrap, int width, int height,
int w, int h, int sides)
av_cold void ff_mpegvideoencdsp_init_x86(MpegvideoEncDSPContext *c,
AVCodecContext *avctx)

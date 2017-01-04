void ff_put_pixels8_x2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels8_x2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_x2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_x2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_x2_sse2(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels16_x2_sse2(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels16_y2_sse2(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels16_y2_sse2(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_x2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_x2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_x2_exact_mmxext(uint8_t *block,
const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_x2_exact_3dnow(uint8_t *block,
const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels8_y2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_pixels8_y2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_y2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_y2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_y2_exact_mmxext(uint8_t *block,
const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_put_no_rnd_pixels8_y2_exact_3dnow(uint8_t *block,
const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_x2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_x2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_y2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_y2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_pixels8_xy2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_approx_pixels8_xy2_mmxext(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
void ff_avg_approx_pixels8_xy2_3dnow(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h);
#define avg_pixels8_mmx         ff_avg_pixels8_mmx
#define avg_pixels8_x2_mmx      ff_avg_pixels8_x2_mmx
#define avg_pixels16_mmx        ff_avg_pixels16_mmx
#define avg_pixels8_xy2_mmx     ff_avg_pixels8_xy2_mmx
#define avg_pixels16_xy2_mmx    ff_avg_pixels16_xy2_mmx
#define put_pixels8_mmx         ff_put_pixels8_mmx
#define put_pixels16_mmx        ff_put_pixels16_mmx
#define put_pixels8_xy2_mmx     ff_put_pixels8_xy2_mmx
#define put_pixels16_xy2_mmx    ff_put_pixels16_xy2_mmx
#define avg_no_rnd_pixels16_mmx ff_avg_pixels16_mmx
#define put_no_rnd_pixels8_mmx  ff_put_pixels8_mmx
#define put_no_rnd_pixels16_mmx ff_put_pixels16_mmx
#if HAVE_INLINE_ASM
#define DEF(x, y) x ## _no_rnd_ ## y ## _mmx
#define SET_RND  MOVQ_WONE
#define PAVGBP(a, b, c, d, e, f)        PAVGBP_MMX_NO_RND(a, b, c, d, e, f)
#define PAVGB(a, b, c, e)               PAVGB_MMX_NO_RND(a, b, c, e)
#define STATIC static
#undef DEF
#undef SET_RND
#undef PAVGBP
#undef PAVGB
#undef STATIC
#if HAVE_MMX
CALL_2X_PIXELS(avg_no_rnd_pixels16_y2_mmx, avg_no_rnd_pixels8_y2_mmx, 8)
CALL_2X_PIXELS(put_no_rnd_pixels16_y2_mmx, put_no_rnd_pixels8_y2_mmx, 8)
CALL_2X_PIXELS(avg_no_rnd_pixels16_xy2_mmx, avg_no_rnd_pixels8_xy2_mmx, 8)
CALL_2X_PIXELS(put_no_rnd_pixels16_xy2_mmx, put_no_rnd_pixels8_xy2_mmx, 8)
#define DEF(x, y) x ## _ ## y ## _mmx
#define SET_RND  MOVQ_WTWO
#define PAVGBP(a, b, c, d, e, f)        PAVGBP_MMX(a, b, c, d, e, f)
#define PAVGB(a, b, c, e)               PAVGB_MMX(a, b, c, e)
#undef DEF
#define DEF(x, y) ff_ ## x ## _ ## y ## _mmx
#define STATIC
#undef DEF
#undef SET_RND
#undef PAVGBP
#undef PAVGB
#if HAVE_MMX
CALL_2X_PIXELS(avg_pixels16_y2_mmx, avg_pixels8_y2_mmx, 8)
CALL_2X_PIXELS(put_pixels16_y2_mmx, put_pixels8_y2_mmx, 8)
CALL_2X_PIXELS_EXPORT(ff_avg_pixels16_xy2_mmx, ff_avg_pixels8_xy2_mmx, 8)
CALL_2X_PIXELS_EXPORT(ff_put_pixels16_xy2_mmx, ff_put_pixels8_xy2_mmx, 8)
#if HAVE_YASM
#define HPELDSP_AVG_PIXELS16(CPUEXT)                      \
CALL_2X_PIXELS(put_no_rnd_pixels16_x2 ## CPUEXT, ff_put_no_rnd_pixels8_x2 ## CPUEXT, 8) \
CALL_2X_PIXELS(put_pixels16_y2        ## CPUEXT, ff_put_pixels8_y2        ## CPUEXT, 8) \
CALL_2X_PIXELS(put_no_rnd_pixels16_y2 ## CPUEXT, ff_put_no_rnd_pixels8_y2 ## CPUEXT, 8) \
CALL_2X_PIXELS(avg_pixels16           ## CPUEXT, ff_avg_pixels8           ## CPUEXT, 8) \
CALL_2X_PIXELS(avg_pixels16_x2        ## CPUEXT, ff_avg_pixels8_x2        ## CPUEXT, 8) \
CALL_2X_PIXELS(avg_pixels16_y2        ## CPUEXT, ff_avg_pixels8_y2        ## CPUEXT, 8) \
CALL_2X_PIXELS(avg_pixels16_xy2       ## CPUEXT, ff_avg_pixels8_xy2       ## CPUEXT, 8) \
CALL_2X_PIXELS(avg_approx_pixels16_xy2## CPUEXT, ff_avg_approx_pixels8_xy2## CPUEXT, 8)
HPELDSP_AVG_PIXELS16(_3dnow)
HPELDSP_AVG_PIXELS16(_mmxext)
#define SET_HPEL_FUNCS_EXT(PFX, IDX, SIZE, CPU)                             \
if (HAVE_MMX_EXTERNAL)                                                  \
c->PFX ## _pixels_tab IDX [0] = PFX ## _pixels ## SIZE ## _     ## CPU;
#if HAVE_MMX_INLINE
#define SET_HPEL_FUNCS(PFX, IDX, SIZE, CPU)                                     \
do  while (0)
#define SET_HPEL_FUNCS(PFX, IDX, SIZE, CPU)                                     \
do  while (0)
static void hpeldsp_init_mmx(HpelDSPContext *c, int flags, int cpu_flags)
static void hpeldsp_init_mmxext(HpelDSPContext *c, int flags, int cpu_flags)
static void hpeldsp_init_3dnow(HpelDSPContext *c, int flags, int cpu_flags)
static void hpeldsp_init_sse2(HpelDSPContext *c, int flags, int cpu_flags)
static void hpeldsp_init_ssse3(HpelDSPContext *c, int flags, int cpu_flags)
av_cold void ff_hpeldsp_init_x86(HpelDSPContext *c, int flags)

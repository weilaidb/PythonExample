ff_put_pixels8_x2_mmxext;
ff_put_pixels8_x2_3dnow;
ff_put_pixels16_x2_mmxext;
ff_put_pixels16_x2_3dnow;
ff_put_pixels16_x2_sse2;
ff_avg_pixels16_x2_sse2;
ff_put_pixels16_y2_sse2;
ff_avg_pixels16_y2_sse2;
ff_put_no_rnd_pixels8_x2_mmxext;
ff_put_no_rnd_pixels8_x2_3dnow;
ff_put_no_rnd_pixels8_x2_exact_mmxext;
ff_put_no_rnd_pixels8_x2_exact_3dnow;
ff_put_pixels8_y2_mmxext;
ff_put_pixels8_y2_3dnow;
ff_put_no_rnd_pixels8_y2_mmxext;
ff_put_no_rnd_pixels8_y2_3dnow;
ff_put_no_rnd_pixels8_y2_exact_mmxext;
ff_put_no_rnd_pixels8_y2_exact_3dnow;
ff_avg_pixels8_3dnow;
ff_avg_pixels8_x2_mmxext;
ff_avg_pixels8_x2_3dnow;
ff_avg_pixels8_y2_mmxext;
ff_avg_pixels8_y2_3dnow;
ff_avg_pixels8_xy2_3dnow;
ff_avg_approx_pixels8_xy2_mmxext;
ff_avg_approx_pixels8_xy2_3dnow;
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
DEF x ## _no_rnd_ ## y ## _mmx
#define SET_RND  MOVQ_WONE
PAVGBP        PAVGBP_MMX_NO_RND(a, b, c, d, e, f)
PAVGB               PAVGB_MMX_NO_RND(a, b, c, e)
#define STATIC static
#undef DEF
#undef SET_RND
#undef PAVGBP
#undef PAVGB
#undef STATIC
CALL_2X_PIXELS
CALL_2X_PIXELS(put_no_rnd_pixels16_y2_mmx, put_no_rnd_pixels8_y2_mmx, 8)
CALL_2X_PIXELS(avg_no_rnd_pixels16_xy2_mmx, avg_no_rnd_pixels8_xy2_mmx, 8)
CALL_2X_PIXELS(put_no_rnd_pixels16_xy2_mmx, put_no_rnd_pixels8_xy2_mmx, 8)
DEF x ## _ ## y ## _mmx
#define SET_RND  MOVQ_WTWO
PAVGBP        PAVGBP_MMX(a, b, c, d, e, f)
PAVGB               PAVGB_MMX(a, b, c, e)
#undef DEF
DEF ff_ ## x ## _ ## y ## _mmx
#define STATIC
#undef DEF
#undef SET_RND
#undef PAVGBP
#undef PAVGB
CALL_2X_PIXELS
CALL_2X_PIXELS(put_pixels16_y2_mmx, put_pixels8_y2_mmx, 8)
CALL_2X_PIXELS_EXPORT(ff_avg_pixels16_xy2_mmx, ff_avg_pixels8_xy2_mmx, 8)
CALL_2X_PIXELS_EXPORT(ff_put_pixels16_xy2_mmx, ff_put_pixels8_xy2_mmx, 8)
#if HAVE_YASM
HPELDSP_AVG_PIXELS16                      \
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
SET_HPEL_FUNCS_EXT                             \
if (HAVE_MMX_EXTERNAL)                                                  \
c->PFX ## _pixels_tab IDX [0] = PFX ## _pixels ## SIZE ## _     ## CPU;
#if HAVE_MMX_INLINE
SET_HPEL_FUNCS                                     \
do  while (0)
SET_HPEL_FUNCS                                     \
do  while (0)
hpeldsp_init_mmx
hpeldsp_init_mmxext
hpeldsp_init_3dnow
hpeldsp_init_sse2
hpeldsp_init_ssse3
ff_hpeldsp_init_x86

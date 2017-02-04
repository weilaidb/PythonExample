DECL_DIRAC_PIXOP(put, mmx);
DECL_DIRAC_PIXOP(avg, mmx);
DECL_DIRAC_PIXOP(avg, mmxext);
ff_put_dirac_pixels16_sse2;
ff_avg_dirac_pixels16_sse2;
ff_put_dirac_pixels32_sse2;
ff_avg_dirac_pixels32_sse2;
ff_add_rect_clamped_mmx;
ff_add_rect_clamped_sse2;
ff_add_dirac_obmc8_mmx;
ff_add_dirac_obmc16_mmx;
ff_add_dirac_obmc32_mmx;
ff_add_dirac_obmc16_sse2;
ff_add_dirac_obmc32_sse2;
ff_put_rect_clamped_mmx;
ff_put_rect_clamped_sse2;
ff_put_signed_rect_clamped_mmx;
ff_put_signed_rect_clamped_sse2;
ff_put_signed_rect_clamped_10_sse4;
ff_dequant_subband_32_sse4;
#if HAVE_YASM
HPEL_FILTER                                                             \
void ff_dirac_hpel_filter_v_ ## EXT(uint8_t *, const uint8_t *, int, int);               \
void ff_dirac_hpel_filter_h_ ## EXT(uint8_t *, const uint8_t *, int);                    \
\
static void dirac_hpel_filter_ ## EXT(uint8_t *dsth, uint8_t *dstv, uint8_t *dstc,       \
const uint8_t *src, int stride, int width, int height)   \
PIXFUNC                                                   \  \
c->PFX ## _dirac_pixels_tab[1][IDX] = ff_ ## PFX ## _dirac_pixels16_ ## EXT; \
c->PFX ## _dirac_pixels_tab[2][IDX] = ff_ ## PFX ## _dirac_pixels32_ ## EXT
DIRAC_PIXOP\
void ff_ ## OPNAME2 ## _dirac_pixels8_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME2 ## _dirac_pixels16_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME2 ## _dirac_pixels32_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
DIRAC_PIXOP(put, ff_put, mmx)
DIRAC_PIXOP(avg, ff_avg, mmx)
DIRAC_PIXOP(avg, ff_avg, mmxext)
ff_put_dirac_pixels16_sse2
ff_avg_dirac_pixels16_sse2
ff_put_dirac_pixels32_sse2
ff_avg_dirac_pixels32_sse2
HPEL_FILTER                                                     \
void dirac_hpel_filter_ ## EXT(uint8_t *dsth, uint8_t *dstv, uint8_t *dstc,              \
const uint8_t *src, int stride, int width, int height);
PIXFUNC do  while (0)
HPEL_FILTER
HPEL_FILTER
ff_diracdsp_init_x86

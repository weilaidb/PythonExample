DECL_DIRAC_PIXOP(put, mmx);
DECL_DIRAC_PIXOP(avg, mmx);
DECL_DIRAC_PIXOP(avg, mmxext);
void ff_put_dirac_pixels16_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h);
void ff_avg_dirac_pixels16_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h);
void ff_put_dirac_pixels32_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h);
void ff_avg_dirac_pixels32_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h);
void ff_add_rect_clamped_mmx(uint8_t *, const uint16_t *, int, const int16_t *, int, int, int);
void ff_add_rect_clamped_sse2(uint8_t *, const uint16_t *, int, const int16_t *, int, int, int);
void ff_add_dirac_obmc8_mmx(uint16_t *dst, const uint8_t *src, int stride, const uint8_t *obmc_weight, int yblen);
void ff_add_dirac_obmc16_mmx(uint16_t *dst, const uint8_t *src, int stride, const uint8_t *obmc_weight, int yblen);
void ff_add_dirac_obmc32_mmx(uint16_t *dst, const uint8_t *src, int stride, const uint8_t *obmc_weight, int yblen);
void ff_add_dirac_obmc16_sse2(uint16_t *dst, const uint8_t *src, int stride, const uint8_t *obmc_weight, int yblen);
void ff_add_dirac_obmc32_sse2(uint16_t *dst, const uint8_t *src, int stride, const uint8_t *obmc_weight, int yblen);
void ff_put_rect_clamped_mmx(uint8_t *dst, int dst_stride, const int16_t *src, int src_stride, int width, int height);
void ff_put_rect_clamped_sse2(uint8_t *dst, int dst_stride, const int16_t *src, int src_stride, int width, int height);
void ff_put_signed_rect_clamped_mmx(uint8_t *dst, int dst_stride, const int16_t *src, int src_stride, int width, int height);
void ff_put_signed_rect_clamped_sse2(uint8_t *dst, int dst_stride, const int16_t *src, int src_stride, int width, int height);
void ff_put_signed_rect_clamped_10_sse4(uint8_t *dst, int dst_stride, const uint8_t *src, int src_stride, int width, int height);
void ff_dequant_subband_32_sse4(uint8_t *src, uint8_t *dst, ptrdiff_t stride, const int qf, const int qs, int tot_v, int tot_h);
#if HAVE_YASM
#define HPEL_FILTER(MMSIZE, EXT)                                                             \
void ff_dirac_hpel_filter_v_ ## EXT(uint8_t *, const uint8_t *, int, int);               \
void ff_dirac_hpel_filter_h_ ## EXT(uint8_t *, const uint8_t *, int);                    \
\
static void dirac_hpel_filter_ ## EXT(uint8_t *dsth, uint8_t *dstv, uint8_t *dstc,       \
const uint8_t *src, int stride, int width, int height)   \
#define PIXFUNC(PFX, IDX, EXT)                                                   \  \
c->PFX ## _dirac_pixels_tab[1][IDX] = ff_ ## PFX ## _dirac_pixels16_ ## EXT; \
c->PFX ## _dirac_pixels_tab[2][IDX] = ff_ ## PFX ## _dirac_pixels32_ ## EXT
#define DIRAC_PIXOP(OPNAME2, OPNAME, EXT)\
void ff_ ## OPNAME2 ## _dirac_pixels8_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME2 ## _dirac_pixels16_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME2 ## _dirac_pixels32_ ## EXT(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
DIRAC_PIXOP(put, ff_put, mmx)
DIRAC_PIXOP(avg, ff_avg, mmx)
DIRAC_PIXOP(avg, ff_avg, mmxext)
void ff_put_dirac_pixels16_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h)
void ff_avg_dirac_pixels16_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h)
void ff_put_dirac_pixels32_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h)
void ff_avg_dirac_pixels32_sse2(uint8_t *dst, const uint8_t *src[5], int stride, int h)
#define HPEL_FILTER(MMSIZE, EXT)                                                     \
void dirac_hpel_filter_ ## EXT(uint8_t *dsth, uint8_t *dstv, uint8_t *dstc,              \
const uint8_t *src, int stride, int width, int height);
#define PIXFUNC(PFX, IDX, EXT) do  while (0)
#if !ARCH_X86_64
HPEL_FILTER(8, mmx)
HPEL_FILTER(16, sse2)
void ff_diracdsp_init_x86(DiracDSPContext* c)

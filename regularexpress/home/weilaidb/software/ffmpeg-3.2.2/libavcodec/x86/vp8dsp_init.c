#if HAVE_YASM
void ff_put_vp8_epel4_h4_mmxext(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel4_h6_mmxext(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel4_v4_mmxext(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel4_v6_mmxext(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_h4_sse2  (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_h6_sse2  (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_v4_sse2  (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_v6_sse2  (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel4_h4_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel4_h6_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel4_v4_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel4_v6_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_h4_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_h6_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_v4_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_epel8_v6_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear4_h_mmxext(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear8_h_sse2  (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear4_h_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear8_h_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear4_v_mmxext(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear8_v_sse2  (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear4_v_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear8_v_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_pixels8_mmx (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_pixels16_mmx(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_pixels16_sse(uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
#define TAP_W16(OPT, FILTERTYPE, TAPTYPE) \
static void ff_put_vp8_ ## FILTERTYPE ## 16_ ## TAPTYPE ## _ ## OPT( \
uint8_t *dst,  ptrdiff_t dststride, uint8_t *src, \
ptrdiff_t srcstride, int height, int mx, int my) \
#define TAP_W8(OPT, FILTERTYPE, TAPTYPE) \
static void ff_put_vp8_ ## FILTERTYPE ## 8_ ## TAPTYPE ## _ ## OPT( \
uint8_t *dst,  ptrdiff_t dststride, uint8_t *src, \
ptrdiff_t srcstride, int height, int mx, int my) \
#if ARCH_X86_32
TAP_W8 (mmxext, epel, h4)
TAP_W8 (mmxext, epel, h6)
TAP_W16(mmxext, epel, h6)
TAP_W8 (mmxext, epel, v4)
TAP_W8 (mmxext, epel, v6)
TAP_W16(mmxext, epel, v6)
TAP_W8 (mmxext, bilinear, h)
TAP_W16(mmxext, bilinear, h)
TAP_W8 (mmxext, bilinear, v)
TAP_W16(mmxext, bilinear, v)
TAP_W16(sse2,  epel, h6)
TAP_W16(sse2,  epel, v6)
TAP_W16(sse2,  bilinear, h)
TAP_W16(sse2,  bilinear, v)
TAP_W16(ssse3, epel, h6)
TAP_W16(ssse3, epel, v6)
TAP_W16(ssse3, bilinear, h)
TAP_W16(ssse3, bilinear, v)
#define HVTAP(OPT, ALIGN, TAPNUMX, TAPNUMY, SIZE, MAXHEIGHT) \
static void ff_put_vp8_epel ## SIZE ## _h ## TAPNUMX ## v ## TAPNUMY ## _ ## OPT( \
uint8_t *dst, ptrdiff_t dststride, uint8_t *src, \
ptrdiff_t srcstride, int height, int mx, int my) \
#if ARCH_X86_32
#define HVTAPMMX(x, y) \
HVTAP(mmxext, 8, x, y,  4,  8) \
HVTAP(mmxext, 8, x, y,  8, 16)
HVTAP(mmxext, 8, 6, 6, 16, 16)
#define HVTAPMMX(x, y) \
HVTAP(mmxext, 8, x, y,  4,  8)
HVTAPMMX(4, 4)
HVTAPMMX(4, 6)
HVTAPMMX(6, 4)
HVTAPMMX(6, 6)
#define HVTAPSSE2(x, y, w) \
HVTAP(sse2,  16, x, y, w, 16) \
HVTAP(ssse3, 16, x, y, w, 16)
HVTAPSSE2(4, 4, 8)
HVTAPSSE2(4, 6, 8)
HVTAPSSE2(6, 4, 8)
HVTAPSSE2(6, 6, 8)
HVTAPSSE2(6, 6, 16)
HVTAP(ssse3, 16, 4, 4, 4, 8)
HVTAP(ssse3, 16, 4, 6, 4, 8)
HVTAP(ssse3, 16, 6, 4, 4, 8)
HVTAP(ssse3, 16, 6, 6, 4, 8)
#define HVBILIN(OPT, ALIGN, SIZE, MAXHEIGHT) \
static void ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT( \
uint8_t *dst, ptrdiff_t dststride, uint8_t *src, \
ptrdiff_t srcstride, int height, int mx, int my) \
HVBILIN(mmxext,  8,  4,  8)
#if ARCH_X86_32
HVBILIN(mmxext,  8,  8, 16)
HVBILIN(mmxext,  8, 16, 16)
HVBILIN(sse2,  8,  8, 16)
HVBILIN(sse2,  8, 16, 16)
HVBILIN(ssse3, 8,  4,  8)
HVBILIN(ssse3, 8,  8, 16)
HVBILIN(ssse3, 8, 16, 16)
void ff_vp8_idct_dc_add_mmx(uint8_t *dst, int16_t block[16],
ptrdiff_t stride);
void ff_vp8_idct_dc_add_sse4(uint8_t *dst, int16_t block[16],
ptrdiff_t stride);
void ff_vp8_idct_dc_add4y_mmx(uint8_t *dst, int16_t block[4][16],
ptrdiff_t stride);
void ff_vp8_idct_dc_add4y_sse2(uint8_t *dst, int16_t block[4][16],
ptrdiff_t stride);
void ff_vp8_idct_dc_add4uv_mmx(uint8_t *dst, int16_t block[2][16],
ptrdiff_t stride);
void ff_vp8_luma_dc_wht_mmx(int16_t block[4][4][16], int16_t dc[16]);
void ff_vp8_luma_dc_wht_sse(int16_t block[4][4][16], int16_t dc[16]);
void ff_vp8_idct_add_mmx(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
void ff_vp8_idct_add_sse(uint8_t *dst, int16_t block[16], ptrdiff_t stride);
#define DECLARE_LOOP_FILTER(NAME)                                       \
void ff_vp8_v_loop_filter_simple_ ## NAME(uint8_t *dst,                 \
ptrdiff_t stride,             \
int flim);                    \
void ff_vp8_h_loop_filter_simple_ ## NAME(uint8_t *dst,                 \
ptrdiff_t stride,             \
int flim);                    \
void ff_vp8_v_loop_filter16y_inner_ ## NAME (uint8_t *dst,              \
ptrdiff_t stride,          \
int e, int i, int hvt);    \
void ff_vp8_h_loop_filter16y_inner_ ## NAME (uint8_t *dst,              \
ptrdiff_t stride,          \
int e, int i, int hvt);    \
void ff_vp8_v_loop_filter8uv_inner_ ## NAME (uint8_t *dstU,             \
uint8_t *dstV,             \
ptrdiff_t s,               \
int e, int i, int hvt);    \
void ff_vp8_h_loop_filter8uv_inner_ ## NAME (uint8_t *dstU,             \
uint8_t *dstV,             \
ptrdiff_t s,               \
int e, int i, int hvt);    \
void ff_vp8_v_loop_filter16y_mbedge_ ## NAME(uint8_t *dst,              \
ptrdiff_t stride,          \
int e, int i, int hvt);    \
void ff_vp8_h_loop_filter16y_mbedge_ ## NAME(uint8_t *dst,              \
ptrdiff_t stride,          \
int e, int i, int hvt);    \
void ff_vp8_v_loop_filter8uv_mbedge_ ## NAME(uint8_t *dstU,             \
uint8_t *dstV,             \
ptrdiff_t s,               \
int e, int i, int hvt);    \
void ff_vp8_h_loop_filter8uv_mbedge_ ## NAME(uint8_t *dstU,             \
uint8_t *dstV,             \
ptrdiff_t s,               \
int e, int i, int hvt);
DECLARE_LOOP_FILTER(mmx)
DECLARE_LOOP_FILTER(mmxext)
DECLARE_LOOP_FILTER(sse2)
DECLARE_LOOP_FILTER(ssse3)
DECLARE_LOOP_FILTER(sse4)
#define VP8_LUMA_MC_FUNC(IDX, SIZE, OPT) \
c->put_vp8_epel_pixels_tab[IDX][0][2] = ff_put_vp8_epel ## SIZE ## _h6_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][2][0] = ff_put_vp8_epel ## SIZE ## _v6_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][2][2] = ff_put_vp8_epel ## SIZE ## _h6v6_ ## OPT
#define VP8_MC_FUNC(IDX, SIZE, OPT) \
c->put_vp8_epel_pixels_tab[IDX][0][1] = ff_put_vp8_epel ## SIZE ## _h4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][1][0] = ff_put_vp8_epel ## SIZE ## _v4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][1][1] = ff_put_vp8_epel ## SIZE ## _h4v4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][1][2] = ff_put_vp8_epel ## SIZE ## _h6v4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][2][1] = ff_put_vp8_epel ## SIZE ## _h4v6_ ## OPT; \
VP8_LUMA_MC_FUNC(IDX, SIZE, OPT)
#define VP8_BILINEAR_MC_FUNC(IDX, SIZE, OPT) \
c->put_vp8_bilinear_pixels_tab[IDX][0][1] = ff_put_vp8_bilinear ## SIZE ## _h_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][0][2] = ff_put_vp8_bilinear ## SIZE ## _h_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][1][0] = ff_put_vp8_bilinear ## SIZE ## _v_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][1][1] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][1][2] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][2][0] = ff_put_vp8_bilinear ## SIZE ## _v_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][2][1] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][2][2] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT
av_cold void ff_vp78dsp_init_x86(VP8DSPContext *c)
av_cold void ff_vp8dsp_init_x86(VP8DSPContext *c)

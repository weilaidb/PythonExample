#if HAVE_YASM
ff_put_vp8_epel4_h4_mmxext;
ff_put_vp8_epel4_h6_mmxext;
ff_put_vp8_epel4_v4_mmxext;
ff_put_vp8_epel4_v6_mmxext;
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
ff_put_vp8_bilinear4_h_mmxext;
void ff_put_vp8_bilinear8_h_sse2  (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear4_h_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
void ff_put_vp8_bilinear8_h_ssse3 (uint8_t *dst, ptrdiff_t dststride,
uint8_t *src, ptrdiff_t srcstride,
int height, int mx, int my);
ff_put_vp8_bilinear4_v_mmxext;
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
ff_put_vp8_pixels16_mmx;
ff_put_vp8_pixels16_sse;
TAP_W16 \
static void ff_put_vp8_ ## FILTERTYPE ## 16_ ## TAPTYPE ## _ ## OPT( \
uint8_t *dst,  ptrdiff_t dststride, uint8_t *src, \
ptrdiff_t srcstride, int height, int mx, int my) \
TAP_W8 \
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
TAP_W16
TAP_W16(sse2,  epel, v6)
TAP_W16(sse2,  bilinear, h)
TAP_W16(sse2,  bilinear, v)
TAP_W16(ssse3, epel, h6)
TAP_W16(ssse3, epel, v6)
TAP_W16(ssse3, bilinear, h)
TAP_W16(ssse3, bilinear, v)
HVTAP \
static void ff_put_vp8_epel ## SIZE ## _h ## TAPNUMX ## v ## TAPNUMY ## _ ## OPT( \
uint8_t *dst, ptrdiff_t dststride, uint8_t *src, \
ptrdiff_t srcstride, int height, int mx, int my) \
#if ARCH_X86_32
HVTAPMMX \
HVTAP(mmxext, 8, x, y,  4,  8) \
HVTAP(mmxext, 8, x, y,  8, 16)
HVTAP(mmxext, 8, 6, 6, 16, 16)
HVTAPMMX \
HVTAP(mmxext, 8, x, y,  4,  8)
HVTAPMMX
HVTAPMMX(4, 6)
HVTAPMMX(6, 4)
HVTAPMMX(6, 6)
HVTAPSSE2 \
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
HVBILIN \
static void ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT( \
uint8_t *dst, ptrdiff_t dststride, uint8_t *src, \
ptrdiff_t srcstride, int height, int mx, int my) \
HVBILIN(mmxext,  8,  4,  8)
HVBILIN
HVBILIN(mmxext,  8, 16, 16)
HVBILIN
HVBILIN(sse2,  8, 16, 16)
HVBILIN(ssse3, 8,  4,  8)
HVBILIN(ssse3, 8,  8, 16)
HVBILIN(ssse3, 8, 16, 16)
ff_vp8_idct_dc_add_mmx;
ff_vp8_idct_dc_add_sse4;
ff_vp8_idct_dc_add4y_mmx;
ff_vp8_idct_dc_add4y_sse2;
ff_vp8_idct_dc_add4uv_mmx;
ff_vp8_luma_dc_wht_mmx;
ff_vp8_luma_dc_wht_sse;
ff_vp8_idct_add_mmx;
ff_vp8_idct_add_sse;
DECLARE_LOOP_FILTER                                       \
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
VP8_LUMA_MC_FUNC \
c->put_vp8_epel_pixels_tab[IDX][0][2] = ff_put_vp8_epel ## SIZE ## _h6_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][2][0] = ff_put_vp8_epel ## SIZE ## _v6_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][2][2] = ff_put_vp8_epel ## SIZE ## _h6v6_ ## OPT
VP8_MC_FUNC \
c->put_vp8_epel_pixels_tab[IDX][0][1] = ff_put_vp8_epel ## SIZE ## _h4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][1][0] = ff_put_vp8_epel ## SIZE ## _v4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][1][1] = ff_put_vp8_epel ## SIZE ## _h4v4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][1][2] = ff_put_vp8_epel ## SIZE ## _h6v4_ ## OPT; \
c->put_vp8_epel_pixels_tab[IDX][2][1] = ff_put_vp8_epel ## SIZE ## _h4v6_ ## OPT; \
VP8_LUMA_MC_FUNC(IDX, SIZE, OPT)
VP8_BILINEAR_MC_FUNC \
c->put_vp8_bilinear_pixels_tab[IDX][0][1] = ff_put_vp8_bilinear ## SIZE ## _h_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][0][2] = ff_put_vp8_bilinear ## SIZE ## _h_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][1][0] = ff_put_vp8_bilinear ## SIZE ## _v_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][1][1] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][1][2] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][2][0] = ff_put_vp8_bilinear ## SIZE ## _v_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][2][1] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT; \
c->put_vp8_bilinear_pixels_tab[IDX][2][2] = ff_put_vp8_bilinear ## SIZE ## _hv_ ## OPT
ff_vp78dsp_init_x86
ff_vp8dsp_init_x86

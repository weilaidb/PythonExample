#define AVCODEC_X86_HEVCDSP_H
idct_dc_proto \
void ff_hevc_idct##size##_dc_add_##bitd##_##opt(uint8_t *dst, int16_t *coeffs, ptrdiff_t stride)
PEL_LINK \
dst[idx1][idx2][idx3] = ff_hevc_put_hevc_ ## name ## _ ## D ## _##opt; \
dst ## _bi[idx1][idx2][idx3] = ff_hevc_put_hevc_bi_ ## name ## _ ## D ## _##opt; \
dst ## _uni[idx1][idx2][idx3] = ff_hevc_put_hevc_uni_ ## name ## _ ## D ## _##opt; \
dst ## _uni_w[idx1][idx2][idx3] = ff_hevc_put_hevc_uni_w_ ## name ## _ ## D ## _##opt; \
dst ## _bi_w[idx1][idx2][idx3] = ff_hevc_put_hevc_bi_w_ ## name ## _ ## D ## _##opt
PEL_PROTOTYPE \
void ff_hevc_put_hevc_ ## name ## _ ## D ## _##opt(int16_t *dst, uint8_t *_src, ptrdiff_t _srcstride, int height, intptr_t mx, intptr_t my,int width); \
void ff_hevc_put_hevc_bi_ ## name ## _ ## D ## _##opt(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride, int16_t *src2, int height, intptr_t mx, intptr_t my, int width); \
void ff_hevc_put_hevc_uni_ ## name ## _ ## D ## _##opt(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride, int height, intptr_t mx, intptr_t my, int width); \
void ff_hevc_put_hevc_uni_w_ ## name ## _ ## D ## _##opt(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride, int height, int denom, int wx, int ox, intptr_t mx, intptr_t my, int width); \
void ff_hevc_put_hevc_bi_w_ ## name ## _ ## D ## _##opt(uint8_t *_dst, ptrdiff_t _dststride, uint8_t *_src, ptrdiff_t _srcstride, int16_t *src2, int height, int denom, int wx0, int wx1, int ox0, int ox1, intptr_t mx, intptr_t my, int width)
EPEL_PROTOTYPES \
PEL_PROTOTYPE(fname##4,  bitd, opt); \
PEL_PROTOTYPE(fname##6,  bitd, opt); \
PEL_PROTOTYPE(fname##8,  bitd, opt); \
PEL_PROTOTYPE(fname##12, bitd, opt); \
PEL_PROTOTYPE(fname##16, bitd, opt); \
PEL_PROTOTYPE(fname##24, bitd, opt); \
PEL_PROTOTYPE(fname##32, bitd, opt); \
PEL_PROTOTYPE(fname##48, bitd, opt); \
PEL_PROTOTYPE(fname##64, bitd, opt)
QPEL_PROTOTYPES \
PEL_PROTOTYPE(fname##4,  bitd, opt); \
PEL_PROTOTYPE(fname##8,  bitd, opt); \
PEL_PROTOTYPE(fname##12, bitd, opt); \
PEL_PROTOTYPE(fname##16, bitd, opt); \
PEL_PROTOTYPE(fname##24, bitd, opt); \
PEL_PROTOTYPE(fname##32, bitd, opt); \
PEL_PROTOTYPE(fname##48, bitd, opt); \
PEL_PROTOTYPE(fname##64, bitd, opt)
WEIGHTING_PROTOTYPE \
void ff_hevc_put_hevc_uni_w##width##_##bitd##_##opt(uint8_t *dst, ptrdiff_t dststride, int16_t *_src, int height, int denom,  int _wx, int _ox); \
void ff_hevc_put_hevc_bi_w##width##_##bitd##_##opt(uint8_t *dst, ptrdiff_t dststride, int16_t *_src, int16_t *_src2, int height, int denom,  int _wx0,  int _wx1, int _ox0, int _ox1)
WEIGHTING_PROTOTYPES \
WEIGHTING_PROTOTYPE(2, bitd, opt); \
WEIGHTING_PROTOTYPE(4, bitd, opt); \
WEIGHTING_PROTOTYPE(6, bitd, opt); \
WEIGHTING_PROTOTYPE(8, bitd, opt); \
WEIGHTING_PROTOTYPE(12, bitd, opt); \
WEIGHTING_PROTOTYPE(16, bitd, opt); \
WEIGHTING_PROTOTYPE(24, bitd, opt); \
WEIGHTING_PROTOTYPE(32, bitd, opt); \
WEIGHTING_PROTOTYPE(48, bitd, opt); \
WEIGHTING_PROTOTYPE(64, bitd, opt)
EPEL_PROTOTYPES(pel_pixels ,  8, sse4);
EPEL_PROTOTYPES(pel_pixels , 10, sse4);
EPEL_PROTOTYPES(pel_pixels , 12, sse4);
ff_hevc_put_hevc_pel_pixels16_8_avx2;
ff_hevc_put_hevc_pel_pixels24_8_avx2;
ff_hevc_put_hevc_pel_pixels32_8_avx2;
ff_hevc_put_hevc_pel_pixels48_8_avx2;
ff_hevc_put_hevc_pel_pixels64_8_avx2;
ff_hevc_put_hevc_pel_pixels16_10_avx2;
ff_hevc_put_hevc_pel_pixels24_10_avx2;
ff_hevc_put_hevc_pel_pixels32_10_avx2;
ff_hevc_put_hevc_pel_pixels48_10_avx2;
ff_hevc_put_hevc_pel_pixels64_10_avx2;
ff_hevc_put_hevc_uni_pel_pixels32_8_avx2;
ff_hevc_put_hevc_uni_pel_pixels48_8_avx2;
ff_hevc_put_hevc_uni_pel_pixels64_8_avx2;
ff_hevc_put_hevc_uni_pel_pixels96_8_avx2;
ff_hevc_put_hevc_uni_pel_pixels128_8_avx2;
ff_hevc_put_hevc_bi_pel_pixels16_8_avx2;
ff_hevc_put_hevc_bi_pel_pixels24_8_avx2;
ff_hevc_put_hevc_bi_pel_pixels32_8_avx2;
ff_hevc_put_hevc_bi_pel_pixels48_8_avx2;
ff_hevc_put_hevc_bi_pel_pixels64_8_avx2;
ff_hevc_put_hevc_bi_pel_pixels16_10_avx2;
ff_hevc_put_hevc_bi_pel_pixels24_10_avx2;
ff_hevc_put_hevc_bi_pel_pixels32_10_avx2;
ff_hevc_put_hevc_bi_pel_pixels48_10_avx2;
ff_hevc_put_hevc_bi_pel_pixels64_10_avx2;
EPEL_PROTOTYPES(epel_h ,  8, sse4);
EPEL_PROTOTYPES(epel_h , 10, sse4);
EPEL_PROTOTYPES(epel_h , 12, sse4);
EPEL_PROTOTYPES(epel_v ,  8, sse4);
EPEL_PROTOTYPES(epel_v , 10, sse4);
EPEL_PROTOTYPES(epel_v , 12, sse4);
EPEL_PROTOTYPES(epel_hv ,  8, sse4);
EPEL_PROTOTYPES(epel_hv , 10, sse4);
EPEL_PROTOTYPES(epel_hv , 12, sse4);
PEL_PROTOTYPE(epel_h16, 8, avx2);
PEL_PROTOTYPE(epel_h24, 8, avx2);
PEL_PROTOTYPE(epel_h32, 8, avx2);
PEL_PROTOTYPE(epel_h48, 8, avx2);
PEL_PROTOTYPE(epel_h64, 8, avx2);
PEL_PROTOTYPE(epel_h16,10, avx2);
PEL_PROTOTYPE(epel_h24,10, avx2);
PEL_PROTOTYPE(epel_h32,10, avx2);
PEL_PROTOTYPE(epel_h48,10, avx2);
PEL_PROTOTYPE(epel_h64,10, avx2);
PEL_PROTOTYPE(epel_v16, 8, avx2);
PEL_PROTOTYPE(epel_v24, 8, avx2);
PEL_PROTOTYPE(epel_v32, 8, avx2);
PEL_PROTOTYPE(epel_v48, 8, avx2);
PEL_PROTOTYPE(epel_v64, 8, avx2);
PEL_PROTOTYPE(epel_v16,10, avx2);
PEL_PROTOTYPE(epel_v24,10, avx2);
PEL_PROTOTYPE(epel_v32,10, avx2);
PEL_PROTOTYPE(epel_v48,10, avx2);
PEL_PROTOTYPE(epel_v64,10, avx2);
PEL_PROTOTYPE(epel_hv16, 8, avx2);
PEL_PROTOTYPE(epel_hv24, 8, avx2);
PEL_PROTOTYPE(epel_hv32, 8, avx2);
PEL_PROTOTYPE(epel_hv48, 8, avx2);
PEL_PROTOTYPE(epel_hv64, 8, avx2);
PEL_PROTOTYPE(epel_hv16,10, avx2);
PEL_PROTOTYPE(epel_hv24,10, avx2);
PEL_PROTOTYPE(epel_hv32,10, avx2);
PEL_PROTOTYPE(epel_hv48,10, avx2);
PEL_PROTOTYPE(epel_hv64,10, avx2);
QPEL_PROTOTYPES(qpel_h ,  8, sse4);
QPEL_PROTOTYPES(qpel_h , 10, sse4);
QPEL_PROTOTYPES(qpel_h , 12, sse4);
QPEL_PROTOTYPES(qpel_v,  8, sse4);
QPEL_PROTOTYPES(qpel_v, 10, sse4);
QPEL_PROTOTYPES(qpel_v, 12, sse4);
QPEL_PROTOTYPES(qpel_hv,  8, sse4);
QPEL_PROTOTYPES(qpel_hv, 10, sse4);
QPEL_PROTOTYPES(qpel_hv, 12, sse4);
PEL_PROTOTYPE(qpel_h16, 8, avx2);
PEL_PROTOTYPE(qpel_h24, 8, avx2);
PEL_PROTOTYPE(qpel_h32, 8, avx2);
PEL_PROTOTYPE(qpel_h48, 8, avx2);
PEL_PROTOTYPE(qpel_h64, 8, avx2);
PEL_PROTOTYPE(qpel_h16,10, avx2);
PEL_PROTOTYPE(qpel_h24,10, avx2);
PEL_PROTOTYPE(qpel_h32,10, avx2);
PEL_PROTOTYPE(qpel_h48,10, avx2);
PEL_PROTOTYPE(qpel_h64,10, avx2);
PEL_PROTOTYPE(qpel_v16, 8, avx2);
PEL_PROTOTYPE(qpel_v24, 8, avx2);
PEL_PROTOTYPE(qpel_v32, 8, avx2);
PEL_PROTOTYPE(qpel_v48, 8, avx2);
PEL_PROTOTYPE(qpel_v64, 8, avx2);
PEL_PROTOTYPE(qpel_v16,10, avx2);
PEL_PROTOTYPE(qpel_v24,10, avx2);
PEL_PROTOTYPE(qpel_v32,10, avx2);
PEL_PROTOTYPE(qpel_v48,10, avx2);
PEL_PROTOTYPE(qpel_v64,10, avx2);
PEL_PROTOTYPE(qpel_hv16, 8, avx2);
PEL_PROTOTYPE(qpel_hv24, 8, avx2);
PEL_PROTOTYPE(qpel_hv32, 8, avx2);
PEL_PROTOTYPE(qpel_hv48, 8, avx2);
PEL_PROTOTYPE(qpel_hv64, 8, avx2);
PEL_PROTOTYPE(qpel_hv16,10, avx2);
PEL_PROTOTYPE(qpel_hv24,10, avx2);
PEL_PROTOTYPE(qpel_hv32,10, avx2);
PEL_PROTOTYPE(qpel_hv48,10, avx2);
PEL_PROTOTYPE(qpel_hv64,10, avx2);
WEIGHTING_PROTOTYPES(8, sse4);
WEIGHTING_PROTOTYPES(10, sse4);
WEIGHTING_PROTOTYPES(12, sse4);
ff_hevc_transform_add4_8_mmxext;
ff_hevc_transform_add8_8_sse2;
ff_hevc_transform_add16_8_sse2;
ff_hevc_transform_add32_8_sse2;
ff_hevc_transform_add8_8_avx;
ff_hevc_transform_add16_8_avx;
ff_hevc_transform_add32_8_avx;
ff_hevc_transform_add32_8_avx2;
ff_hevc_transform_add4_10_mmxext;
ff_hevc_transform_add8_10_sse2;
ff_hevc_transform_add16_10_sse2;
ff_hevc_transform_add32_10_sse2;
ff_hevc_transform_add16_10_avx2;
ff_hevc_transform_add32_10_avx2;

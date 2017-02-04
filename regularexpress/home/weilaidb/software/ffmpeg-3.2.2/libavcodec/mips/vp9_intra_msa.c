IPRED_SUBS_UH2_UH  \
ff_vert_16x16_msa
ff_vert_32x32_msa
ff_hor_16x16_msa
ff_hor_32x32_msa
ff_dc_4x4_msa
INTRA_DC_TL_4x4                                    \
void ff_dc_##dir##_4x4_msa(uint8_t *dst, ptrdiff_t dst_stride,  \
const uint8_t *left,                 \
const uint8_t *top)                  \
INTRA_DC_TL_4x4(top);
INTRA_DC_TL_4x4(left);
ff_dc_8x8_msa
INTRA_DC_TL_8x8                                    \
void ff_dc_##dir##_8x8_msa(uint8_t *dst, ptrdiff_t dst_stride,  \
const uint8_t *left,                 \
const uint8_t *top)                  \
INTRA_DC_TL_8x8(top);
INTRA_DC_TL_8x8(left);
ff_dc_16x16_msa
INTRA_DC_TL_16x16                                        \
void ff_dc_##dir##_16x16_msa(uint8_t *dst, ptrdiff_t dst_stride,      \
const uint8_t *left,                     \
const uint8_t *top)                      \
INTRA_DC_TL_16x16(top);
INTRA_DC_TL_16x16(left);
ff_dc_32x32_msa
INTRA_DC_TL_32x32                                    \
void ff_dc_##dir##_32x32_msa(uint8_t *dst, ptrdiff_t dst_stride,  \
const uint8_t *left,                 \
const uint8_t *top)                  \
INTRA_DC_TL_32x32(top);
INTRA_DC_TL_32x32(left);
INTRA_PREDICT_VALDC_16X16_MSA                             \
void ff_dc_##val##_16x16_msa(uint8_t *dst, ptrdiff_t dst_stride,       \
const uint8_t *left, const uint8_t *top)  \
INTRA_PREDICT_VALDC_16X16_MSA(127);
INTRA_PREDICT_VALDC_16X16_MSA(128);
INTRA_PREDICT_VALDC_16X16_MSA(129);
INTRA_PREDICT_VALDC_32X32_MSA                             \
void ff_dc_##val##_32x32_msa(uint8_t *dst, ptrdiff_t dst_stride,       \
const uint8_t *left, const uint8_t *top)  \
INTRA_PREDICT_VALDC_32X32_MSA(127);
INTRA_PREDICT_VALDC_32X32_MSA(128);
INTRA_PREDICT_VALDC_32X32_MSA(129);
ff_tm_4x4_msa
ff_tm_8x8_msa
ff_tm_16x16_msa
ff_tm_32x32_msa

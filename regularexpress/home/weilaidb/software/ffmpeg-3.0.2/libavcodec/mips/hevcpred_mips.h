#define AVCODEC_MIPS_HEVCPRED_MIPS_H
void ff_hevc_intra_pred_planar_0_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride);
void ff_hevc_intra_pred_planar_1_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride);
void ff_hevc_intra_pred_planar_2_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride);
void ff_hevc_intra_pred_planar_3_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride);
void ff_hevc_intra_pred_dc_msa(uint8_t *dst, const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int log2, int c_idx);
void ff_pred_intra_pred_angular_0_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode);
void ff_pred_intra_pred_angular_1_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode);
void ff_pred_intra_pred_angular_2_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode);
void ff_pred_intra_pred_angular_3_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode);
void ff_intra_pred_8_16x16_msa(HEVCContext *s, int x0, int y0, int c_idx);
void ff_intra_pred_8_32x32_msa(HEVCContext *s, int x0, int y0, int c_idx);

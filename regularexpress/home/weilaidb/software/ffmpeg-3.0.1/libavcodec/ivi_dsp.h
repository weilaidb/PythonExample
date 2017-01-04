#define AVCODEC_IVI_DSP_H
void ff_ivi_recompose53(const IVIPlaneDesc *plane, uint8_t *dst,
const int dst_pitch);
void ff_ivi_recompose_haar(const IVIPlaneDesc *plane, uint8_t *dst,
const int dst_pitch);
void ff_ivi_inverse_haar_8x8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_inverse_haar_8x1(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_inverse_haar_1x8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_row_haar8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_col_haar8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_inverse_haar_4x4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_row_haar4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_col_haar4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_dc_haar_2d(const int32_t *in, int16_t *out, uint32_t pitch,
int blk_size);
void ff_ivi_inverse_slant_8x8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_inverse_slant_4x4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_dc_slant_2d(const int32_t *in, int16_t *out, uint32_t pitch, int blk_size);
void ff_ivi_row_slant8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_col_slant8(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_row_slant4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_col_slant4(const int32_t *in, int16_t *out, uint32_t pitch,
const uint8_t *flags);
void ff_ivi_dc_row_slant(const int32_t *in, int16_t *out, uint32_t pitch, int blk_size);
void ff_ivi_dc_col_slant(const int32_t *in, int16_t *out, uint32_t pitch, int blk_size);
void ff_ivi_put_pixels_8x8(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags);
void ff_ivi_put_dc_pixel_8x8(const int32_t *in, int16_t *out, uint32_t pitch, int blk_size);
void ff_ivi_mc_8x8_delta(int16_t *buf, const int16_t *ref_buf, uint32_t pitch, int mc_type);
void ff_ivi_mc_4x4_delta(int16_t *buf, const int16_t *ref_buf, uint32_t pitch, int mc_type);
void ff_ivi_mc_8x8_no_delta(int16_t *buf, const int16_t *ref_buf, uint32_t pitch, int mc_type);
void ff_ivi_mc_4x4_no_delta(int16_t *buf, const int16_t *ref_buf, uint32_t pitch, int mc_type);
void ff_ivi_mc_avg_8x8_delta(int16_t *buf, const int16_t *ref_buf, const int16_t *ref_buf2, uint32_t pitch, int mc_type, int mc_type2);
void ff_ivi_mc_avg_4x4_delta(int16_t *buf, const int16_t *ref_buf, const int16_t *ref_buf2, uint32_t pitch, int mc_type, int mc_type2);
void ff_ivi_mc_avg_8x8_no_delta(int16_t *buf, const int16_t *ref_buf, const int16_t *ref_buf2, uint32_t pitch, int mc_type, int mc_type2);
void ff_ivi_mc_avg_4x4_no_delta(int16_t *buf, const int16_t *ref_buf, const int16_t *ref_buf2, uint32_t pitch, int mc_type, int mc_type2);

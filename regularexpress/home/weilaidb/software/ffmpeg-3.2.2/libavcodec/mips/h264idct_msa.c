#define AVC_ITRANS_H(in0, in1, in2, in3, out0, out1, out2, out3)          \
static void avc_idct4x4_addblk_msa(uint8_t *dst, int16_t *src,
int32_t dst_stride)
static void avc_idct4x4_addblk_dc_msa(uint8_t *dst, int16_t *src,
int32_t dst_stride)
static void avc_deq_idct_luma_dc_msa(int16_t *dst, int16_t *src,
int32_t de_q_val)
static void avc_idct8_addblk_msa(uint8_t *dst, int16_t *src, int32_t dst_stride)
static void avc_idct8_dc_addblk_msa(uint8_t *dst, int16_t *src,
int32_t dst_stride)
void ff_h264_idct_add_msa(uint8_t *dst, int16_t *src,
int32_t dst_stride)
void ff_h264_idct8_addblk_msa(uint8_t *dst, int16_t *src,
int32_t dst_stride)
void ff_h264_idct4x4_addblk_dc_msa(uint8_t *dst, int16_t *src,
int32_t dst_stride)
void ff_h264_idct8_dc_addblk_msa(uint8_t *dst, int16_t *src,
int32_t dst_stride)
void ff_h264_idct_add16_msa(uint8_t *dst,
const int32_t *blk_offset,
int16_t *block, int32_t dst_stride,
const uint8_t nzc[15 * 8])
void ff_h264_idct8_add4_msa(uint8_t *dst, const int32_t *blk_offset,
int16_t *block, int32_t dst_stride,
const uint8_t nzc[15 * 8])
void ff_h264_idct_add8_msa(uint8_t **dst,
const int32_t *blk_offset,
int16_t *block, int32_t dst_stride,
const uint8_t nzc[15 * 8])
void ff_h264_idct_add8_422_msa(uint8_t **dst,
const int32_t *blk_offset,
int16_t *block, int32_t dst_stride,
const uint8_t nzc[15 * 8])
void ff_h264_idct_add16_intra_msa(uint8_t *dst,
const int32_t *blk_offset,
int16_t *block,
int32_t dst_stride,
const uint8_t nzc[15 * 8])
void ff_h264_deq_idct_luma_dc_msa(int16_t *dst, int16_t *src,
int32_t de_qval)

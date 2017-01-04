static const int8_t intra_pred_angle_up[17] = ;
static const int8_t intra_pred_angle_low[16] = ;
#define HEVC_PRED_PLANAR_16x2(src0_r, src0_l, tmp0, tmp1, vec0, vec1,          \
mul_val_h0, mul_val_h1, mul_val_h2, mul_val_h3,  \
res0, res1, mul_val_b0, mul_val_b1, round)       \
static void hevc_intra_pred_vert_4x4_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_vert_8x8_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_vert_16x16_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_horiz_4x4_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_horiz_8x8_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_horiz_16x16_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_horiz_32x32_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride)
static void hevc_intra_pred_dc_4x4_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_dc_8x8_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_dc_16x16_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
int32_t flag)
static void hevc_intra_pred_dc_32x32_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride)
static void hevc_intra_pred_plane_4x4_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride)
static void hevc_intra_pred_plane_8x8_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride)
static void hevc_intra_pred_plane_16x16_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride)
static void process_intra_upper_16x16_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
uint8_t offset)
static void process_intra_lower_16x16_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride,
uint8_t offset)
static void hevc_intra_pred_plane_32x32_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst, int32_t stride)
static void hevc_intra_pred_angular_upper_4width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void hevc_intra_pred_angular_upper_8width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void hevc_intra_pred_angular_upper_16width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void hevc_intra_pred_angular_upper_32width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void hevc_intra_pred_angular_lower_4width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void hevc_intra_pred_angular_lower_8width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void hevc_intra_pred_angular_lower_16width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void hevc_intra_pred_angular_lower_32width_msa(const uint8_t *src_top,
const uint8_t *src_left,
uint8_t *dst,
int32_t stride,
int32_t mode)
static void intra_predict_vert_32x32_msa(const uint8_t *src, uint8_t *dst,
int32_t dst_stride)
void ff_hevc_intra_pred_planar_0_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride)
void ff_hevc_intra_pred_planar_1_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride)
void ff_hevc_intra_pred_planar_2_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride)
void ff_hevc_intra_pred_planar_3_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride)
void ff_hevc_intra_pred_dc_msa(uint8_t *dst, const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int log2, int c_idx)
void ff_pred_intra_pred_angular_0_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode)
void ff_pred_intra_pred_angular_1_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode)
void ff_pred_intra_pred_angular_2_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode)
void ff_pred_intra_pred_angular_3_msa(uint8_t *dst,
const uint8_t *src_top,
const uint8_t *src_left,
ptrdiff_t stride, int c_idx, int mode)
void ff_intra_pred_8_16x16_msa(HEVCContext *s, int x0, int y0, int c_idx)
void ff_intra_pred_8_32x32_msa(HEVCContext *s, int x0, int y0, int c_idx)

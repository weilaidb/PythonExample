static const uint8_t mc_filt_mask_arr[16 * 3] = ;
static const int8_t subpel_filters_msa[7][8] = ;
static const int8_t bilinear_filters_msa[7][2] = ;
#define HORIZ_6TAP_FILT(src0, src1, mask0, mask1, mask2,                 \
filt_h0, filt_h1, filt_h2)                       \
(  )
#define HORIZ_6TAP_4WID_4VECS_FILT(src0, src1, src2, src3,             \
mask0, mask1, mask2,                \
filt0, filt1, filt2,                \
out0, out1)                         \
#define HORIZ_6TAP_8WID_4VECS_FILT(src0, src1, src2, src3,                    \
mask0, mask1, mask2,                       \
filt0, filt1, filt2,                       \
out0, out1, out2, out3)                    \
#define FILT_4TAP_DPADD_S_H(vec0, vec1, filt0, filt1)           \
(  )
#define HORIZ_4TAP_FILT(src0, src1, mask0, mask1, filt_h0, filt_h1)    \
(  )
#define HORIZ_4TAP_4WID_4VECS_FILT(src0, src1, src2, src3,             \
mask0, mask1, filt0, filt1,         \
out0, out1)                         \
#define HORIZ_4TAP_8WID_4VECS_FILT(src0, src1, src2, src3,                    \
mask0, mask1, filt0, filt1,                \
out0, out1, out2, out3)                    \
static void common_hz_6t_4x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_6t_4x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_put_vp8_epel4_h6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_h6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_h6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel4_v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel4_h6v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_h6v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_h6v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hz_4t_4x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_4t_4x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_4t_4x16_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_put_vp8_epel4_h4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_h4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_h4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel4_v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel4_h4v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_h4v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_h4v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel4_h6v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_h6v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_h6v4_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel4_h4v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel8_h4v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_epel16_h4v6_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hz_2t_4x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_2t_4x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_put_vp8_bilinear4_h_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hz_2t_8x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_2t_8x8mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
void ff_put_vp8_bilinear8_h_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_bilinear16_h_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_vt_2t_4x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_vt_2t_4x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_put_vp8_bilinear4_v_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_vt_2t_8x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_vt_2t_8x8mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
void ff_put_vp8_bilinear8_v_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_bilinear16_v_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hv_2ht_2vt_4x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert)
static void common_hv_2ht_2vt_4x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert)
void ff_put_vp8_bilinear4_hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hv_2ht_2vt_8x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert)
static void common_hv_2ht_2vt_8x8mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
void ff_put_vp8_bilinear8_hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_bilinear16_hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_vp8_pixels8_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void copy_16multx8mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t width)
void ff_put_vp8_pixels16_msa(uint8_t *dst, ptrdiff_t dst_stride,
uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)

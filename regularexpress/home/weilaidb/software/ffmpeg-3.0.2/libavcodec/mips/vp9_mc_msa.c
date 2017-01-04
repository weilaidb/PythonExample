static const uint8_t mc_filt_mask_arr[16 * 3] = ;
static const int8_t vp9_bilinear_filters_msa[15][2] = ;
#define FILT_8TAP_DPADD_S_H(vec0, vec1, vec2, vec3,             \
filt0, filt1, filt2, filt3)         \
(  )
#define HORIZ_8TAP_FILT(src0, src1, mask0, mask1, mask2, mask3,          \
filt_h0, filt_h1, filt_h2, filt_h3)              \
(  )
#define HORIZ_8TAP_4WID_4VECS_FILT(src0, src1, src2, src3,                  \
mask0, mask1, mask2, mask3,              \
filt0, filt1, filt2, filt3,              \
out0, out1)                              \
#define HORIZ_8TAP_8WID_4VECS_FILT(src0, src1, src2, src3,                    \
mask0, mask1, mask2, mask3,                \
filt0, filt1, filt2, filt3,                \
out0, out1, out2, out3)                    \
#define PCKEV_XORI128_AVG_ST_UB(in0, in1, dst, pdst)  \
#define PCKEV_AVG_ST_UB(in0, in1, dst, pdst)                  \
#define PCKEV_AVG_ST8x4_UB(in1, dst0, in2, dst1, in3, dst2, in4, dst3,  \
pdst, stride)                                \
static void common_hz_8t_4x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_8t_4x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_8t_4x16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_8t_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_hz_8t_8x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_8t_8x8mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_hz_8t_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_hz_8t_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_hz_8t_32w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_hz_8t_64w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_vt_8t_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_vt_8t_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_vt_8t_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_vt_8t_16w_mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
int32_t width)
static void common_vt_8t_32w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_vt_8t_64w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void common_hv_8ht_8vt_4w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_8w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_16w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_32w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_64w_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hz_8t_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_8t_and_aver_dst_4x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_8t_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_hz_8t_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_hz_8t_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_hz_8t_and_aver_dst_32w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_hz_8t_and_aver_dst_64w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_vt_8t_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_vt_8t_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_vt_8t_and_aver_dst_16w_mult_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t width)
static void common_vt_8t_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_vt_8t_and_aver_dst_32w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_vt_8t_and_aver_dst_64w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void common_hv_8ht_8vt_and_aver_dst_4w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_and_aver_dst_8w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_and_aver_dst_16w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_and_aver_dst_32w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hv_8ht_8vt_and_aver_dst_64w_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
static void common_hz_2t_4x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_2t_4x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_put_bilin_4h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hz_2t_8x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_2t_8x8mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
void ff_put_bilin_8h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_16h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_32h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_64h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_vt_2t_4x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_vt_2t_4x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_put_bilin_4v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_vt_2t_8x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_vt_2t_8x8mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
void ff_put_bilin_8v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_16v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_32v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_64v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hv_2ht_2vt_4x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz, const int8_t *filter_vert)
static void common_hv_2ht_2vt_4x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz, const int8_t *filter_vert)
void ff_put_bilin_4hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hv_2ht_2vt_8x4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz, const int8_t *filter_vert)
static void common_hv_2ht_2vt_8x8mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter_horiz, const int8_t *filter_vert,
int32_t height)
void ff_put_bilin_8hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_16hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_32hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_put_bilin_64hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hz_2t_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_2t_and_aver_dst_4x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_avg_bilin_4h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hz_2t_and_aver_dst_8x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_hz_2t_and_aver_dst_8x8mult_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
void ff_avg_bilin_8h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_16h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_32h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_64h_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_vt_2t_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
static void common_vt_2t_and_aver_dst_4x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter)
void ff_avg_bilin_4v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_vt_2t_and_aver_dst_8x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter)
static void common_vt_2t_and_aver_dst_8x8mult_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
void ff_avg_bilin_8v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_16v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_32v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_64v_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hv_2ht_2vt_and_aver_dst_4x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert)
static void common_hv_2ht_2vt_and_aver_dst_4x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert)
void ff_avg_bilin_4hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void common_hv_2ht_2vt_and_aver_dst_8x4_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert)
static void common_hv_2ht_2vt_and_aver_dst_8x8mult_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_horiz,
const int8_t *filter_vert,
int32_t height)
void ff_avg_bilin_8hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_16hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_32hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
void ff_avg_bilin_64hv_msa(uint8_t *dst, ptrdiff_t dst_stride,
const uint8_t *src, ptrdiff_t src_stride,
int height, int mx, int my)
static void copy_width8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_16multx8mult_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t width)
static void copy_width16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_width32_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_width64_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width4_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width32_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width64_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static const int8_t vp9_subpel_filters_msa[3][15][8] = ;
#define VP9_8TAP_MIPS_MSA_FUNC(SIZE, type, type_idx)                           \
void ff_put_8tap_##type##_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_put_8tap_##type##_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_put_8tap_##type##_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,    \
const uint8_t *src,                   \
ptrdiff_t srcstride,                  \
int h, int mx, int my)                \
\
\
void ff_avg_8tap_##type##_##SIZE##h_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_avg_8tap_##type##_##SIZE##v_msa(uint8_t *dst, ptrdiff_t dststride,     \
const uint8_t *src,                    \
ptrdiff_t srcstride,                   \
int h, int mx, int my)                 \
\
\
void ff_avg_8tap_##type##_##SIZE##hv_msa(uint8_t *dst, ptrdiff_t dststride,    \
const uint8_t *src,                   \
ptrdiff_t srcstride,                  \
int h, int mx, int my)                \
#define VP9_COPY_AVG_MIPS_MSA_FUNC(SIZE)                           \
void ff_copy##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,        \
const uint8_t *src, ptrdiff_t srcstride,  \
int h, int mx, int my)                    \
\
\
void ff_avg##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,         \
const uint8_t *src, ptrdiff_t srcstride,   \
int h, int mx, int my)                     \
#define VP9_AVG_MIPS_MSA_FUNC(SIZE)                               \
void ff_avg##SIZE##_msa(uint8_t *dst, ptrdiff_t dststride,        \
const uint8_t *src, ptrdiff_t srcstride,  \
int h, int mx, int my)                    \
VP9_8TAP_MIPS_MSA_FUNC(64, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(32, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(16, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(8, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(4, regular, FILTER_8TAP_REGULAR);
VP9_8TAP_MIPS_MSA_FUNC(64, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(32, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(16, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(8, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(4, sharp, FILTER_8TAP_SHARP);
VP9_8TAP_MIPS_MSA_FUNC(64, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(32, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(16, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(8, smooth, FILTER_8TAP_SMOOTH);
VP9_8TAP_MIPS_MSA_FUNC(4, smooth, FILTER_8TAP_SMOOTH);
VP9_COPY_AVG_MIPS_MSA_FUNC(64);
VP9_COPY_AVG_MIPS_MSA_FUNC(32);
VP9_COPY_AVG_MIPS_MSA_FUNC(16);
VP9_COPY_AVG_MIPS_MSA_FUNC(8);
VP9_AVG_MIPS_MSA_FUNC(4);
#undef VP9_8TAP_MIPS_MSA_FUNC
#undef VP9_COPY_AVG_MIPS_MSA_FUNC
#undef VP9_AVG_MIPS_MSA_FUNC

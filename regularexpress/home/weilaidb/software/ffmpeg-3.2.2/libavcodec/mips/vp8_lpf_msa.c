#define VP8_SIMPLE_MASK(p1, p0, q0, q1, b_limit, mask)           \
#define VP8_LPF_FILTER4_4W(p1_in_out, p0_in_out, q0_in_out, q1_in_out,  \
mask_in, hev_in)                             \
#define VP8_SIMPLE_FILT(p1_in, p0_in, q0_in, q1_in, mask)           \
#define VP8_MBFILTER(p2, p1, p0, q0, q1, q2, mask, hev)             \
#define LPF_MASK_HEV(p3_in, p2_in, p1_in, p0_in,                   \
q0_in, q1_in, q2_in, q3_in,                   \
limit_in, b_limit_in, thresh_in,              \
hev_out, mask_out, flat_out)                  \
#define VP8_ST6x1_UB(in0, in0_idx, in1, in1_idx, pdst, stride)  \
void ff_vp8_v_loop_filter16_msa(uint8_t *src, ptrdiff_t pitch, int b_limit_in,
int limit_in, int thresh_in)
void ff_vp8_v_loop_filter8uv_msa(uint8_t *src_u, uint8_t *src_v,
ptrdiff_t pitch, int b_limit_in, int limit_in,
int thresh_in)
void ff_vp8_h_loop_filter16_msa(uint8_t *src, ptrdiff_t pitch, int b_limit_in,
int limit_in, int thresh_in)
void ff_vp8_h_loop_filter8uv_msa(uint8_t *src_u, uint8_t *src_v,
ptrdiff_t pitch, int b_limit_in, int limit_in,
int thresh_in)
void ff_vp8_v_loop_filter_simple_msa(uint8_t *src, ptrdiff_t pitch,
int b_limit_ptr)
void ff_vp8_h_loop_filter_simple_msa(uint8_t *src, ptrdiff_t pitch,
int b_limit_ptr)
void ff_vp8_v_loop_filter8uv_inner_msa(uint8_t *src_u, uint8_t *src_v,
ptrdiff_t pitch, int b_limit_in,
int limit_in, int thresh_in)
void ff_vp8_h_loop_filter8uv_inner_msa(uint8_t *src_u, uint8_t *src_v,
ptrdiff_t pitch, int b_limit_in,
int limit_in, int thresh_in)
void ff_vp8_v_loop_filter16_inner_msa(uint8_t *src, ptrdiff_t pitch,
int32_t e, int32_t i, int32_t h)
void ff_vp8_h_loop_filter16_inner_msa(uint8_t *src, ptrdiff_t pitch,
int32_t e, int32_t i, int32_t h)

#define VP9_LPF_FILTER4_8W(p1_in, p0_in, q0_in, q1_in, mask_in, hev_in,  \
p1_out, p0_out, q0_out, q1_out)               \
#define VP9_LPF_FILTER4_4W(p1_in, p0_in, q0_in, q1_in, mask_in, hev_in,  \
p1_out, p0_out, q0_out, q1_out)               \
#define VP9_FLAT4(p3_in, p2_in, p0_in, q0_in, q2_in, q3_in, flat_out)  \
#define VP9_FLAT5(p7_in, p6_in, p5_in, p4_in, p0_in, q0_in, q4_in,  \
q5_in, q6_in, q7_in, flat_in, flat2_out)          \
#define VP9_FILTER8(p3_in, p2_in, p1_in, p0_in,                \
q0_in, q1_in, q2_in, q3_in,                \
p2_filt8_out, p1_filt8_out, p0_filt8_out,  \
q0_filt8_out, q1_filt8_out, q2_filt8_out)  \
#define LPF_MASK_HEV(p3_in, p2_in, p1_in, p0_in,                   \
q0_in, q1_in, q2_in, q3_in,                   \
limit_in, b_limit_in, thresh_in,              \
hev_out, mask_out, flat_out)                  \
void ff_loop_filter_v_4_8_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_v_44_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_v_8_8_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_v_88_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_v_84_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_v_48_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
static int32_t vp9_hz_lpf_t4_and_t8_16w(uint8_t *src, ptrdiff_t pitch,
uint8_t *filter48,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
static void vp9_hz_lpf_t16_16w(uint8_t *src, ptrdiff_t pitch, uint8_t *filter48)
void ff_loop_filter_v_16_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_v_16_8_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_h_4_8_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_h_44_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_h_8_8_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_h_88_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_h_84_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
void ff_loop_filter_h_48_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
static void vp9_transpose_16x8_to_8x16(uint8_t *input, int32_t in_pitch,
uint8_t *output, int32_t out_pitch)
static void vp9_transpose_8x16_to_16x8(uint8_t *input, int32_t in_pitch,
uint8_t *output, int32_t out_pitch)
static void vp9_transpose_16x16(uint8_t *input, int32_t in_pitch,
uint8_t *output, int32_t out_pitch)
static int32_t vp9_vt_lpf_t4_and_t8_8w(uint8_t *src, uint8_t *filter48,
uint8_t *src_org, int32_t pitch_org,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
static int32_t vp9_vt_lpf_t16_8w(uint8_t *src, uint8_t *src_org, ptrdiff_t pitch,
uint8_t *filter48)
void ff_loop_filter_h_16_8_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
static int32_t vp9_vt_lpf_t4_and_t8_16w(uint8_t *src, uint8_t *filter48,
uint8_t *src_org, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)
static int32_t vp9_vt_lpf_t16_16w(uint8_t *src, uint8_t *src_org, ptrdiff_t pitch,
uint8_t *filter48)
void ff_loop_filter_h_16_16_msa(uint8_t *src, ptrdiff_t pitch,
int32_t b_limit_ptr,
int32_t limit_ptr,
int32_t thresh_ptr)

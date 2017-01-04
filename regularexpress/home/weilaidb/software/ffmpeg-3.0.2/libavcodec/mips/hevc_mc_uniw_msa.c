#define HEVC_HV_UNIW_RND_CLIP4(in0, in1, in2, in3, wgt, offset, rnd,       \
out0, out1, out2, out3)                     \
#define HEVC_UNIW_RND_CLIP2(in0, in1, wgt, offset, rnd,              \
out0_r, out1_r, out0_l, out1_l)          \
#define HEVC_UNIW_RND_CLIP4(in0, in1, in2, in3, wgt, offset, rnd,  \
out0_r, out1_r, out2_r, out3_r,        \
out0_l, out1_l, out2_l, out3_l)        \
static void hevc_uniwgt_copy_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_6w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_16multx4mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val,
int32_t width)
static void hevc_uniwgt_copy_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_48w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_uniwgt_copy_64w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_48w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_8t_64w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_16multx2mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val,
int32_t width)
static void hevc_vt_uniwgt_8t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_48w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_8t_64w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_8multx2mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val,
int32_t width)
static void hevc_hv_uniwgt_8t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_48w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_8t_64w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_4x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_4x4_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_4x8multiple_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_6w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_8x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_8x6_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_8x4multiple_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hz_uniwgt_4t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_4x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_4x4_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_4x8multiple_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_6w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_8x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_8x6_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_8x4multiple_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_vt_uniwgt_4t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_4x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_4x4_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_4multx8mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_6w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_8x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_8x6_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_8multx4mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val,
int32_t width)
static void hevc_hv_uniwgt_4t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
static void hevc_hv_uniwgt_4t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t weight,
int32_t offset,
int32_t rnd_val)
#define UNIWGT_MC_COPY(WIDTH)                                                \
void ff_hevc_put_hevc_uni_w_pel_pixels##WIDTH##_8_msa(uint8_t *dst,          \
ptrdiff_t dst_stride,  \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int height,            \
int denom,             \
int weight,            \
int offset,            \
intptr_t mx,           \
intptr_t my,           \
int width)             \
UNIWGT_MC_COPY(4);
UNIWGT_MC_COPY(6);
UNIWGT_MC_COPY(8);
UNIWGT_MC_COPY(12);
UNIWGT_MC_COPY(16);
UNIWGT_MC_COPY(24);
UNIWGT_MC_COPY(32);
UNIWGT_MC_COPY(48);
UNIWGT_MC_COPY(64);
#undef UNIWGT_MC_COPY
#define UNI_W_MC(PEL, DIR, WIDTH, TAP, DIR1, FILT_DIR)                        \
void ff_hevc_put_hevc_uni_w_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,        \
ptrdiff_t          \
dst_stride,        \
uint8_t *src,      \
ptrdiff_t          \
src_stride,        \
int height,        \
int denom,         \
int weight,        \
int offset,        \
intptr_t mx,       \
intptr_t my,       \
int width)         \
UNI_W_MC(qpel, h, 4, 8, hz, mx);
UNI_W_MC(qpel, h, 8, 8, hz, mx);
UNI_W_MC(qpel, h, 12, 8, hz, mx);
UNI_W_MC(qpel, h, 16, 8, hz, mx);
UNI_W_MC(qpel, h, 24, 8, hz, mx);
UNI_W_MC(qpel, h, 32, 8, hz, mx);
UNI_W_MC(qpel, h, 48, 8, hz, mx);
UNI_W_MC(qpel, h, 64, 8, hz, mx);
UNI_W_MC(qpel, v, 4, 8, vt, my);
UNI_W_MC(qpel, v, 8, 8, vt, my);
UNI_W_MC(qpel, v, 12, 8, vt, my);
UNI_W_MC(qpel, v, 16, 8, vt, my);
UNI_W_MC(qpel, v, 24, 8, vt, my);
UNI_W_MC(qpel, v, 32, 8, vt, my);
UNI_W_MC(qpel, v, 48, 8, vt, my);
UNI_W_MC(qpel, v, 64, 8, vt, my);
UNI_W_MC(epel, h, 4, 4, hz, mx);
UNI_W_MC(epel, h, 6, 4, hz, mx);
UNI_W_MC(epel, h, 8, 4, hz, mx);
UNI_W_MC(epel, h, 12, 4, hz, mx);
UNI_W_MC(epel, h, 16, 4, hz, mx);
UNI_W_MC(epel, h, 24, 4, hz, mx);
UNI_W_MC(epel, h, 32, 4, hz, mx);
UNI_W_MC(epel, v, 4, 4, vt, my);
UNI_W_MC(epel, v, 6, 4, vt, my);
UNI_W_MC(epel, v, 8, 4, vt, my);
UNI_W_MC(epel, v, 12, 4, vt, my);
UNI_W_MC(epel, v, 16, 4, vt, my);
UNI_W_MC(epel, v, 24, 4, vt, my);
UNI_W_MC(epel, v, 32, 4, vt, my);
#undef UNI_W_MC
#define UNI_W_MC_HV(PEL, DIR, WIDTH, TAP, DIR1)                              \
void ff_hevc_put_hevc_uni_w_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,       \
ptrdiff_t         \
dst_stride,       \
uint8_t *src,     \
ptrdiff_t         \
src_stride,       \
int height,       \
int denom,        \
int weight,       \
int offset,       \
intptr_t mx,      \
intptr_t my,      \
int width)        \
UNI_W_MC_HV(qpel, hv, 4, 8, hv);
UNI_W_MC_HV(qpel, hv, 8, 8, hv);
UNI_W_MC_HV(qpel, hv, 12, 8, hv);
UNI_W_MC_HV(qpel, hv, 16, 8, hv);
UNI_W_MC_HV(qpel, hv, 24, 8, hv);
UNI_W_MC_HV(qpel, hv, 32, 8, hv);
UNI_W_MC_HV(qpel, hv, 48, 8, hv);
UNI_W_MC_HV(qpel, hv, 64, 8, hv);
UNI_W_MC_HV(epel, hv, 4, 4, hv);
UNI_W_MC_HV(epel, hv, 6, 4, hv);
UNI_W_MC_HV(epel, hv, 8, 4, hv);
UNI_W_MC_HV(epel, hv, 12, 4, hv);
UNI_W_MC_HV(epel, hv, 16, 4, hv);
UNI_W_MC_HV(epel, hv, 24, 4, hv);
UNI_W_MC_HV(epel, hv, 32, 4, hv);
#undef UNI_W_MC_HV

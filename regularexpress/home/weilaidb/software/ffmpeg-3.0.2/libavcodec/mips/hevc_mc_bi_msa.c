#define HEVC_BI_RND_CLIP2(in0, in1, vec0, vec1, rnd_val, out0, out1)  \
#define HEVC_BI_RND_CLIP4(in0, in1, in2, in3,                      \
vec0, vec1, vec2, vec3, rnd_val,         \
out0, out1, out2, out3)                  \
static void hevc_bi_copy_4w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_6w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_8w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_12w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_16multx4mult_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height,
int32_t width)
static void hevc_bi_copy_16w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_24w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_32w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_48w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_bi_copy_64w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hevc_hz_bi_8t_4w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_8t_8w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_8t_12w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_8t_16w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_8t_24w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_8t_32w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_8t_48w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_8t_64w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_4w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_8w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_12w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_16multx2mult_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height, int32_t width)
static void hevc_vt_bi_8t_16w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_24w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_32w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_48w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_8t_64w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hv_bi_8t_4w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_8t_8multx2mult_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height, int32_t width)
static void hevc_hv_bi_8t_8w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_8t_12w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_8t_16w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_8t_24w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_8t_32w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_8t_48w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_8t_64w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hz_bi_4t_4x2_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_4x4_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_4x8multiple_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_4w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_6w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_8x2_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_8x6_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_8x4multiple_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_8w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_12w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_16w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_24w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_bi_4t_32w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_4x2_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_4x4_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_4x8multiple_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_4w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_6w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_8x2_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_8x6_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_8x4multiple_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_8w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_12w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_16w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_24w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_bi_4t_32w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hv_bi_4t_4x2_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_4x4_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_4multx8mult_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_4w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_6w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_8x2_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_8x6_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_8multx4mult_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t width)
static void hevc_hv_bi_4t_8w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_12w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_16w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_24w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_bi_4t_32w_msa(uint8_t *src0_ptr,
int32_t src_stride,
int16_t *src1_ptr,
int32_t src2_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const const int8_t *filter_y,
int32_t height)
#define BI_MC_COPY(WIDTH)                                                 \
void ff_hevc_put_hevc_bi_pel_pixels##WIDTH##_8_msa(uint8_t *dst,          \
ptrdiff_t dst_stride,  \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int16_t *src_16bit,    \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)             \
BI_MC_COPY(4);
BI_MC_COPY(6);
BI_MC_COPY(8);
BI_MC_COPY(12);
BI_MC_COPY(16);
BI_MC_COPY(24);
BI_MC_COPY(32);
BI_MC_COPY(48);
BI_MC_COPY(64);
#undef BI_MC_COPY
#define BI_MC(PEL, DIR, WIDTH, TAP, DIR1, FILT_DIR)                            \
void ff_hevc_put_hevc_bi_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,            \
ptrdiff_t dst_stride,  \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int16_t *src_16bit,    \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)             \
BI_MC(qpel, h, 4, 8, hz, mx);
BI_MC(qpel, h, 8, 8, hz, mx);
BI_MC(qpel, h, 12, 8, hz, mx);
BI_MC(qpel, h, 16, 8, hz, mx);
BI_MC(qpel, h, 24, 8, hz, mx);
BI_MC(qpel, h, 32, 8, hz, mx);
BI_MC(qpel, h, 48, 8, hz, mx);
BI_MC(qpel, h, 64, 8, hz, mx);
BI_MC(qpel, v, 4, 8, vt, my);
BI_MC(qpel, v, 8, 8, vt, my);
BI_MC(qpel, v, 12, 8, vt, my);
BI_MC(qpel, v, 16, 8, vt, my);
BI_MC(qpel, v, 24, 8, vt, my);
BI_MC(qpel, v, 32, 8, vt, my);
BI_MC(qpel, v, 48, 8, vt, my);
BI_MC(qpel, v, 64, 8, vt, my);
BI_MC(epel, h, 4, 4, hz, mx);
BI_MC(epel, h, 8, 4, hz, mx);
BI_MC(epel, h, 6, 4, hz, mx);
BI_MC(epel, h, 12, 4, hz, mx);
BI_MC(epel, h, 16, 4, hz, mx);
BI_MC(epel, h, 24, 4, hz, mx);
BI_MC(epel, h, 32, 4, hz, mx);
BI_MC(epel, v, 4, 4, vt, my);
BI_MC(epel, v, 8, 4, vt, my);
BI_MC(epel, v, 6, 4, vt, my);
BI_MC(epel, v, 12, 4, vt, my);
BI_MC(epel, v, 16, 4, vt, my);
BI_MC(epel, v, 24, 4, vt, my);
BI_MC(epel, v, 32, 4, vt, my);
#undef BI_MC
#define BI_MC_HV(PEL, DIR, WIDTH, TAP, DIR1)                                   \
void ff_hevc_put_hevc_bi_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,            \
ptrdiff_t dst_stride,  \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int16_t *src_16bit,    \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)             \
BI_MC_HV(qpel, hv, 4, 8, hv);
BI_MC_HV(qpel, hv, 8, 8, hv);
BI_MC_HV(qpel, hv, 12, 8, hv);
BI_MC_HV(qpel, hv, 16, 8, hv);
BI_MC_HV(qpel, hv, 24, 8, hv);
BI_MC_HV(qpel, hv, 32, 8, hv);
BI_MC_HV(qpel, hv, 48, 8, hv);
BI_MC_HV(qpel, hv, 64, 8, hv);
BI_MC_HV(epel, hv, 4, 4, hv);
BI_MC_HV(epel, hv, 8, 4, hv);
BI_MC_HV(epel, hv, 6, 4, hv);
BI_MC_HV(epel, hv, 12, 4, hv);
BI_MC_HV(epel, hv, 16, 4, hv);
BI_MC_HV(epel, hv, 24, 4, hv);
BI_MC_HV(epel, hv, 32, 4, hv);
#undef BI_MC_HV

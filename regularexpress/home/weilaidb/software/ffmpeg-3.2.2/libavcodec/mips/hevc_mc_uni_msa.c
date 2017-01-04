static void copy_width8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_width12_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_16multx8mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height, int32_t width)
static void copy_width16_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_width24_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_width32_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_width48_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void copy_width64_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static const uint8_t mc_filt_mask_arr[16 * 3] = ;
#define FILT_8TAP_DPADD_S_H(vec0, vec1, vec2, vec3,             \
filt0, filt1, filt2, filt3)         \
(  )
#define HORIZ_8TAP_4WID_4VECS_FILT(src0, src1, src2, src3,                  \
mask0, mask1, mask2, mask3,              \
filt0, filt1, filt2, filt3,              \
out0, out1)                              \
#define HORIZ_8TAP_8WID_4VECS_FILT(src0, src1, src2, src3,                    \
mask0, mask1, mask2, mask3,                \
filt0, filt1, filt2, filt3,                \
out0, out1, out2, out3)                    \
#define FILT_4TAP_DPADD_S_H(vec0, vec1, filt0, filt1)           \
(  )
#define HORIZ_4TAP_4WID_4VECS_FILT(src0, src1, src2, src3,             \
mask0, mask1, filt0, filt1,         \
out0, out1)                         \
#define HORIZ_4TAP_8WID_4VECS_FILT(src0, src1, src2, src3,                    \
mask0, mask1, filt0, filt1,                \
out0, out1, out2, out3)                    \
static void common_hz_8t_4x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_8t_4x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_8t_4x16_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_8t_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height, uint8_t rnd_val)
static void common_hz_8t_8x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_8t_8x8mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_8t_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_8t_12w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_8t_16w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_8t_24w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_8t_32w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_8t_48w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_8t_64w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_8t_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_8t_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_8t_12w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_8t_16w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_8t_16w_mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val, int32_t width)
static void common_vt_8t_24w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height, uint8_t rnd_val)
static void common_vt_8t_32w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height, uint8_t rnd_val)
static void common_vt_8t_48w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height, uint8_t rnd_val)
static void common_vt_8t_64w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height, uint8_t rnd_val)
static void hevc_hv_uni_8t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_8t_8multx2mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height, int32_t width)
static void hevc_hv_uni_8t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_8t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_8t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_8t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_8t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_8t_48w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_8t_64w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void common_hz_4t_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_4t_4x4_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_4t_4x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_4t_4x16_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_hz_4t_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_6w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_8x2mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_8x4mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_12w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_16w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_24w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_hz_4t_32w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_4x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_vt_4t_4x4multiple_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_4w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_6w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_8x2_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_vt_4t_8x6_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, uint8_t rnd_val)
static void common_vt_4t_8x4mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_8w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_12w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_16w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_24w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void common_vt_4t_32w_mult_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val, int32_t width)
static void common_vt_4t_32w_msa(uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height,
uint8_t rnd_val)
static void hevc_hv_uni_4t_4x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_4x4_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_4multx8mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_4w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_6w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_8x2_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_8x6_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_8w_mult_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t width)
static void hevc_hv_uni_4t_8w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_12w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_16w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_24w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_uni_4t_32w_msa(uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
#define UNI_MC_COPY(WIDTH)                                                 \
void ff_hevc_put_hevc_uni_pel_pixels##WIDTH##_8_msa(uint8_t *dst,          \
ptrdiff_t dst_stride,  \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)             \
UNI_MC_COPY(8);
UNI_MC_COPY(12);
UNI_MC_COPY(16);
UNI_MC_COPY(24);
UNI_MC_COPY(32);
UNI_MC_COPY(48);
UNI_MC_COPY(64);
#undef UNI_MC_COPY
#define UNI_MC(PEL, DIR, WIDTH, TAP, DIR1, FILT_DIR)                           \
void ff_hevc_put_hevc_uni_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,           \
ptrdiff_t             \
dst_stride,           \
uint8_t *src,         \
ptrdiff_t             \
src_stride,           \
int height,           \
intptr_t mx,          \
intptr_t my,          \
int width)            \
UNI_MC(qpel, h, 4, 8, hz, mx);
UNI_MC(qpel, h, 8, 8, hz, mx);
UNI_MC(qpel, h, 12, 8, hz, mx);
UNI_MC(qpel, h, 16, 8, hz, mx);
UNI_MC(qpel, h, 24, 8, hz, mx);
UNI_MC(qpel, h, 32, 8, hz, mx);
UNI_MC(qpel, h, 48, 8, hz, mx);
UNI_MC(qpel, h, 64, 8, hz, mx);
UNI_MC(qpel, v, 4, 8, vt, my);
UNI_MC(qpel, v, 8, 8, vt, my);
UNI_MC(qpel, v, 12, 8, vt, my);
UNI_MC(qpel, v, 16, 8, vt, my);
UNI_MC(qpel, v, 24, 8, vt, my);
UNI_MC(qpel, v, 32, 8, vt, my);
UNI_MC(qpel, v, 48, 8, vt, my);
UNI_MC(qpel, v, 64, 8, vt, my);
UNI_MC(epel, h, 4, 4, hz, mx);
UNI_MC(epel, h, 6, 4, hz, mx);
UNI_MC(epel, h, 8, 4, hz, mx);
UNI_MC(epel, h, 12, 4, hz, mx);
UNI_MC(epel, h, 16, 4, hz, mx);
UNI_MC(epel, h, 24, 4, hz, mx);
UNI_MC(epel, h, 32, 4, hz, mx);
UNI_MC(epel, v, 4, 4, vt, my);
UNI_MC(epel, v, 6, 4, vt, my);
UNI_MC(epel, v, 8, 4, vt, my);
UNI_MC(epel, v, 12, 4, vt, my);
UNI_MC(epel, v, 16, 4, vt, my);
UNI_MC(epel, v, 24, 4, vt, my);
UNI_MC(epel, v, 32, 4, vt, my);
#undef UNI_MC
#define UNI_MC_HV(PEL, DIR, WIDTH, TAP, DIR1)                           \
void ff_hevc_put_hevc_uni_##PEL##_##DIR##WIDTH##_8_msa(uint8_t *dst,    \
ptrdiff_t      \
dst_stride,    \
uint8_t *src,  \
ptrdiff_t      \
src_stride,    \
int height,    \
intptr_t mx,   \
intptr_t my,   \
int width)     \
UNI_MC_HV(qpel, hv, 4, 8, hv);
UNI_MC_HV(qpel, hv, 8, 8, hv);
UNI_MC_HV(qpel, hv, 12, 8, hv);
UNI_MC_HV(qpel, hv, 16, 8, hv);
UNI_MC_HV(qpel, hv, 24, 8, hv);
UNI_MC_HV(qpel, hv, 32, 8, hv);
UNI_MC_HV(qpel, hv, 48, 8, hv);
UNI_MC_HV(qpel, hv, 64, 8, hv);
UNI_MC_HV(epel, hv, 4, 4, hv);
UNI_MC_HV(epel, hv, 6, 4, hv);
UNI_MC_HV(epel, hv, 8, 4, hv);
UNI_MC_HV(epel, hv, 12, 4, hv);
UNI_MC_HV(epel, hv, 16, 4, hv);
UNI_MC_HV(epel, hv, 24, 4, hv);
UNI_MC_HV(epel, hv, 32, 4, hv);
#undef UNI_MC_HV

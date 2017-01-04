static void hevc_copy_4w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_6w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_8w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_12w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_16multx8mult_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
int32_t height,
int32_t width)
static void hevc_copy_16w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_24w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_32w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_48w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_copy_64w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
int32_t height)
static void hevc_hz_8t_4w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hz_8t_8w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hz_8t_12w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hz_8t_16w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hz_8t_24w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hz_8t_32w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hz_8t_48w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hz_8t_64w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_4w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_8w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_12w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_16multx4mult_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height,
int32_t width)
static void hevc_vt_8t_16w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_24w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_32w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_48w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_vt_8t_64w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter, int32_t height)
static void hevc_hv_8t_4w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hv_8t_8multx2mult_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height, int32_t width)
static void hevc_hv_8t_8w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hv_8t_12w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hv_8t_16w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hv_8t_24w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hv_8t_32w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hv_8t_48w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hv_8t_64w_msa(uint8_t *src, int32_t src_stride,
int16_t *dst, int32_t dst_stride,
const int8_t *filter_x, const int8_t *filter_y,
int32_t height)
static void hevc_hz_4t_4x2_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter)
static void hevc_hz_4t_4x4_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter)
static void hevc_hz_4t_4x8multiple_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_4w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_6w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_8x2multiple_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_8x4multiple_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_8w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_12w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_16w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_24w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hz_4t_32w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_4x2_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter)
static void hevc_vt_4t_4x4_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_4x8multiple_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_4w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_6w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_8x2_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter)
static void hevc_vt_4t_8x6_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter)
static void hevc_vt_4t_8x4multiple_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_8w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_12w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_16w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_24w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_vt_4t_32w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter,
int32_t height)
static void hevc_hv_4t_4x2_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y)
static void hevc_hv_4t_4x4_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y)
static void hevc_hv_4t_4multx8mult_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_4w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_6w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_8x2_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_8x6_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_8multx4mult_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height,
int32_t width)
static void hevc_hv_4t_8w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_12w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_16w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_24w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
static void hevc_hv_4t_32w_msa(uint8_t *src,
int32_t src_stride,
int16_t *dst,
int32_t dst_stride,
const int8_t *filter_x,
const int8_t *filter_y,
int32_t height)
#define MC_COPY(WIDTH)                                                    \
void ff_hevc_put_hevc_pel_pixels##WIDTH##_8_msa(int16_t *dst,             \
uint8_t *src,             \
ptrdiff_t src_stride,     \
int height,               \
intptr_t mx,              \
intptr_t my,              \
int width)                \
MC_COPY(4);
MC_COPY(6);
MC_COPY(8);
MC_COPY(12);
MC_COPY(16);
MC_COPY(24);
MC_COPY(32);
MC_COPY(48);
MC_COPY(64);
#undef MC_COPY
#define MC(PEL, DIR, WIDTH, TAP, DIR1, FILT_DIR)                            \
void ff_hevc_put_hevc_##PEL##_##DIR##WIDTH##_8_msa(int16_t *dst,            \
uint8_t *src,          \
ptrdiff_t src_stride,  \
int height,            \
intptr_t mx,           \
intptr_t my,           \
int width)             \
MC(qpel, h, 4, 8, hz, mx);
MC(qpel, h, 8, 8, hz, mx);
MC(qpel, h, 12, 8, hz, mx);
MC(qpel, h, 16, 8, hz, mx);
MC(qpel, h, 24, 8, hz, mx);
MC(qpel, h, 32, 8, hz, mx);
MC(qpel, h, 48, 8, hz, mx);
MC(qpel, h, 64, 8, hz, mx);
MC(qpel, v, 4, 8, vt, my);
MC(qpel, v, 8, 8, vt, my);
MC(qpel, v, 12, 8, vt, my);
MC(qpel, v, 16, 8, vt, my);
MC(qpel, v, 24, 8, vt, my);
MC(qpel, v, 32, 8, vt, my);
MC(qpel, v, 48, 8, vt, my);
MC(qpel, v, 64, 8, vt, my);
MC(epel, h, 4, 4, hz, mx);
MC(epel, h, 6, 4, hz, mx);
MC(epel, h, 8, 4, hz, mx);
MC(epel, h, 12, 4, hz, mx);
MC(epel, h, 16, 4, hz, mx);
MC(epel, h, 24, 4, hz, mx);
MC(epel, h, 32, 4, hz, mx);
MC(epel, v, 4, 4, vt, my);
MC(epel, v, 6, 4, vt, my);
MC(epel, v, 8, 4, vt, my);
MC(epel, v, 12, 4, vt, my);
MC(epel, v, 16, 4, vt, my);
MC(epel, v, 24, 4, vt, my);
MC(epel, v, 32, 4, vt, my);
#undef MC
#define MC_HV(PEL, DIR, WIDTH, TAP, DIR1)                                     \
void ff_hevc_put_hevc_##PEL##_##DIR##WIDTH##_8_msa(int16_t *dst,              \
uint8_t *src,            \
ptrdiff_t src_stride,    \
int height,              \
intptr_t mx,             \
intptr_t my,             \
int width)               \
MC_HV(qpel, hv, 4, 8, hv);
MC_HV(qpel, hv, 8, 8, hv);
MC_HV(qpel, hv, 12, 8, hv);
MC_HV(qpel, hv, 16, 8, hv);
MC_HV(qpel, hv, 24, 8, hv);
MC_HV(qpel, hv, 32, 8, hv);
MC_HV(qpel, hv, 48, 8, hv);
MC_HV(qpel, hv, 64, 8, hv);
MC_HV(epel, hv, 4, 4, hv);
MC_HV(epel, hv, 6, 4, hv);
MC_HV(epel, hv, 8, 4, hv);
MC_HV(epel, hv, 12, 4, hv);
MC_HV(epel, hv, 16, 4, hv);
MC_HV(epel, hv, 24, 4, hv);
MC_HV(epel, hv, 32, 4, hv);
#undef MC_HV

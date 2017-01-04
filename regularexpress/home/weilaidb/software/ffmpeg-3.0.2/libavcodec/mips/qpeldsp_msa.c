#define APPLY_HORIZ_QPEL_FILTER(inp0, inp1, mask, coef0, coef1, coef2)  \
(  )
#define APPLY_HORIZ_QPEL_FILTER_8BYTE(inp0, inp1,                       \
mask0, mask1, mask2, mask3,       \
coef0, coef1, coef2)              \
(  )
#define APPLY_HORIZ_QPEL_FILTER_8BYTE_1ROW(inp0,                        \
mask0, mask1, mask2, mask3,  \
coef0, coef1, coef2)         \
(  )
#define APPLY_HORIZ_QPEL_NO_ROUND_FILTER_8BYTE_1ROW(inp0, mask0, mask1,   \
mask2, mask3, coef0,  \
coef1, coef2)         \
(  )
#define APPLY_HORIZ_QPEL_NO_ROUND_FILTER(inp0, inp1, mask,              \
coef0, coef1, coef2)           \
(  )
#define APPLY_HORIZ_QPEL_NO_ROUND_FILTER_8BYTE(inp0, inp1,                  \
mask0, mask1, mask2, mask3,  \
coef0, coef1, coef2)         \
(  )
#define APPLY_VERT_QPEL_FILTER(inp0, inp1, inp2, inp3,                  \
inp4, inp5, inp6, inp7,                  \
coef0, coef1, coef2)                     \
(  )
#define APPLY_VERT_QPEL_FILTER_8BYTE(inp00, inp01, inp02, inp03,        \
inp04, inp05, inp06, inp07,        \
inp10, inp11, inp12, inp13,        \
inp14, inp15, inp16, inp17,        \
coef0, coef1, coef2)               \
(  )
#define APPLY_VERT_QPEL_NO_ROUND_FILTER(inp0, inp1, inp2, inp3,         \
inp4, inp5, inp6, inp7,         \
coef0, coef1, coef2)            \
(  )
#define APPLY_VERT_QPEL_NO_ROUND_FILTER_8BYTE(inp00, inp01, inp02, inp03,  \
inp04, inp05, inp06, inp07,  \
inp10, inp11, inp12, inp13,  \
inp14, inp15, inp16, inp17,  \
coef0, coef1, coef2)         \
(  )
static void horiz_mc_qpel_aver_src0_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_aver_src0_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_aver_src1_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_aver_src1_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_no_rnd_aver_src0_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_no_rnd_aver_src0_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_no_rnd_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_no_rnd_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_no_rnd_aver_src1_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_no_rnd_aver_src1_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_avg_dst_aver_src0_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_avg_dst_aver_src0_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_avg_dst_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_avg_dst_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_avg_dst_aver_src1_8width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void horiz_mc_qpel_avg_dst_aver_src1_16width_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void vert_mc_qpel_aver_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_aver_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_aver_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_aver_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_no_rnd_aver_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_no_rnd_aver_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_no_rnd_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_no_rnd_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_no_rnd_aver_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_no_rnd_aver_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_avg_dst_aver_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_avg_dst_aver_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_avg_dst_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_avg_dst_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_avg_dst_aver_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void vert_mc_qpel_avg_dst_aver_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_horiz_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hv_mc_qpel_no_rnd_aver_hv_src00_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_hv_src00_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_horiz_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hv_mc_qpel_no_rnd_aver_v_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_v_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_horiz_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hv_mc_qpel_no_rnd_aver_hv_src10_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_hv_src10_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_h_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_h_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_h_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_h_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_hv_src01_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_hv_src01_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_v_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_v_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_hv_src11_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_no_rnd_aver_hv_src11_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_horiz_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hv_mc_qpel_aver_hv_src00_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_hv_src00_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_horiz_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hv_mc_qpel_aver_v_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_v_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_horiz_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride,
int32_t height)
static void hv_mc_qpel_aver_hv_src10_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_hv_src10_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_h_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_h_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_8x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void hv_mc_qpel_aver_h_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_h_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_hv_src01_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_hv_src01_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_v_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_v_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_hv_src11_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_aver_hv_src11_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src00_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src00_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_v_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_v_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src10_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src10_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_h_src0_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_h_src0_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_16x16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void hv_mc_qpel_avg_dst_8x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_h_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_h_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src01_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src01_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_v_src1_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_v_src1_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src11_16x16_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void hv_mc_qpel_avg_dst_aver_hv_src11_8x8_msa(const uint8_t *src,
int32_t src_stride,
uint8_t *dst,
int32_t dst_stride)
static void copy_8x8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void copy_16x16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride)
static void avg_width8_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
static void avg_width16_msa(const uint8_t *src, int32_t src_stride,
uint8_t *dst, int32_t dst_stride,
int32_t height)
void ff_copy_16x16_msa(uint8_t *dest, const uint8_t *src, ptrdiff_t stride)
void ff_copy_8x8_msa(uint8_t *dest, const uint8_t *src, ptrdiff_t stride)
void ff_horiz_mc_qpel_aver_src0_8width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_aver_src0_16width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_8width_msa(uint8_t *dest, const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_16width_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_horiz_mc_qpel_aver_src1_8width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_aver_src1_16width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_no_rnd_aver_src0_8width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_no_rnd_aver_src0_16width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_no_rnd_8width_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_horiz_mc_qpel_no_rnd_16width_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_horiz_mc_qpel_no_rnd_aver_src1_8width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_no_rnd_aver_src1_16width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_avg_width8_msa(uint8_t *dest, const uint8_t *src, ptrdiff_t stride)
void ff_avg_width16_msa(uint8_t *dest, const uint8_t *src, ptrdiff_t stride)
void ff_horiz_mc_qpel_avg_dst_aver_src0_8width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_avg_dst_aver_src0_16width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_avg_dst_8width_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_horiz_mc_qpel_avg_dst_16width_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_horiz_mc_qpel_avg_dst_aver_src1_8width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_horiz_mc_qpel_avg_dst_aver_src1_16width_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_aver_src0_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_aver_src0_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_8x8_msa(uint8_t *dest, const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_16x16_msa(uint8_t *dest, const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_aver_src1_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_aver_src1_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_no_rnd_aver_src0_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_no_rnd_aver_src0_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_no_rnd_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_no_rnd_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_no_rnd_aver_src1_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_no_rnd_aver_src1_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_avg_dst_aver_src0_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_avg_dst_aver_src0_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_avg_dst_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_avg_dst_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_vert_mc_qpel_avg_dst_aver_src1_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_vert_mc_qpel_avg_dst_aver_src1_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src00_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src00_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_v_src0_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_v_src0_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src10_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src10_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_h_src0_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_h_src0_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_16x16_msa(uint8_t *dest, const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_8x8_msa(uint8_t *dest, const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_aver_h_src1_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_h_src1_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src01_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src01_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_v_src1_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_v_src1_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src11_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_aver_hv_src11_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src00_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src00_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_v_src0_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_v_src0_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src10_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src10_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_h_src0_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_h_src0_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_h_src1_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_h_src1_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src01_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src01_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_v_src1_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_v_src1_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src11_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_avg_dst_aver_hv_src11_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src00_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src00_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_v_src0_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_v_src0_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src10_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src10_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_h_src0_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_h_src0_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_16x16_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_8x8_msa(uint8_t *dest,
const uint8_t *src, ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_h_src1_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_h_src1_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src01_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src01_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_v_src1_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_v_src1_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src11_16x16_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)
void ff_hv_mc_qpel_no_rnd_aver_hv_src11_8x8_msa(uint8_t *dest,
const uint8_t *src,
ptrdiff_t stride)

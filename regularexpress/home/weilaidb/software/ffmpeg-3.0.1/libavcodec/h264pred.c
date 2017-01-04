#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 9
#undef BIT_DEPTH
#define BIT_DEPTH 10
#undef BIT_DEPTH
#define BIT_DEPTH 12
#undef BIT_DEPTH
#define BIT_DEPTH 14
#undef BIT_DEPTH
static void pred4x4_vertical_vp8_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_horizontal_vp8_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_down_left_svq3_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_down_left_rv40_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_down_left_rv40_nodown_c(uint8_t *src,
const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_vertical_left_rv40(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride,
const int l0, const int l1, const int l2,
const int l3, const int l4)
static void pred4x4_vertical_left_rv40_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_vertical_left_rv40_nodown_c(uint8_t *src,
const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_vertical_left_vp8_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_horizontal_up_rv40_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_horizontal_up_rv40_nodown_c(uint8_t *src,
const uint8_t *topright,
ptrdiff_t stride)
static void pred4x4_tm_vp8_c(uint8_t *src, const uint8_t *topright,
ptrdiff_t stride)
static void pred16x16_plane_svq3_c(uint8_t *src, ptrdiff_t stride)
static void pred16x16_plane_rv40_c(uint8_t *src, ptrdiff_t stride)
static void pred16x16_tm_vp8_c(uint8_t *src, ptrdiff_t stride)
static void pred8x8_left_dc_rv40_c(uint8_t *src, ptrdiff_t stride)
static void pred8x8_top_dc_rv40_c(uint8_t *src, ptrdiff_t stride)
static void pred8x8_dc_rv40_c(uint8_t *src, ptrdiff_t stride)
static void pred8x8_tm_vp8_c(uint8_t *src, ptrdiff_t stride)
av_cold void ff_h264_pred_init(H264PredContext *h, int codec_id,
const int bit_depth,
int chroma_format_idc)

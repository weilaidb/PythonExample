#define W0 2048
#define W1 2841
#define W2 2676
#define W3 2408
#define W4 2048
#define W5 1609
#define W6 1108
#define W7 565
static void wmv2_idct_row(short * b)
static void wmv2_idct_col(short * b)
static void wmv2_idct_add_c(uint8_t *dest, int line_size, int16_t *block)
static void wmv2_idct_put_c(uint8_t *dest, int line_size, int16_t *block)
static void wmv2_mspel8_h_lowpass(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h)
static void wmv2_mspel8_v_lowpass(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int w)
static void put_mspel8_mc10_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void put_mspel8_mc20_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void put_mspel8_mc30_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void put_mspel8_mc02_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void put_mspel8_mc12_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void put_mspel8_mc32_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void put_mspel8_mc22_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
av_cold void ff_wmv2dsp_init(WMV2DSPContext *c)

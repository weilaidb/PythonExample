#define IdctAdjustBeforeShift 8
#define xC1S7 64277
#define xC2S6 60547
#define xC3S5 54491
#define xC4S4 46341
#define xC5S3 36410
#define xC6S2 25080
#define xC7S1 12785
#define M(a, b) (((a) * (b)) >> 16)
static av_always_inline void idct(uint8_t *dst, int stride,
int16_t *input, int type)
static void vp3_idct_put_c(uint8_t *dest, int line_size,
int16_t *block)
static void vp3_idct_add_c(uint8_t *dest, int line_size,
int16_t *block)
static void vp3_idct_dc_add_c(uint8_t *dest, int line_size,
int16_t *block)
static void vp3_v_loop_filter_c(uint8_t *first_pixel, int stride,
int *bounding_values)
static void vp3_h_loop_filter_c(uint8_t *first_pixel, int stride,
int *bounding_values)
static void put_no_rnd_pixels_l2(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, ptrdiff_t stride, int h)
av_cold void ff_vp3dsp_init(VP3DSPContext *c, int flags)

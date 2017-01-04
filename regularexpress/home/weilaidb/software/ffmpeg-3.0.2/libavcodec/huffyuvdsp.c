#define pb_7f (~0UL / 255 * 0x7f)
#define pb_80 (~0UL / 255 * 0x80)
static void add_bytes_c(uint8_t *dst, uint8_t *src, intptr_t w)
static void add_hfyu_median_pred_c(uint8_t *dst, const uint8_t *src1,
const uint8_t *diff, intptr_t w,
int *left, int *left_top)
static int add_hfyu_left_pred_c(uint8_t *dst, const uint8_t *src, intptr_t w,
int acc)
static void add_hfyu_left_pred_bgr32_c(uint8_t *dst, const uint8_t *src,
intptr_t w, uint8_t *left)
av_cold void ff_huffyuvdsp_init(HuffYUVDSPContext *c)

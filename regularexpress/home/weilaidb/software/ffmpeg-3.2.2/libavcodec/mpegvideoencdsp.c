static int try_8x8basis_c(int16_t rem[64], int16_t weight[64],
int16_t basis[64], int scale)
static void add_8x8basis_c(int16_t rem[64], int16_t basis[64], int scale)
static int pix_sum_c(uint8_t *pix, int line_size)
static int pix_norm1_c(uint8_t *pix, int line_size)
static void draw_edges_8_c(uint8_t *buf, int wrap, int width, int height,
int w, int h, int sides)
static void shrink22(uint8_t *dst, int dst_wrap,
const uint8_t *src, int src_wrap,
int width, int height)
static void shrink44(uint8_t *dst, int dst_wrap,
const uint8_t *src, int src_wrap,
int width, int height)
static void shrink88(uint8_t *dst, int dst_wrap,
const uint8_t *src, int src_wrap,
int width, int height)
av_cold void ff_mpegvideoencdsp_init(MpegvideoEncDSPContext *c,
AVCodecContext *avctx)

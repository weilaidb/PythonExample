static const uint8_t expand5[32] = ;
static const uint8_t expand6[64] = ;
static const uint8_t match5[256][2] = ;
static const uint8_t match6[256][2] = ;
#define mul8(a, b) (((a) * (b) + 128 + (((a) * (b) + 128) >> 8)) >> 8)
#define rgb2rgb565(r, g, b) \
((mul8(r, 31) << 11) | (mul8(g, 63) << 5) | (mul8(b, 31) << 0))
#define lerp13(a, b) ((2 * (a) + (b)) / 3)
static inline void lerp13rgb(uint8_t *out, uint8_t *p1, uint8_t *p2)
static inline void rgb5652rgb(uint8_t *out, uint16_t v)
static unsigned int match_colors(const uint8_t *block, ptrdiff_t stride,
uint16_t c0, uint16_t c1)
{
uint32_t mask = 0;
int dirr, dirg, dirb;
int dots[16];
int stops[4];
int x, y, k = 0;
int c0_point, half_point, c3_point;
uint8_t color[16];
const int indexMap[8] = ;
rgb5652rgb(color + 0, c0);
rgb5652rgb(color + 4, c1);
lerp13rgb(color + 8, color + 0, color + 4);
lerp13rgb(color + 12, color + 4, color + 0);
dirr = color[0 * 4 + 0] - color[1 * 4 + 0];
dirg = color[0 * 4 + 1] - color[1 * 4 + 1];
dirb = color[0 * 4 + 2] - color[1 * 4 + 2];
for (y = 0; y < 4; y++)
static void optimize_colors(const uint8_t *block, ptrdiff_t stride,
uint16_t *pmax16, uint16_t *pmin16)
static int refine_colors(const uint8_t *block, ptrdiff_t stride,
uint16_t *pmax16, uint16_t *pmin16, uint32_t mask)
static int constant_color(const uint8_t *block, ptrdiff_t stride)
static void compress_color(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static void compress_alpha(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static void rgba2ycocg(uint8_t *dst, const uint8_t *pixel)
static int dxt1_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int dxt5_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int dxt5ys_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
av_cold void ff_texturedspenc_init(TextureDSPContext *c)

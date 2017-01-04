#define RGBA(r, g, b, a) (((uint8_t)(r) <<  0) | \
((uint8_t)(g) <<  8) | \
((uint8_t)(b) << 16) | \
((uint8_t)(a) << 24))
static av_always_inline void extract_color(uint32_t colors[4],
uint16_t color0,
uint16_t color1,
int dxtn, int alpha)
static inline void dxt1_block_internal(uint8_t *dst, ptrdiff_t stride,
const uint8_t *block, uint8_t alpha)
static int dxt1_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int dxt1a_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static inline void dxt3_block_internal(uint8_t *dst, ptrdiff_t stride,
const uint8_t *block)
static av_always_inline void premult2straight(uint8_t *src)
static int dxt2_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int dxt3_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static void decompress_indices(uint8_t *dst, const uint8_t *src)
static inline void dxt5_block_internal(uint8_t *dst, ptrdiff_t stride,
const uint8_t *block)
static int dxt4_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int dxt5_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static av_always_inline void ycocg2rgba(uint8_t *src, int scaled)
static int dxt5y_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int dxt5ys_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static inline void rgtc_block_internal(uint8_t *dst, ptrdiff_t stride,
const uint8_t *block,
const int *color_tab)
static inline void rgtc1_block_internal(uint8_t *dst, ptrdiff_t stride,
const uint8_t *block, int sign)
static int rgtc1s_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int rgtc1u_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static inline void rgtc2_block_internal(uint8_t *dst, ptrdiff_t stride,
const uint8_t *block, int sign)
static int rgtc2s_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int rgtc2u_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
static int dxn3dc_block(uint8_t *dst, ptrdiff_t stride, const uint8_t *block)
av_cold void ff_texturedsp_init(TextureDSPContext *c)

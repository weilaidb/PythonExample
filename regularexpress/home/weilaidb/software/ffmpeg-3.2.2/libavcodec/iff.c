typedef enum  mask_type;
typedef struct IffContext  IffContext;
#define LUT8_PART(plane, v)                             \
AV_LE2NE64C(UINT64_C(0x0000000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0000100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0000001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0000101)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000101)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010101)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010101)<<32 | v) << plane
#define LUT8(plane)
static const uint64_t plane8_lut[8][256] = ;
#define LUT32(plane)
static const uint32_t plane32_lut[32][16*4] = ;
static av_always_inline uint32_t gray2rgb(const uint32_t x)
static int cmap_read_palette(AVCodecContext *avctx, uint32_t *pal)
static int extract_header(AVCodecContext *const avctx,
const AVPacket *const avpkt)
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
static void decodeplane8(uint8_t *dst, const uint8_t *buf, int buf_size, int plane)
static void decodeplane32(uint32_t *dst, const uint8_t *buf, int buf_size, int plane)
#define DECODE_HAM_PLANE32(x)       \
first       = buf[x] << 1;      \
second      = buf[(x)+1] << 1;  \
delta      &= pal[first++];     \
delta      |= pal[first];       \
dst[x]      = delta;            \
delta      &= pal[second++];    \
delta      |= pal[second];      \
dst[(x)+1]  = delta
static void decode_ham_plane32(uint32_t *dst, const uint8_t  *buf,
const uint32_t *const pal, unsigned buf_size)
static void lookup_pal_indicies(uint32_t *dst, const uint32_t *buf,
const uint32_t *const pal, unsigned width)
static int decode_byterun(uint8_t *dst, int dst_size,
GetByteContext *gb)
#define DECODE_RGBX_COMMON(type) \
if (!length)  \
for (i = 0; i < length; i++)
static void decode_rgb8(GetByteContext *gb, uint8_t *dst, int width, int height, int linesize)
static void decode_rgbn(GetByteContext *gb, uint8_t *dst, int width, int height, int linesize)
static void decode_deep_rle32(uint8_t *dst, const uint8_t *src, int src_size, int width, int height, int linesize)
static void decode_deep_tvdc32(uint8_t *dst, const uint8_t *src, int src_size, int width, int height, int linesize, const int16_t *tvdc)
static void decode_short_horizontal_delta(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int bpp, int dst_size)
static void decode_byte_vertical_delta(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int xor, int bpp, int dst_size)
static void decode_delta_j(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int h, int bpp, int dst_size)
static void decode_short_vertical_delta(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int bpp, int dst_size)
static void decode_long_vertical_delta(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int bpp, int dst_size)
static void decode_short_vertical_delta2(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int bpp, int dst_size)
static void decode_long_vertical_delta2(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int bpp, int dst_size)
static void decode_delta_d(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int flag, int bpp, int dst_size)
static void decode_delta_e(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int flag, int bpp, int dst_size)
static void decode_delta_l(uint8_t *dst,
const uint8_t *buf, const uint8_t *buf_end,
int w, int flag, int bpp, int dst_size)
static int unsupported(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
#if CONFIG_IFF_ILBM_DECODER
AVCodec ff_iff_ilbm_decoder = ;

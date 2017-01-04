#define PUT_COEFF(c) \
i = scan[coeff--]; \
block[i] = (c) * quant[i];
#define ALIGN(a) \
n = (-get_bits_count(gb)) & (a - 1); \
if (n)
static inline int get_block(GetBitContext *gb, int16_t *block, const uint8_t *scan,
const uint32_t *quant)
int ff_rtjpeg_decode_frame_yuv420(RTJpegContext *c, AVFrame *f,
const uint8_t *buf, int buf_size)
void ff_rtjpeg_decode_init(RTJpegContext *c, int width, int height,
const uint32_t *lquant, const uint32_t *cquant)
void ff_rtjpeg_init(RTJpegContext *c, AVCodecContext *avctx)

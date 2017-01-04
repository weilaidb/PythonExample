typedef struct BlockInfo  BlockInfo;
typedef struct FlashSVContext  FlashSVContext;
static int decode_hybrid(const uint8_t *sptr, const uint8_t *sptr_end, uint8_t *dptr, int dx, int dy,
int h, int w, int stride, const uint32_t *pal)
static av_cold int flashsv_decode_end(AVCodecContext *avctx)
static av_cold int flashsv_decode_init(AVCodecContext *avctx)
static int flashsv2_prime(FlashSVContext *s, uint8_t *src, int size)
static int flashsv_decode_block(AVCodecContext *avctx, AVPacket *avpkt,
GetBitContext *gb, int block_size,
int width, int height, int x_pos, int y_pos,
int blk_idx)
static int calc_deflate_block_size(int tmpblock_size)
static int flashsv_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
#if CONFIG_FLASHSV_DECODER
AVCodec ff_flashsv_decoder = ;
#if CONFIG_FLASHSV2_DECODER
static const uint32_t ff_flashsv2_default_palette[128] = ;
static av_cold int flashsv2_decode_init(AVCodecContext *avctx)
static av_cold int flashsv2_decode_end(AVCodecContext *avctx)
AVCodec ff_flashsv2_decoder = ;

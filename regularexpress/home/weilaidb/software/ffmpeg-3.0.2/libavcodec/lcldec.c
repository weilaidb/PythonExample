#if CONFIG_ZLIB_DECODER
typedef struct LclDecContext  LclDecContext;
static unsigned int mszh_decomp(const unsigned char * srcptr, int srclen, unsigned char * destptr, unsigned int destsize)
#if CONFIG_ZLIB_DECODER
static int zlib_decomp(AVCodecContext *avctx, const uint8_t *src, int src_len, int offset, int expected)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
#if CONFIG_MSZH_DECODER
AVCodec ff_mszh_decoder = ;
#if CONFIG_ZLIB_DECODER
AVCodec ff_zlib_decoder = ;

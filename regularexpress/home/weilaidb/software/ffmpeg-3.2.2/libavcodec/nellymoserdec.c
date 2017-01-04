#define BITSTREAM_READER_LE
typedef struct NellyMoserDecodeContext  NellyMoserDecodeContext;
static void nelly_decode_block(NellyMoserDecodeContext *s,
const unsigned char block[NELLY_BLOCK_LEN],
float audio[NELLY_SAMPLES])
static av_cold int decode_init(AVCodecContext * avctx)
static int decode_tag(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold int decode_end(AVCodecContext * avctx)
AVCodec ff_nellymoser_decoder = ;

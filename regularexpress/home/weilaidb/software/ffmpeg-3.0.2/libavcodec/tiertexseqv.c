#define BITSTREAM_READER_LE
typedef struct SeqVideoContext  SeqVideoContext;
static const unsigned char *seq_unpack_rle_block(const unsigned char *src,
const unsigned char *src_end,
unsigned char *dst, int dst_size)
static const unsigned char *seq_decode_op1(SeqVideoContext *seq,
const unsigned char *src,
const unsigned char *src_end,
unsigned char *dst)
static const unsigned char *seq_decode_op2(SeqVideoContext *seq,
const unsigned char *src,
const unsigned char *src_end,
unsigned char *dst)
static const unsigned char *seq_decode_op3(SeqVideoContext *seq,
const unsigned char *src,
const unsigned char *src_end,
unsigned char *dst)
static int seqvideo_decode(SeqVideoContext *seq, const unsigned char *data, int data_size)
static av_cold int seqvideo_decode_init(AVCodecContext *avctx)
static int seqvideo_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int seqvideo_decode_end(AVCodecContext *avctx)
AVCodec ff_tiertexseqvideo_decoder = ;

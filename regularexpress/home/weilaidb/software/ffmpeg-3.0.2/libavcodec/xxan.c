#define BITSTREAM_READER_LE
typedef struct XanContext  XanContext;
static av_cold int xan_decode_end(AVCodecContext *avctx)
static av_cold int xan_decode_init(AVCodecContext *avctx)
static int xan_unpack_luma(XanContext *s,
uint8_t *dst, const int dst_size)
static int xan_unpack(XanContext *s,
uint8_t *dest, const int dest_len)
static int xan_decode_chroma(AVCodecContext *avctx, unsigned chroma_off)
static int xan_decode_frame_type0(AVCodecContext *avctx)
static int xan_decode_frame_type1(AVCodecContext *avctx)
static int xan_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_xan_wc4_decoder = ;

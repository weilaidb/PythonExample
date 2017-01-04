#define UNCHECKED_BITSTREAM_READER 1
static enum AVPixelFormat h263_get_format(AVCodecContext *avctx)
av_cold int ff_h263_decode_init(AVCodecContext *avctx)
av_cold int ff_h263_decode_end(AVCodecContext *avctx)
static int get_consumed_bytes(MpegEncContext *s, int buf_size)
static int decode_slice(MpegEncContext *s)
int ff_h263_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
const enum AVPixelFormat ff_h263_hwaccel_pixfmt_list_420[] = ;
AVCodec ff_h263_decoder = ;
AVCodec ff_h263p_decoder = ;

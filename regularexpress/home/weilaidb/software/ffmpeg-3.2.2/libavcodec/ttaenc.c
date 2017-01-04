#define BITSTREAM_WRITER_LE
typedef struct TTAEncContext  TTAEncContext;
static av_cold int tta_encode_init(AVCodecContext *avctx)
static int32_t get_sample(const AVFrame *frame, int sample,
enum AVSampleFormat format)
static int tta_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold int tta_encode_close(AVCodecContext *avctx)
AVCodec ff_tta_encoder = ;

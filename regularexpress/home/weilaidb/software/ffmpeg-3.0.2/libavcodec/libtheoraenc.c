typedef struct TheoraContext  TheoraContext;
static int concatenate_packet(unsigned int* offset,
AVCodecContext* avc_context,
const ogg_packet* packet)
static int get_stats(AVCodecContext *avctx, int eos)
static int submit_stats(AVCodecContext *avctx)
static av_cold int encode_init(AVCodecContext* avc_context)
static int encode_frame(AVCodecContext* avc_context, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int encode_close(AVCodecContext* avc_context)
AVCodec ff_libtheora_encoder = ;

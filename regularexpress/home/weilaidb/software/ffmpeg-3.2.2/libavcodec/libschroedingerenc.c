typedef struct SchroEncoderParams  SchroEncoderParams;
static int set_chroma_format(AVCodecContext *avctx)
static av_cold int libschroedinger_encode_init(AVCodecContext *avctx)
static SchroFrame *libschroedinger_frame_from_data(AVCodecContext *avctx,
const AVFrame *frame)
static void libschroedinger_free_frame(void *data)
static int libschroedinger_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static int libschroedinger_encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(SchroEncoderParams, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass libschroedinger_class = ;
AVCodec ff_libschroedinger_encoder = ;

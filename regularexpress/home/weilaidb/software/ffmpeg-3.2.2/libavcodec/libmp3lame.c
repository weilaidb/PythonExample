#define BUFFER_SIZE (7200 + 2 * MPA_FRAME_SIZE + MPA_FRAME_SIZE / 4+1000)
typedef struct LAMEContext  LAMEContext;
static int realloc_buffer(LAMEContext *s)
static av_cold int mp3lame_encode_close(AVCodecContext *avctx)
static av_cold int mp3lame_encode_init(AVCodecContext *avctx)
#define ENCODE_BUFFER(func, buf_type, buf_name) do  while (0)
static int mp3lame_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#define OFFSET(x) offsetof(LAMEContext, x)
#define AE AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass libmp3lame_class = ;
static const AVCodecDefault libmp3lame_defaults[] = ;
static const int libmp3lame_sample_rates[] = ;
AVCodec ff_libmp3lame_encoder = ;

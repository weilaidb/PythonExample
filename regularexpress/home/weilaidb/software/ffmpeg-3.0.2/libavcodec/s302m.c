#define AES3_HEADER_LEN 4
typedef struct S302Context  S302Context;
static int s302m_parse_frame_header(AVCodecContext *avctx, const uint8_t *buf,
int buf_size)
static int s302m_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_DECODING_PARAM
static const AVOption s302m_options[] = ;
static const AVClass s302m_class = ;
AVCodec ff_s302m_decoder = ;

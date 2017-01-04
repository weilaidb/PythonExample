typedef struct AACContext  AACContext;
static const AVOption aac_enc_options[] = ;
static const AVClass aac_enc_class = ;
static const char *aac_get_error(AACENC_ERROR err)
static int aac_encode_close(AVCodecContext *avctx)
static av_cold int aac_encode_init(AVCodecContext *avctx)
static int aac_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static const AVProfile profiles[] = ;
static const AVCodecDefault aac_encode_defaults[] = ;
static const uint64_t aac_channel_layout[] = ;
static const int aac_sample_rates[] = ;
AVCodec ff_libfdk_aac_encoder = ;

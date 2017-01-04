#define FAAC_DELAY_SAMPLES 1024
typedef struct FaacAudioContext  FaacAudioContext;
static av_cold int Faac_encode_close(AVCodecContext *avctx)
static const int channel_maps[][6] = ;
static av_cold int Faac_encode_init(AVCodecContext *avctx)
static int Faac_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static const AVProfile profiles[] = ;
static const uint64_t faac_channel_layouts[] = ;
AVCodec ff_libfaac_encoder = ;

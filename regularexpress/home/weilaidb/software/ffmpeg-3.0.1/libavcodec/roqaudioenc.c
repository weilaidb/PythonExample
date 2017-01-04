#define ROQ_FRAME_SIZE           735
#define ROQ_HEADER_SIZE   8
#define MAX_DPCM (127*127)
typedef struct ROQDPCMContext  ROQDPCMContext;
static av_cold int roq_dpcm_encode_close(AVCodecContext *avctx)
static av_cold int roq_dpcm_encode_init(AVCodecContext *avctx)
static unsigned char dpcm_predict(short *previous, short current)
static int roq_dpcm_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_roq_dpcm_encoder = ;

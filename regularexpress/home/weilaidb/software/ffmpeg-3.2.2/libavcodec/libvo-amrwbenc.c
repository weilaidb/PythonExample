#define MAX_PACKET_SIZE  (1 + (477 + 7) / 8)
typedef struct AMRWBContext  AMRWBContext;
static const AVOption options[] = ;
static const AVClass amrwb_class = ;
static int get_wb_bitrate_mode(int bitrate, void *log_ctx)
static av_cold int amr_wb_encode_init(AVCodecContext *avctx)
static int amr_wb_encode_close(AVCodecContext *avctx)
static int amr_wb_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_libvo_amrwbenc_encoder = ;

static int amr_decode_fix_avctx(AVCodecContext *avctx)
#if CONFIG_LIBOPENCORE_AMRNB
typedef struct AMRContext  AMRContext;
#if CONFIG_LIBOPENCORE_AMRNB_DECODER
static av_cold int amr_nb_decode_init(AVCodecContext *avctx)
static av_cold int amr_nb_decode_close(AVCodecContext *avctx)
static int amr_nb_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_libopencore_amrnb_decoder = ;
#if CONFIG_LIBOPENCORE_AMRNB_ENCODER
typedef struct AMR_bitrates  AMR_bitrates;
static int get_bitrate_mode(int bitrate, void *log_ctx)
static const AVOption options[] = ;
static const AVClass amrnb_class = ;
static av_cold int amr_nb_encode_init(AVCodecContext *avctx)
static av_cold int amr_nb_encode_close(AVCodecContext *avctx)
static int amr_nb_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_libopencore_amrnb_encoder = ;
#if CONFIG_LIBOPENCORE_AMRWB_DECODER
typedef struct AMRWBContext  AMRWBContext;
static av_cold int amr_wb_decode_init(AVCodecContext *avctx)
static int amr_wb_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static int amr_wb_decode_close(AVCodecContext *avctx)
AVCodec ff_libopencore_amrwb_decoder = ;

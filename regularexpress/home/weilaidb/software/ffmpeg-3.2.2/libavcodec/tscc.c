typedef struct TsccContext  CamtasiaContext;
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_tscc_decoder = ;

typedef struct CyuvDecodeContext  CyuvDecodeContext;
static av_cold int cyuv_decode_init(AVCodecContext *avctx)
static int cyuv_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
#if CONFIG_AURA_DECODER
AVCodec ff_aura_decoder = ;
#if CONFIG_CYUV_DECODER
AVCodec ff_cyuv_decoder = ;

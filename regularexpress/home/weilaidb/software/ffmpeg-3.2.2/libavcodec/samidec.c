typedef struct  SAMIContext;
static int sami_paragraph_to_ass(AVCodecContext *avctx, const char *src)
static int sami_decode_frame(AVCodecContext *avctx,
void *data, int *got_sub_ptr, AVPacket *avpkt)
static av_cold int sami_init(AVCodecContext *avctx)
static av_cold int sami_close(AVCodecContext *avctx)
static void sami_flush(AVCodecContext *avctx)
AVCodec ff_sami_decoder = ;

#define WV_DEFAULT_BLOCK_SIZE 32768
typedef struct LibWavpackContext  LibWavpackContext;
static int wavpack_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_output)
static int encode_callback(void *id, void *data, int32_t count)
static av_cold int wavpack_encode_init(AVCodecContext *avctx)
static av_cold int wavpack_encode_close(AVCodecContext *avctx)
AVCodec ff_libwavpack_encoder = ;

#define BITSTREAM_READER_LE
typedef struct TrueMotion2RTContext  TrueMotion2RTContext;
static const int16_t delta_tab2[] = ;
static const int16_t delta_tab3[] = ;
static const int16_t delta_tab4[] = ;
static const int16_t *const delta_tabs[] = ;
static int truemotion2rt_decode_header(AVCodecContext *avctx, const AVPacket *avpkt)
static int truemotion2rt_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int truemotion2rt_decode_init(AVCodecContext *avctx)
AVCodec ff_truemotion2rt_decoder = ;

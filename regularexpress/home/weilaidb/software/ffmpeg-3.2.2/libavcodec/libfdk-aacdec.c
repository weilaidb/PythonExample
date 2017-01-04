#define AAC_PCM_MAX_OUTPUT_CHANNELS AAC_PCM_OUTPUT_CHANNELS
enum ConcealMethod ;
typedef struct FDKAACDecContext  FDKAACDecContext;
#define DMX_ANC_BUFFSIZE       128
#define DECODER_MAX_CHANNELS     8
#define DECODER_BUFFSIZE      2048 * sizeof(INT_PCM)
#define OFFSET(x) offsetof(FDKAACDecContext, x)
#define AD AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption fdk_aac_dec_options[] = ;
static const AVClass fdk_aac_dec_class = ;
static int get_stream_info(AVCodecContext *avctx)
static av_cold int fdk_aac_decode_close(AVCodecContext *avctx)
static av_cold int fdk_aac_decode_init(AVCodecContext *avctx)
static int fdk_aac_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void fdk_aac_decode_flush(AVCodecContext *avctx)
AVCodec ff_libfdk_aac_decoder = ;

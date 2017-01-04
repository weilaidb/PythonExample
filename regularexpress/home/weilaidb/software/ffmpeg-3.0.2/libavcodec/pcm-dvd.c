typedef struct PCMDVDContext  PCMDVDContext;
static av_cold int pcm_dvd_decode_init(AVCodecContext *avctx)
static av_cold int pcm_dvd_decode_uninit(AVCodecContext *avctx)
static int pcm_dvd_parse_header(AVCodecContext *avctx, const uint8_t *header)
static void *pcm_dvd_decode_samples(AVCodecContext *avctx, const uint8_t *src,
void *dst, int blocks)
static int pcm_dvd_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_pcm_dvd_decoder = ;

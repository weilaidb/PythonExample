#define VPX_CODEC_DISABLE_COMPAT 1
typedef struct VPxDecoderContext  VPxContext;
static av_cold int vpx_init(AVCodecContext *avctx,
const struct vpx_codec_iface *iface,
int is_alpha_decoder)
static int set_pix_fmt(AVCodecContext *avctx, struct vpx_image *img,
int has_alpha_channel)
static int decode_frame(AVCodecContext *avctx, vpx_codec_ctx_t *decoder,
uint8_t *data, uint32_t data_sz)
static int vpx_decode(AVCodecContext *avctx,
void *data, int *got_frame, AVPacket *avpkt)
static av_cold int vpx_free(AVCodecContext *avctx)
#if CONFIG_LIBVPX_VP8_DECODER
static av_cold int vp8_init(AVCodecContext *avctx)
AVCodec ff_libvpx_vp8_decoder = ;
#if CONFIG_LIBVPX_VP9_DECODER
static av_cold int vp9_init(AVCodecContext *avctx)
AVCodec ff_libvpx_vp9_decoder = ;

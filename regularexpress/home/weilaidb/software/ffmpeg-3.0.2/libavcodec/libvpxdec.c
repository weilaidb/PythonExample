#define VPX_CODEC_DISABLE_COMPAT 1
typedef struct VP8DecoderContext  VP8Context;
static av_cold int vpx_init(AVCodecContext *avctx,
const struct vpx_codec_iface *iface)
static int set_pix_fmt(AVCodecContext *avctx, struct vpx_image *img)
static int vp8_decode(AVCodecContext *avctx,
void *data, int *got_frame, AVPacket *avpkt)
static av_cold int vp8_free(AVCodecContext *avctx)
#if CONFIG_LIBVPX_VP8_DECODER
static av_cold int vp8_init(AVCodecContext *avctx)
AVCodec ff_libvpx_vp8_decoder = ;
#if CONFIG_LIBVPX_VP9_DECODER
static av_cold int vp9_init(AVCodecContext *avctx)
AVCodec ff_libvpx_vp9_decoder = ;

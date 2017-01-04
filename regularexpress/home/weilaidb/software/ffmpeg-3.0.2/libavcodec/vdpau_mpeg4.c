static int vdpau_mpeg4_start_frame(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static int vdpau_mpeg4_decode_slice(av_unused AVCodecContext *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
static int vdpau_mpeg4_init(AVCodecContext *avctx)
AVHWAccel ff_mpeg4_vdpau_hwaccel = ;

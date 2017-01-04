static int vdpau_mpeg_start_frame(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static int vdpau_mpeg_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
#if CONFIG_MPEG1_VDPAU_HWACCEL
static int vdpau_mpeg1_init(AVCodecContext *avctx)
AVHWAccel ff_mpeg1_vdpau_hwaccel = ;
#if CONFIG_MPEG2_VDPAU_HWACCEL
static int vdpau_mpeg2_init(AVCodecContext *avctx)
AVHWAccel ff_mpeg2_vdpau_hwaccel = ;

static int vdpau_vc1_start_frame(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static int vdpau_vc1_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static int vdpau_vc1_init(AVCodecContext *avctx)
#if CONFIG_WMV3_VDPAU_HWACCEL
AVHWAccel ff_wmv3_vdpau_hwaccel = ;
AVHWAccel ff_vc1_vdpau_hwaccel = ;

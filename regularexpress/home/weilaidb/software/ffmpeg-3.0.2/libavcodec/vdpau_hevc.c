static int vdpau_hevc_start_frame(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static const uint8_t start_code_prefix[3] = ;
static int vdpau_hevc_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer, uint32_t size)
static int vdpau_hevc_end_frame(AVCodecContext *avctx)
static int vdpau_hevc_init(AVCodecContext *avctx)
AVHWAccel ff_hevc_vdpau_hwaccel = ;
